package;

import flixel.util.FlxColor;
import flixel.addons.nape.FlxNapeSprite;
import flixel.addons.nape.FlxNapeState;
import flixel.FlxG;
import flixel.util.FlxPoint;
import nape.callbacks.CbType;
import nape.dynamics.InteractionFilter;
import nape.geom.Vec2;

using flixel.util.FlxSpriteUtil;

class Player extends FlxNapeSprite {

    public static var cbType:CbType = new CbType();
    public static var filter:InteractionFilter = new InteractionFilter(2);

    public function new (?X:Int = 0, ?Y:Int = 0):Void {
        super(X, Y, null, false);
        makeGraphic(32, 32, 0, true);
        drawCircle(16,16,16,FlxColor.BLUE);
        createCircularBody();
        setBodyMaterial(1, 1, 2, 1e10);

        health = Reg.maxShootSpeed*2-1; //This is so a ball at maximum speed will 2-hit KO

        antialiasing = true;
        body.allowRotation = false;

        body.space = FlxNapeState.space;
        body.cbTypes.add(cbType);
        body.setShapeFilters(filter);
    }

    override public function update():Void {
        body.velocity.setxy(Controls.arrows.dx*Reg.maxPlayerSpeed, Controls.arrows.dy*Reg.maxPlayerSpeed);
        super.update();
    }

    public function getHit(s:Float):Void {
        health -= s;
        if (health < 0) {
            kill();
        }
    }
}