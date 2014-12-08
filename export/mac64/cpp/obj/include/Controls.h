#ifndef INCLUDED_Controls
#define INCLUDED_Controls

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Controls)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxVector)


class HXCPP_CLASS_ATTRIBUTES  Controls_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Controls_obj OBJ_;
		Controls_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Controls_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Controls_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Controls"); }

		static ::flixel::util::FlxVector arrows;
		static Void update( );
		static Dynamic update_dyn();

};


#endif /* INCLUDED_Controls */ 
