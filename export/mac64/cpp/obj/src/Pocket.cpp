#include <hxcpp.h>

#ifndef INCLUDED_Pocket
#include <Pocket.h>
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
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbTypeList
#include <nape/callbacks/CbTypeList.h>
#endif
#ifndef INCLUDED_nape_dynamics_InteractionFilter
#include <nape/dynamics/InteractionFilter.h>
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
#ifndef INCLUDED_nape_shape_Shape
#include <nape/shape/Shape.h>
#endif
#ifndef INCLUDED_nape_shape_ShapeList
#include <nape/shape/ShapeList.h>
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
#ifndef INCLUDED_zpp_nape_shape_ZPP_Shape
#include <zpp_nape/shape/ZPP_Shape.h>
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

Void Pocket_obj::__construct(Dynamic __o_X,Dynamic __o_Y)
{
HX_STACK_FRAME("Pocket","new",0x592f1ea8,"Pocket.new","Pocket.hx",17,0x09956dc8)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
{
	HX_STACK_LINE(18)
	super::__construct(X,Y,null(),false,null());
	HX_STACK_LINE(19)
	this->makeGraphic((int)32,(int)32,(int)0,true,null());
	HX_STACK_LINE(20)
	::flixel::util::FlxSpriteUtil_obj::drawCircle(hx::ObjectPtr<OBJ_>(this),(int)16,(int)16,(int)16,(int)-16777216,null(),null(),null());
	HX_STACK_LINE(21)
	this->createCircularBody((int)1,null());
	HX_STACK_LINE(22)
	this->setBodyMaterial(null(),null(),null(),null(),null());
	HX_STACK_LINE(24)
	{
		HX_STACK_LINE(24)
		::nape::shape::Shape _this = this->body->zpp_inner->wrap_shapes->at((int)0);		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			_this->zpp_inner->immutable_midstep(HX_CSTRING("Shape::sensorEnabled"));
			HX_STACK_LINE(24)
			_this->zpp_inner->sensorEnabled = true;
			HX_STACK_LINE(24)
			_this->zpp_inner->wake();
		}
		HX_STACK_LINE(24)
		_this->zpp_inner->sensorEnabled;
	}
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(26)
		::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(26)
		{
			HX_STACK_LINE(26)
			_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(26)
			if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(26)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(26)
					_this->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(26)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(26)
					((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
				}
				HX_STACK_LINE(26)
				if (((space != null()))){
					HX_STACK_LINE(26)
					::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(26)
					if ((_this1->zpp_inner->reverse_flag)){
						HX_STACK_LINE(26)
						_this1->push(_this);
					}
					else{
						HX_STACK_LINE(26)
						_this1->unshift(_this);
					}
				}
			}
		}
		HX_STACK_LINE(26)
		if (((_this->zpp_inner->space == null()))){
			HX_STACK_LINE(26)
			Dynamic();
		}
		else{
			HX_STACK_LINE(26)
			_this->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(27)
			if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
				HX_STACK_LINE(27)
				_this1->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(27)
			_this = _this1->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(27)
		::nape::callbacks::CbType obj = ::Pocket_obj::cbType;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(27)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(27)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(27)
			_this->unshift(obj);
		}
	}
	HX_STACK_LINE(28)
	this->body->setShapeFilters(::Pocket_obj::filter);
}
;
	return null();
}

//Pocket_obj::~Pocket_obj() { }

Dynamic Pocket_obj::__CreateEmpty() { return  new Pocket_obj; }
hx::ObjectPtr< Pocket_obj > Pocket_obj::__new(Dynamic __o_X,Dynamic __o_Y)
{  hx::ObjectPtr< Pocket_obj > result = new Pocket_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Pocket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pocket_obj > result = new Pocket_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::nape::callbacks::CbType Pocket_obj::cbType;

::nape::dynamics::InteractionFilter Pocket_obj::filter;


Pocket_obj::Pocket_obj()
{
}

Dynamic Pocket_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { return cbType; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pocket_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { cbType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::nape::dynamics::InteractionFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pocket_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cbType"),
	HX_CSTRING("filter"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pocket_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Pocket_obj::cbType,"cbType");
	HX_MARK_MEMBER_NAME(Pocket_obj::filter,"filter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pocket_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Pocket_obj::cbType,"cbType");
	HX_VISIT_MEMBER_NAME(Pocket_obj::filter,"filter");
};

#endif

Class Pocket_obj::__mClass;

void Pocket_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Pocket"), hx::TCanCast< Pocket_obj> ,sStaticFields,sMemberFields,
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

void Pocket_obj::__boot()
{
	cbType= ::nape::callbacks::CbType_obj::__new();
	filter= ::nape::dynamics::InteractionFilter_obj::__new((int)1,(int)0,(int)4,null(),null(),null());
}

