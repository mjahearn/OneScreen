package;

import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.addons.nape.FlxNapeSprite;
import flixel.addons.nape.FlxNapeState;
import nape.callbacks.CbType;
import nape.callbacks.InteractionType;
import nape.dynamics.InteractionFilter;

using flixel.util.FlxSpriteUtil;

class Pocket extends FlxNapeSprite {
    public static var cbType:CbType = new CbType();
    public static var filter:InteractionFilter = new InteractionFilter(1, 0, 4);

    public function new(?X:Int = 0, ?Y:Int = 0) {
        super(X, Y, null, false);
        makeGraphic(32, 32, 0, true);
        drawCircle(16,16,16,FlxColor.BLACK);
        createCircularBody(1);
        setBodyMaterial();

        body.shapes.at(0).sensorEnabled = true;

        body.space = FlxNapeState.space;
        body.cbTypes.add(cbType);
        body.setShapeFilters(filter);
    }

    /*override public function update():Void {
        if (body.interactingBodies(InteractionType.SENSOR).length > 0) {
            body.shapes.at(0).sensorEnabled = false;
        }
    }*/
}
