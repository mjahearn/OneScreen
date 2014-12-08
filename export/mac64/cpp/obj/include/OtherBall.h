#ifndef INCLUDED_OtherBall
#define INCLUDED_OtherBall

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/nape/FlxNapeSprite.h>
HX_DECLARE_CLASS0(OtherBall)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(nape,callbacks,CbType)
HX_DECLARE_CLASS2(nape,geom,Vec2)


class HXCPP_CLASS_ATTRIBUTES  OtherBall_obj : public ::flixel::addons::nape::FlxNapeSprite_obj{
	public:
		typedef ::flixel::addons::nape::FlxNapeSprite_obj super;
		typedef OtherBall_obj OBJ_;
		OtherBall_obj();
		Void __construct(Dynamic __o_X,Dynamic __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OtherBall_obj > __new(Dynamic __o_X,Dynamic __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OtherBall_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("OtherBall"); }

		Float speed;
		virtual Void update( );

		virtual Void shootAtSpeed( ::nape::geom::Vec2 v,Float s);
		Dynamic shootAtSpeed_dyn();

		static ::nape::callbacks::CbType cbType;
};


#endif /* INCLUDED_OtherBall */ 
