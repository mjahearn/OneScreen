#include <hxcpp.h>

#ifndef INCLUDED_Bumper
#include <Bumper.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeState
#include <flixel/addons/nape/FlxNapeState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_phys_Body
#include <nape/phys/Body.h>
#endif
#ifndef INCLUDED_nape_phys_BodyList
#include <nape/phys/BodyList.h>
#endif
#ifndef INCLUDED_nape_phys_BodyType
#include <nape/phys/BodyType.h>
#endif
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Body
#include <zpp_nape/phys/ZPP_Body.h>
#endif
#ifndef INCLUDED_zpp_nape_phys_ZPP_Interactor
#include <zpp_nape/phys/ZPP_Interactor.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Component
#include <zpp_nape/space/ZPP_Component.h>
#endif
#ifndef INCLUDED_zpp_nape_space_ZPP_Space
#include <zpp_nape/space/ZPP_Space.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_BodyList
#include <zpp_nape/util/ZPP_BodyList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_CbTypeList
#include <zpp_nape/util/ZPP_CbTypeList.h>
#endif

Void Bumper_obj::__construct(Dynamic __o_X,Dynamic __o_Y)
{
HX_STACK_FRAME("Bumper","new",0xabdba475,"Bumper.new","Bumper.hx",12,0x75dd609b)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
{
	HX_STACK_LINE(13)
	super::__construct(X,Y,null(),false,null());
	HX_STACK_LINE(14)
	this->makeGraphic((int)32,(int)32,(int)-6927616,null(),null());
	HX_STACK_LINE(15)
	this->createRectangularBody(null(),null(),null());
	HX_STACK_LINE(17)
	{
		HX_STACK_LINE(17)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			::String _g = HX_CSTRING("false");		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(17)
			::String _g1 = (HX_CSTRING("Body::") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			_this->zpp_inner->immutable_midstep(_g1);
			HX_STACK_LINE(17)
			if (((!(_this->zpp_inner->nomove) != false))){
				HX_STACK_LINE(17)
				_this->zpp_inner->nomove = true;
				HX_STACK_LINE(17)
				_this->zpp_inner->invalidate_mass();
			}
		}
		HX_STACK_LINE(17)
		!(_this->zpp_inner->nomove);
	}
	HX_STACK_LINE(18)
	{
		HX_STACK_LINE(18)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(18)
		{
			HX_STACK_LINE(18)
			::String _g2 = HX_CSTRING("false");		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(18)
			::String _g3 = (HX_CSTRING("Body::") + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(18)
			_this->zpp_inner->immutable_midstep(_g3);
			HX_STACK_LINE(18)
			if (((!(_this->zpp_inner->norotate) != false))){
				HX_STACK_LINE(18)
				_this->zpp_inner->norotate = true;
				HX_STACK_LINE(18)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(18)
		!(_this->zpp_inner->norotate);
	}
	HX_STACK_LINE(20)
	{
		HX_STACK_LINE(20)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(20)
		::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(20)
		{
			HX_STACK_LINE(20)
			_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(20)
			if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(20)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(20)
					_this->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(20)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(20)
					((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
				}
				HX_STACK_LINE(20)
				if (((space != null()))){
					HX_STACK_LINE(20)
					::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(20)
					if ((_this1->zpp_inner->reverse_flag)){
						HX_STACK_LINE(20)
						_this1->push(_this);
					}
					else{
						HX_STACK_LINE(20)
						_this1->unshift(_this);
					}
				}
			}
		}
		HX_STACK_LINE(20)
		if (((_this->zpp_inner->space == null()))){
			HX_STACK_LINE(20)
			Dynamic();
		}
		else{
			HX_STACK_LINE(20)
			_this->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(21)
	{
		HX_STACK_LINE(21)
		::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(21)
			if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
				HX_STACK_LINE(21)
				_this1->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(21)
			_this = _this1->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(21)
		::nape::callbacks::CbType obj = ::Bumper_obj::cbType;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(21)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(21)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(21)
			_this->unshift(obj);
		}
	}
}
;
	return null();
}

//Bumper_obj::~Bumper_obj() { }

Dynamic Bumper_obj::__CreateEmpty() { return  new Bumper_obj; }
hx::ObjectPtr< Bumper_obj > Bumper_obj::__new(Dynamic __o_X,Dynamic __o_Y)
{  hx::ObjectPtr< Bumper_obj > result = new Bumper_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Bumper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Bumper_obj > result = new Bumper_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nape::callbacks::CbType Bumper_obj::cbType;


Bumper_obj::Bumper_obj()
{
}

Dynamic Bumper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { return cbType; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Bumper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { cbType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bumper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cbType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bumper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Bumper_obj::cbType,"cbType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bumper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Bumper_obj::cbType,"cbType");
};

#endif

Class Bumper_obj::__mClass;

void Bumper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Bumper"), hx::TCanCast< Bumper_obj> ,sStaticFields,sMemberFields,
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

void Bumper_obj::__boot()
{
	cbType= ::nape::callbacks::CbType_obj::__new();
}

