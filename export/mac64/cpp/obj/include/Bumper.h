#ifndef INCLUDED_Bumper
#define INCLUDED_Bumper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/nape/FlxNapeSprite.h>
HX_DECLARE_CLASS0(Bumper)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(nape,callbacks,CbType)


class HXCPP_CLASS_ATTRIBUTES  Bumper_obj : public ::flixel::addons::nape::FlxNapeSprite_obj{
	public:
		typedef ::flixel::addons::nape::FlxNapeSprite_obj super;
		typedef Bumper_obj OBJ_;
		Bumper_obj();
		Void __construct(Dynamic __o_X,Dynamic __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Bumper_obj > __new(Dynamic __o_X,Dynamic __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Bumper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Bumper"); }

		static ::nape::callbacks::CbType cbType;
};


#endif /* INCLUDED_Bumper */ 
