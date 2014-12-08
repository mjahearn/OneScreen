package;

import flixel.addons.nape.FlxNapeState;
import flixel.addons.nape.FlxNapeSprite;
import flixel.util.FlxColor;
import nape.callbacks.CbType;

class Bumper extends FlxNapeSprite {

    public static var cbType:CbType = new CbType();

    public function new(?X:Int = 0, ?Y:Int = 0) {
        super(X, Y, null, false);
        makeGraphic(32, 32, FlxColor.BROWN);
        createRectangularBody();

        body.allowMovement = false;
        body.allowRotation = false;

        body.space = FlxNapeState.space;
        body.cbTypes.add(cbType);
    }
}
