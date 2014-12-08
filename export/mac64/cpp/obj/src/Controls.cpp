#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVector
#include <flixel/util/FlxVector.h>
#endif

Void Controls_obj::__construct()
{
	return null();
}

//Controls_obj::~Controls_obj() { }

Dynamic Controls_obj::__CreateEmpty() { return  new Controls_obj; }
hx::ObjectPtr< Controls_obj > Controls_obj::__new()
{  hx::ObjectPtr< Controls_obj > result = new Controls_obj();
	result->__construct();
	return result;}

Dynamic Controls_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Controls_obj > result = new Controls_obj();
	result->__construct();
	return result;}

::flixel::util::FlxVector Controls_obj::arrows;

Void Controls_obj::update( ){
{
		HX_STACK_FRAME("Controls","update",0x9d2db8e1,"Controls.update","Controls.hx",7,0x0ab041e8)
		HX_STACK_LINE(8)
		::flixel::util::FlxVector _g = ::flixel::util::FlxVector_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(8)
		::Controls_obj::arrows = _g;
		HX_STACK_LINE(9)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)39,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(10)
			::flixel::util::FlxVector _g1 = ::Controls_obj::arrows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(10)
			_g1->set_x((_g1->x + (int)1));
		}
		HX_STACK_LINE(11)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)37,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(12)
			::flixel::util::FlxVector _g1 = ::Controls_obj::arrows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(12)
			_g1->set_x((_g1->x - (int)1));
		}
		HX_STACK_LINE(13)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)40,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(14)
			::flixel::util::FlxVector _g1 = ::Controls_obj::arrows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(14)
			_g1->set_y((_g1->y + (int)1));
		}
		HX_STACK_LINE(15)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)38,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(16)
			::flixel::util::FlxVector _g1 = ::Controls_obj::arrows;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(16)
			_g1->set_y((_g1->y - (int)1));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Controls_obj,update,(void))


Controls_obj::Controls_obj()
{
}

Dynamic Controls_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"arrows") ) { return arrows; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Controls_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"arrows") ) { arrows=inValue.Cast< ::flixel::util::FlxVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Controls_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("arrows"),
	HX_CSTRING("update"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Controls_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Controls_obj::arrows,"arrows");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Controls_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Controls_obj::arrows,"arrows");
};

#endif

Class Controls_obj::__mClass;

void Controls_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Controls"), hx::TCanCast< Controls_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Controls_obj::__boot()
{
}

