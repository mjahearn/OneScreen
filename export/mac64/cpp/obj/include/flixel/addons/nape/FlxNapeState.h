#ifndef INCLUDED_flixel_addons_nape_FlxNapeState
#define INCLUDED_flixel_addons_nape_FlxNapeState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS3(flixel,system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(nape,phys,Body)
HX_DECLARE_CLASS2(nape,phys,Interactor)
HX_DECLARE_CLASS2(nape,phys,Material)
HX_DECLARE_CLASS2(nape,space,Space)
HX_DECLARE_CLASS2(nape,util,Debug)
HX_DECLARE_CLASS2(nape,util,ShapeDebug)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace flixel{
namespace addons{
namespace nape{


class HXCPP_CLASS_ATTRIBUTES  FlxNapeState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef FlxNapeState_obj OBJ_;
		FlxNapeState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxNapeState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxNapeState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxNapeState"); }

		int velocityIterations;
		int positionIterations;
		bool napeDebugEnabled;
		::nape::util::ShapeDebug _physDbgSpr;
		::flixel::system::ui::FlxSystemButton _button;
		virtual Void create( );

		virtual ::nape::phys::Body createWalls( hx::Null< Float >  MinX,hx::Null< Float >  MinY,hx::Null< Float >  MaxX,hx::Null< Float >  MaxY,hx::Null< Float >  Thickness,::nape::phys::Material _Material);
		Dynamic createWalls_dyn();

		virtual Void update( );

		virtual Void draw( );

		virtual Void destroy( );

		virtual bool set_napeDebugEnabled( bool Value);
		Dynamic set_napeDebugEnabled_dyn();

		virtual Void drawPhysDebug( );
		Dynamic drawPhysDebug_dyn();

		virtual Void toggleDebug( );
		Dynamic toggleDebug_dyn();

		static ::nape::space::Space space;
		static ::nape::util::ShapeDebug get_debug( );
		static Dynamic get_debug_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace nape

#endif /* INCLUDED_flixel_addons_nape_FlxNapeState */ 
