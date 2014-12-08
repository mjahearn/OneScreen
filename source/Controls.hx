import flixel.FlxG;
import flixel.util.FlxVector;

class Controls {
    public static var arrows:FlxVector;

    public static function update():Void {
        arrows = new FlxVector();
        if (FlxG.keys.pressed.RIGHT) {
            arrows.x += 1;
        } if (FlxG.keys.pressed.LEFT) {
            arrows.x -= 1;
        } if (FlxG.keys.pressed.DOWN) {
            arrows.y += 1;
        } if (FlxG.keys.pressed.UP) {
            arrows.y -= 1;
        }
    }
}