#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVector
#include <flixel/util/FlxVector.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_nape_geom_Vec2
#include <nape/geom/Vec2.h>
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
#ifndef INCLUDED_zpp_nape_geom_ZPP_Vec2
#include <zpp_nape/geom/ZPP_Vec2.h>
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

Void Player_obj::__construct(Dynamic __o_X,Dynamic __o_Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",19,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
{
	HX_STACK_LINE(20)
	super::__construct(X,Y,null(),false,null());
	HX_STACK_LINE(21)
	this->makeGraphic((int)32,(int)32,(int)0,true,null());
	HX_STACK_LINE(22)
	::flixel::util::FlxSpriteUtil_obj::drawCircle(hx::ObjectPtr<OBJ_>(this),(int)16,(int)16,(int)16,(int)-16776961,null(),null(),null());
	HX_STACK_LINE(23)
	this->createCircularBody(null(),null());
	HX_STACK_LINE(24)
	this->setBodyMaterial((int)1,(int)1,(int)2,1e10,null());
	HX_STACK_LINE(26)
	this->health = ((::Reg_obj::maxShootSpeed * (int)2) - (int)1);
	HX_STACK_LINE(28)
	this->antialiasing = true;
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			::String _g = HX_CSTRING("false");		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			::String _g1 = (HX_CSTRING("Body::") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			_this->zpp_inner->immutable_midstep(_g1);
			HX_STACK_LINE(29)
			if (((!(_this->zpp_inner->norotate) != false))){
				HX_STACK_LINE(29)
				_this->zpp_inner->norotate = true;
				HX_STACK_LINE(29)
				_this->zpp_inner->invalidate_inertia();
			}
		}
		HX_STACK_LINE(29)
		!(_this->zpp_inner->norotate);
	}
	HX_STACK_LINE(31)
	{
		HX_STACK_LINE(31)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(31)
		::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(31)
		{
			HX_STACK_LINE(31)
			_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(31)
			if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(31)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(31)
					_this->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(31)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(31)
					((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
				}
				HX_STACK_LINE(31)
				if (((space != null()))){
					HX_STACK_LINE(31)
					::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(31)
					if ((_this1->zpp_inner->reverse_flag)){
						HX_STACK_LINE(31)
						_this1->push(_this);
					}
					else{
						HX_STACK_LINE(31)
						_this1->unshift(_this);
					}
				}
			}
		}
		HX_STACK_LINE(31)
		if (((_this->zpp_inner->space == null()))){
			HX_STACK_LINE(31)
			Dynamic();
		}
		else{
			HX_STACK_LINE(31)
			_this->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(32)
			if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
				HX_STACK_LINE(32)
				_this1->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(32)
			_this = _this1->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(32)
		::nape::callbacks::CbType obj = ::Player_obj::cbType;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(32)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(32)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(32)
			_this->unshift(obj);
		}
	}
	HX_STACK_LINE(33)
	this->body->setShapeFilters(::Player_obj::filter);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(Dynamic __o_X,Dynamic __o_Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",36,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(37)
				if (((_this1->zpp_inner->wrap_vel == null()))){
					HX_STACK_LINE(37)
					_this1->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(37)
				_this = _this1->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(37)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::flixel::util::FlxVector _this1 = ::Controls_obj::arrows;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(37)
				Float _g = ::Math_obj::abs(_this1->x);		HX_STACK_VAR(_g,"_g");
				struct _Function_3_1{
					inline static bool Block( ::flixel::util::FlxVector &_this1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",37,0xa27fc9dd)
						{
							HX_STACK_LINE(37)
							Float _g1 = ::Math_obj::abs(_this1->y);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(37)
							return (_g1 < 0.0000001);
						}
						return null();
					}
				};
				HX_STACK_LINE(37)
				if (((  (((_g < 0.0000001))) ? bool(_Function_3_1::Block(_this1)) : bool(false) ))){
					HX_STACK_LINE(37)
					_g3 = (int)0;
				}
				else{
					HX_STACK_LINE(37)
					Float _g2 = ::Math_obj::sqrt(((_this1->x * _this1->x) + (_this1->y * _this1->y)));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(37)
					_g3 = (Float(_this1->x) / Float(_g2));
				}
			}
			HX_STACK_LINE(37)
			Float x = (_g3 * ::Reg_obj::maxPlayerSpeed);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(37)
			Float _g7;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				::flixel::util::FlxVector _this1 = ::Controls_obj::arrows;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(37)
				Float _g4 = ::Math_obj::abs(_this1->x);		HX_STACK_VAR(_g4,"_g4");
				struct _Function_3_1{
					inline static bool Block( ::flixel::util::FlxVector &_this1){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",37,0xa27fc9dd)
						{
							HX_STACK_LINE(37)
							Float _g5 = ::Math_obj::abs(_this1->y);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(37)
							return (_g5 < 0.0000001);
						}
						return null();
					}
				};
				HX_STACK_LINE(37)
				if (((  (((_g4 < 0.0000001))) ? bool(_Function_3_1::Block(_this1)) : bool(false) ))){
					HX_STACK_LINE(37)
					_g7 = (int)0;
				}
				else{
					HX_STACK_LINE(37)
					Float _g6 = ::Math_obj::sqrt(((_this1->x * _this1->x) + (_this1->y * _this1->y)));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(37)
					_g7 = (Float(_this1->y) / Float(_g6));
				}
			}
			HX_STACK_LINE(37)
			Float y = (_g7 * ::Reg_obj::maxPlayerSpeed);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(37)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(37)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(37)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(37)
				_g8 = _this->zpp_inner->x;
			}
			struct _Function_2_1{
				inline static bool Block( Float &y,::nape::geom::Vec2 _this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",37,0xa27fc9dd)
					{
						HX_STACK_LINE(37)
						Float _g9;		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(37)
						{
							HX_STACK_LINE(37)
							{
								HX_STACK_LINE(37)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(37)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(37)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(37)
							_g9 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(37)
						return (_g9 == y);
					}
					return null();
				}
			};
			HX_STACK_LINE(37)
			if ((!(((  (((_g8 == x))) ? bool(_Function_2_1::Block(y,_this)) : bool(false) ))))){
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					_this->zpp_inner->x = x;
					HX_STACK_LINE(37)
					_this->zpp_inner->y = y;
					HX_STACK_LINE(37)
					{
					}
				}
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(37)
					if (((_this1->_invalidate != null()))){
						HX_STACK_LINE(37)
						_this1->_invalidate(_this1);
					}
				}
			}
			HX_STACK_LINE(37)
			_this;
		}
		HX_STACK_LINE(38)
		this->super::update();
	}
return null();
}


Void Player_obj::getHit( Float s){
{
		HX_STACK_FRAME("Player","getHit",0x0e11d8aa,"Player.getHit","Player.hx",41,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(42)
		hx::SubEq(this->health,s);
		HX_STACK_LINE(43)
		if (((this->health < (int)0))){
			HX_STACK_LINE(44)
			this->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,getHit,(void))

::nape::callbacks::CbType Player_obj::cbType;

::nape::dynamics::InteractionFilter Player_obj::filter;


Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { return cbType; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"getHit") ) { return getHit_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { cbType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::nape::dynamics::InteractionFilter >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("update"),
	HX_CSTRING("getHit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Player_obj::cbType,"cbType");
	HX_MARK_MEMBER_NAME(Player_obj::filter,"filter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Player_obj::cbType,"cbType");
	HX_VISIT_MEMBER_NAME(Player_obj::filter,"filter");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
	cbType= ::nape::callbacks::CbType_obj::__new();
	filter= ::nape::dynamics::InteractionFilter_obj::__new((int)2,null(),null(),null(),null(),null());
}

