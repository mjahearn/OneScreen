package;

import flixel.FlxSprite;
import flixel.util.FlxRandom;
import nape.phys.Material;
import nape.geom.Vec2;
import flixel.addons.nape.FlxNapeTilemap;
import flixel.tile.FlxTilemap;
import flixel.addons.nape.FlxNapeVelocity;
import flixel.addons.editors.tiled.TiledMap;
import nape.callbacks.InteractionCallback;
import flixel.addons.nape.FlxNapeSprite;
import nape.callbacks.InteractionType;
import nape.callbacks.CbEvent;
import flixel.addons.nape.FlxNapeState;
import flixel.FlxG;
import nape.callbacks.InteractionListener;

using flixel.util.FlxSpriteUtil;

/**
 * A FlxState which can be used for the actual gameplay.
 */
class PlayState extends FlxNapeState
{
	var player:Player;
	var mouseCounter:Float;
	var preCue:FlxSprite;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		super.create();
		FlxG.mouse.useSystemCursor = true;
		FlxNapeState.space.worldLinearDrag = 0;

		var mapData:TiledMap = new TiledMap("assets/maps/testMap.tmx");
		var level:FlxNapeTilemap = new FlxNapeTilemap();
		level.widthInTiles = 22;
		level.heightInTiles = 17;
		level.loadMap(mapData.getLayer("tiles").tileArray, "assets/images/tilesheet.png", 32, 32, 0, 1, 1, 2);
		level.setupCollideIndex(2, new Material(1,0,0,Math.POSITIVE_INFINITY,0));
		level.body.space = FlxNapeState.space;
		add(level);

		for (b in mapData.getObjectGroup("bumpers").objects) {
			add(new Bumper(b.x+16, b.y+16));
		}

		for (p in mapData.getObjectGroup("pockets").objects) {
			add(new Pocket(p.x+16, p.y+16));
			var maxAngle:Float = 180;
			var minAngle:Float = -180;
			if (p.x <= 32) {
				if (p.y <= 32) {
					maxAngle = Math.PI/2;
					minAngle = 0;
				} else if (p.y >= 480) {
					maxAngle = 0;
					minAngle = -Math.PI/2;
				} else {
					maxAngle = Math.PI/2;
					minAngle = -Math.PI/2;
				}
			} else if (p.x >= 640) {
				if (p.y <= 32) {
					maxAngle = Math.PI;
					minAngle = Math.PI/2;
				} else if (p.y >= 480) {
					maxAngle = -Math.PI/2;
					minAngle = -Math.PI;
				} else {
					maxAngle = 3*Math.PI/2;
					minAngle = Math.PI/2;
				}
			} else if (p.y <= 32) {
				maxAngle = 0;
				minAngle = -Math.PI;
			} else if (p.y >= 480) {
				maxAngle = Math.PI;
				minAngle = 0;
			}
			var tempAngle:Float = FlxRandom.floatRanged(minAngle, maxAngle);
			var startDir:Vec2 = new Vec2(Math.cos(tempAngle), Math.sin(tempAngle));
			var testBall:OtherBall = new OtherBall(Math.round(p.x+16+startDir.x*33), Math.round(p.y+16+startDir.y*33));
			testBall.shootAtSpeed(startDir, Reg.minShootSpeed);
			add(testBall);
		}

		player = new Player(mapData.getObjectGroup("player").objects[0].x+16, mapData.getObjectGroup("player").objects[0].y+16);
		add(player);

		preCue = new FlxSprite().makeGraphic(32, 32, 0, true);
		preCue.drawCircle(16,16,16,0x7fffffff);
		preCue.visible = false;
		add(preCue);

		//FlxG.log.add("testing");
		FlxNapeState.space.listeners.add(new InteractionListener(CbEvent.BEGIN, InteractionType.ANY, Cueball.cbType, Player.cbType, hitPlayer));
		FlxNapeState.space.listeners.add(new InteractionListener(CbEvent.BEGIN, InteractionType.ANY, OtherBall.cbType, Player.cbType, hitPlayer));
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		Controls.update();
		var shootDir:Vec2 = player.body.position.sub(Vec2.weak(FlxG.mouse.x, FlxG.mouse.y), true).unit(false);
		var ballPlace:Vec2 = Vec2.weak(player.x+shootDir.x*33, player.y+shootDir.y*33);

		if (/*FlxG.keys.justPressed.SPACE*/FlxG.mouse.justPressed&& player.alive) {
			mouseCounter = 0;
			preCue.visible = true;
			preCue.x = ballPlace.x;
			preCue.y = ballPlace.y;
		} else if (/*FlxG.keys.pressed.SPACE*/FlxG.mouse.pressed && player.alive) {
			mouseCounter += FlxG.elapsed;
			preCue.x = ballPlace.x;
			preCue.y = ballPlace.y;
		} else if (/*FlxG.keys.justReleased.SPACE*/FlxG.mouse.justReleased && player.alive) {
			preCue.visible = false;
			var testCueball:Cueball = new Cueball(Math.round(ballPlace.x)+16, Math.round(ballPlace.y)+16);
			add(testCueball);
			testCueball.shootAtSpeed(shootDir,
				(Reg.maxShootSpeed-Reg.minShootSpeed)*Math.min(1, (mouseCounter/Reg.shootChargeTime))+Reg.minShootSpeed);
		} else if (!player.alive) {
			preCue.visible = false;
		}

		super.update();
	}

	private function hitPlayer(collision:InteractionCallback):Void {
		player.getHit(collision.int1.castBody.velocity.length);
	}
}