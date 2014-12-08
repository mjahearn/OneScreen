package;

import nape.geom.Vec2;
import nape.callbacks.InteractionType;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.addons.nape.FlxNapeSprite;
import flixel.addons.nape.FlxNapeState;
import flixel.addons.nape.FlxNapeVelocity;
import nape.callbacks.CbType;
import nape.dynamics.InteractionFilter;

using flixel.util.FlxSpriteUtil;

class OtherBall extends FlxNapeSprite {

    public static var cbType:CbType = new CbType();

    public var speed:Float;

    public function new(?X:Int = 0, ?Y:Int = 0) {
        speed = 0;

        super(X, Y, null, false);
        makeGraphic(32, 32, 0, true);
        drawCircle(16,16,16,FlxColor.RED);
        createCircularBody();
        setBodyMaterial(Math.POSITIVE_INFINITY, 0, 0, 1, 0);

        antialiasing = true;

        body.space = FlxNapeState.space;
        body.cbTypes.add(cbType);
        var tempFilter:InteractionFilter = new InteractionFilter();
        tempFilter.sensorGroup = 4;
        body.setShapeFilters(tempFilter);
    }

    override public function update():Void {
        if (speed != 0 && body.velocity.length != speed) {
            body.velocity.normalise().muleq(speed);
        }
        if (body.interactingBodies(InteractionType.SENSOR).length > 0) {
            kill();
        }
        super.update();
    }

    public function shootAtSpeed(v:Vec2, s:Float):Void {
        body.velocity = v.mul(s);
        speed = s;
    }
}
