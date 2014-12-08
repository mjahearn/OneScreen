package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/playerSketch.xcf", "assets/images/playerSketch.xcf");
			type.set ("assets/images/playerSketch.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tilesheet.xcf", "assets/images/tilesheet.xcf");
			type.set ("assets/images/tilesheet.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tilesheet.png", "assets/images/tilesheet.png");
			type.set ("assets/images/tilesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bumper.xcf", "assets/images/bumper.xcf");
			type.set ("assets/images/bumper.xcf", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/bumper.png", "assets/images/bumper.png");
			type.set ("assets/images/bumper.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/maps/testMap.tmx", "assets/maps/testMap.tmx");
			type.set ("assets/maps/testMap.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
