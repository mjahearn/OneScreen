#include <hxcpp.h>

#ifndef INCLUDED_Cueball
#include <Cueball.h>
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
#ifndef INCLUDED_zpp_nape_dynamics_ZPP_InteractionFilter
#include <zpp_nape/dynamics/ZPP_InteractionFilter.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif

Void Cueball_obj::__construct(Dynamic __o_X,Dynamic __o_Y)
{
HX_STACK_FRAME("Cueball","new",0xf8fc36c4,"Cueball.new","Cueball.hx",21,0x775bcd2c)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Dynamic X = __o_X.Default(0);
Dynamic Y = __o_Y.Default(0);
{
	HX_STACK_LINE(22)
	this->speed = (int)0;
	HX_STACK_LINE(24)
	super::__construct(X,Y,null(),false,null());
	HX_STACK_LINE(25)
	this->makeGraphic((int)32,(int)32,(int)0,true,null());
	HX_STACK_LINE(26)
	::flixel::util::FlxSpriteUtil_obj::drawCircle(hx::ObjectPtr<OBJ_>(this),(int)16,(int)16,(int)16,(int)-1,null(),null(),null());
	HX_STACK_LINE(27)
	this->createCircularBody(null(),null());
	HX_STACK_LINE(28)
	this->setBodyMaterial(::Math_obj::POSITIVE_INFINITY,(int)0,(int)0,(int)1,(int)0);
	HX_STACK_LINE(30)
	this->antialiasing = true;
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(32)
		::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
			HX_STACK_LINE(32)
			if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
				HX_STACK_LINE(32)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(32)
					_this->zpp_inner->component->woken = false;
				}
				HX_STACK_LINE(32)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(32)
					((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
				}
				HX_STACK_LINE(32)
				if (((space != null()))){
					HX_STACK_LINE(32)
					::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(32)
					if ((_this1->zpp_inner->reverse_flag)){
						HX_STACK_LINE(32)
						_this1->push(_this);
					}
					else{
						HX_STACK_LINE(32)
						_this1->unshift(_this);
					}
				}
			}
		}
		HX_STACK_LINE(32)
		if (((_this->zpp_inner->space == null()))){
			HX_STACK_LINE(32)
			Dynamic();
		}
		else{
			HX_STACK_LINE(32)
			_this->zpp_inner->space->outer;
		}
	}
	HX_STACK_LINE(33)
	{
		HX_STACK_LINE(33)
		::nape::callbacks::CbTypeList _this;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
			HX_STACK_LINE(33)
			if (((_this1->zpp_inner_i->wrap_cbTypes == null()))){
				HX_STACK_LINE(33)
				_this1->zpp_inner_i->setupcbTypes();
			}
			HX_STACK_LINE(33)
			_this = _this1->zpp_inner_i->wrap_cbTypes;
		}
		HX_STACK_LINE(33)
		::nape::callbacks::CbType obj = ::Cueball_obj::cbType;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(33)
		if ((_this->zpp_inner->reverse_flag)){
			HX_STACK_LINE(33)
			_this->push(obj);
		}
		else{
			HX_STACK_LINE(33)
			_this->unshift(obj);
		}
	}
	HX_STACK_LINE(34)
	::nape::dynamics::InteractionFilter tempFilter = ::nape::dynamics::InteractionFilter_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tempFilter,"tempFilter");
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		if (((tempFilter->zpp_inner->sensorGroup != (int)4))){
			HX_STACK_LINE(35)
			tempFilter->zpp_inner->sensorGroup = (int)4;
			HX_STACK_LINE(35)
			tempFilter->zpp_inner->invalidate();
		}
		HX_STACK_LINE(35)
		tempFilter->zpp_inner->sensorGroup;
	}
	HX_STACK_LINE(36)
	this->body->setShapeFilters(tempFilter);
}
;
	return null();
}

//Cueball_obj::~Cueball_obj() { }

Dynamic Cueball_obj::__CreateEmpty() { return  new Cueball_obj; }
hx::ObjectPtr< Cueball_obj > Cueball_obj::__new(Dynamic __o_X,Dynamic __o_Y)
{  hx::ObjectPtr< Cueball_obj > result = new Cueball_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Cueball_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Cueball_obj > result = new Cueball_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Cueball_obj::update( ){
{
		HX_STACK_FRAME("Cueball","update",0x153a3625,"Cueball.update","Cueball.hx",39,0x775bcd2c)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::Cueball_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Cueball.hx",40,0x775bcd2c)
				{
					HX_STACK_LINE(40)
					Float _g7;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(40)
					{
						HX_STACK_LINE(40)
						::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							::nape::phys::Body _this1 = __this->body;		HX_STACK_VAR(_this1,"_this1");
							HX_STACK_LINE(40)
							if (((_this1->zpp_inner->wrap_vel == null()))){
								HX_STACK_LINE(40)
								_this1->zpp_inner->setupVelocity();
							}
							HX_STACK_LINE(40)
							_this = _this1->zpp_inner->wrap_vel;
						}
						HX_STACK_LINE(40)
						Float _g;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							{
								HX_STACK_LINE(40)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(40)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(40)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(40)
							_g = _this->zpp_inner->x;
						}
						HX_STACK_LINE(40)
						Float _g1;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							{
								HX_STACK_LINE(40)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(40)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(40)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(40)
							_g1 = _this->zpp_inner->x;
						}
						HX_STACK_LINE(40)
						Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(40)
						Float _g3;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							{
								HX_STACK_LINE(40)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(40)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(40)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(40)
							_g3 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(40)
						Float _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(40)
						{
							HX_STACK_LINE(40)
							{
								HX_STACK_LINE(40)
								::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
								HX_STACK_LINE(40)
								if (((_this1->_validate != null()))){
									HX_STACK_LINE(40)
									_this1->_validate();
								}
							}
							HX_STACK_LINE(40)
							_g4 = _this->zpp_inner->y;
						}
						HX_STACK_LINE(40)
						Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(40)
						Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(40)
						_g7 = ::Math_obj::sqrt(_g6);
					}
					HX_STACK_LINE(40)
					return (_g7 != __this->speed);
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		if (((  (((this->speed != (int)0))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			struct _Function_2_1{
				inline static ::nape::geom::Vec2 Block( hx::ObjectPtr< ::Cueball_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Cueball.hx",41,0x775bcd2c)
					{
						HX_STACK_LINE(41)
						::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(41)
						if (((_this->zpp_inner->wrap_vel == null()))){
							HX_STACK_LINE(41)
							_this->zpp_inner->setupVelocity();
						}
						HX_STACK_LINE(41)
						return _this->zpp_inner->wrap_vel;
					}
					return null();
				}
			};
			HX_STACK_LINE(41)
			(_Function_2_1::Block(this))->normalise()->muleq(this->speed);
		}
		HX_STACK_LINE(46)
		this->super::update();
	}
return null();
}


Void Cueball_obj::shootAtSpeed( ::nape::geom::Vec2 v,Float s){
{
		HX_STACK_FRAME("Cueball","shootAtSpeed",0x254dbe91,"Cueball.shootAtSpeed","Cueball.hx",49,0x775bcd2c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(v,"v")
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(50)
			::nape::geom::Vec2 velocity = v->mul(s,null());		HX_STACK_VAR(velocity,"velocity");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::nape::geom::Vec2 _this1;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					if (((_this->zpp_inner->wrap_vel == null()))){
						HX_STACK_LINE(50)
						_this->zpp_inner->setupVelocity();
					}
					HX_STACK_LINE(50)
					_this1 = _this->zpp_inner->wrap_vel;
				}
				HX_STACK_LINE(50)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(50)
				{
					HX_STACK_LINE(50)
					Float x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(50)
							if (((_this2->_validate != null()))){
								HX_STACK_LINE(50)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(50)
						x = velocity->zpp_inner->x;
					}
					HX_STACK_LINE(50)
					Float y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							::zpp_nape::geom::ZPP_Vec2 _this2 = velocity->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(50)
							if (((_this2->_validate != null()))){
								HX_STACK_LINE(50)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(50)
						y = velocity->zpp_inner->y;
					}
					HX_STACK_LINE(50)
					Float _g;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(50)
							if (((_this2->_validate != null()))){
								HX_STACK_LINE(50)
								_this2->_validate();
							}
						}
						HX_STACK_LINE(50)
						_g = _this1->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &_this1,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Cueball.hx",50,0x775bcd2c)
							{
								HX_STACK_LINE(50)
								Float _g1;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(50)
								{
									HX_STACK_LINE(50)
									{
										HX_STACK_LINE(50)
										::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
										HX_STACK_LINE(50)
										if (((_this2->_validate != null()))){
											HX_STACK_LINE(50)
											_this2->_validate();
										}
									}
									HX_STACK_LINE(50)
									_g1 = _this1->zpp_inner->y;
								}
								HX_STACK_LINE(50)
								return (_g1 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(50)
					if ((!(((  (((_g == x))) ? bool(_Function_4_1::Block(_this1,y)) : bool(false) ))))){
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							_this1->zpp_inner->x = x;
							HX_STACK_LINE(50)
							_this1->zpp_inner->y = y;
							HX_STACK_LINE(50)
							{
							}
						}
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							::zpp_nape::geom::ZPP_Vec2 _this2 = _this1->zpp_inner;		HX_STACK_VAR(_this2,"_this2");
							HX_STACK_LINE(50)
							if (((_this2->_invalidate != null()))){
								HX_STACK_LINE(50)
								_this2->_invalidate(_this2);
							}
						}
					}
					HX_STACK_LINE(50)
					ret = _this1;
				}
				HX_STACK_LINE(50)
				if ((velocity->zpp_inner->weak)){
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(50)
						::zpp_nape::geom::ZPP_Vec2 inner = velocity->zpp_inner;		HX_STACK_VAR(inner,"inner");
						HX_STACK_LINE(50)
						velocity->zpp_inner->outer = null();
						HX_STACK_LINE(50)
						velocity->zpp_inner = null();
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							::nape::geom::Vec2 o = velocity;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(50)
							o->zpp_pool = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
							HX_STACK_LINE(50)
							::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = o;
						}
						HX_STACK_LINE(50)
						{
							HX_STACK_LINE(50)
							::zpp_nape::geom::ZPP_Vec2 o = inner;		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(50)
							{
								HX_STACK_LINE(50)
								if (((o->outer != null()))){
									HX_STACK_LINE(50)
									o->outer->zpp_inner = null();
									HX_STACK_LINE(50)
									o->outer = null();
								}
								HX_STACK_LINE(50)
								o->_isimmutable = null();
								HX_STACK_LINE(50)
								o->_validate = null();
								HX_STACK_LINE(50)
								o->_invalidate = null();
							}
							HX_STACK_LINE(50)
							o->next = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(50)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = o;
						}
					}
					HX_STACK_LINE(50)
					true;
				}
				else{
					HX_STACK_LINE(50)
					false;
				}
				HX_STACK_LINE(50)
				ret;
			}
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				if (((_this->zpp_inner->wrap_vel == null()))){
					HX_STACK_LINE(50)
					_this->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(50)
				_this->zpp_inner->wrap_vel;
			}
		}
		HX_STACK_LINE(51)
		this->speed = s;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Cueball_obj,shootAtSpeed,(void))

::nape::callbacks::CbType Cueball_obj::cbType;


Cueball_obj::Cueball_obj()
{
}

Dynamic Cueball_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { return cbType; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"shootAtSpeed") ) { return shootAtSpeed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Cueball_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cbType") ) { cbType=inValue.Cast< ::nape::callbacks::CbType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Cueball_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cbType"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Cueball_obj,speed),HX_CSTRING("speed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("update"),
	HX_CSTRING("shootAtSpeed"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cueball_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Cueball_obj::cbType,"cbType");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cueball_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Cueball_obj::cbType,"cbType");
};

#endif

Class Cueball_obj::__mClass;

void Cueball_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Cueball"), hx::TCanCast< Cueball_obj> ,sStaticFields,sMemberFields,
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

void Cueball_obj::__boot()
{
	cbType= ::nape::callbacks::CbType_obj::__new();
}

