#ifndef INCLUDED_flixel_addons_nape_FlxNapeTilemap
#define INCLUDED_flixel_addons_nape_FlxNapeTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tile/FlxTilemap.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeTilemap)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,FlxRect)
HX_DECLARE_CLASS2(nape,geom,Vec2)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
namespace flixel{
namespace addons{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  FlxNapeTilemap_obj : public ::flixel::tile::FlxTilemap_obj{
	public:
		typedef ::flixel::tile::FlxTilemap_obj super;
		typedef FlxNapeTilemap_obj OBJ_;
		FlxNapeTilemap_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxNapeTilemap_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxNapeTilemap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxNapeTilemap"); }

		::nape::phys::Body body;
		Array< int > _binaryData;
		virtual Void update( );

		virtual ::flixel::tile::FlxTilemap loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  TileWidth,hx::Null< int >  TileHeight,hx::Null< int >  AutoTile,hx::Null< int >  StartingIndex,hx::Null< int >  DrawIndex,hx::Null< int >  CollideIndex);

		virtual Void addSolidTile( int X,int Y,::nape::phys::Material mat);
		Dynamic addSolidTile_dyn();

		virtual Void placeCustomPolygon( Array< int > tileIndices,Array< ::Dynamic > vertices,::nape::phys::Material mat);
		Dynamic placeCustomPolygon_dyn();

		virtual Void setupCollideIndex( hx::Null< int >  CollideIndex,::nape::phys::Material mat);
		Dynamic setupCollideIndex_dyn();

		virtual Void setupTileIndices( Array< int > tileIndices,::nape::phys::Material mat);
		Dynamic setupTileIndices_dyn();

		virtual Void constructCollider( ::nape::phys::Material mat);
		Dynamic constructCollider_dyn();

		virtual ::flixel::util::FlxRect constructRectangle( int StartX,int StartY,int EndY);
		Dynamic constructRectangle_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace nape

#endif /* INCLUDED_flixel_addons_nape_FlxNapeTilemap */ 
