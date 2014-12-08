#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeState
#include <flixel/addons/nape/FlxNapeState.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeTilemap
#include <flixel/addons/nape/FlxNapeTilemap.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxRect
#include <flixel/util/FlxPool_flixel_util_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
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
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_shape_Polygon
#include <nape/shape/Polygon.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_Flags
#include <zpp_nape/util/ZPP_Flags.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_ShapeList
#include <zpp_nape/util/ZPP_ShapeList.h>
#endif
namespace flixel{
namespace addons{
namespace nape{

Void FlxNapeTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","new",0x18284b03,"flixel.addons.nape.FlxNapeTilemap.new","flixel/addons/nape/FlxNapeTilemap.hx",25,0x86ce3ecc)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(27)
	::nape::phys::BodyType _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(27)
	{
		HX_STACK_LINE(27)
		if (((::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC == null()))){
			HX_STACK_LINE(27)
			::zpp_nape::util::ZPP_Flags_obj::internal = true;
			HX_STACK_LINE(27)
			::nape::phys::BodyType _g = ::nape::phys::BodyType_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(27)
			::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC = _g;
			HX_STACK_LINE(27)
			::zpp_nape::util::ZPP_Flags_obj::internal = false;
		}
		HX_STACK_LINE(27)
		_g1 = ::zpp_nape::util::ZPP_Flags_obj::BodyType_STATIC;
	}
	HX_STACK_LINE(27)
	::nape::phys::Body _g2 = ::nape::phys::Body_obj::__new(_g1,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(27)
	this->body = _g2;
}
;
	return null();
}

//FlxNapeTilemap_obj::~FlxNapeTilemap_obj() { }

Dynamic FlxNapeTilemap_obj::__CreateEmpty() { return  new FlxNapeTilemap_obj; }
hx::ObjectPtr< FlxNapeTilemap_obj > FlxNapeTilemap_obj::__new()
{  hx::ObjectPtr< FlxNapeTilemap_obj > result = new FlxNapeTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxNapeTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxNapeTilemap_obj > result = new FlxNapeTilemap_obj();
	result->__construct();
	return result;}

Void FlxNapeTilemap_obj::update( ){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","update",0x1b771346,"flixel.addons.nape.FlxNapeTilemap.update","flixel/addons/nape/FlxNapeTilemap.hx",31,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		{
			HX_STACK_LINE(32)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(32)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(32)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(32)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(32)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(32)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(32)
			_g = _this->zpp_inner->x;
		}
		HX_STACK_LINE(32)
		this->set_x(_g);
		HX_STACK_LINE(33)
		Float _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		{
			HX_STACK_LINE(33)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				::nape::phys::Body _this1 = this->body;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(33)
				if (((_this1->zpp_inner->wrap_pos == null()))){
					HX_STACK_LINE(33)
					_this1->zpp_inner->setupPosition();
				}
				HX_STACK_LINE(33)
				_this = _this1->zpp_inner->wrap_pos;
			}
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(33)
				if (((_this1->_validate != null()))){
					HX_STACK_LINE(33)
					_this1->_validate();
				}
			}
			HX_STACK_LINE(33)
			_g1 = _this->zpp_inner->y;
		}
		HX_STACK_LINE(33)
		this->set_y(_g1);
		HX_STACK_LINE(34)
		this->super::update();
	}
return null();
}


::flixel::tile::FlxTilemap FlxNapeTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","loadMap",0x57c78c39,"flixel.addons.nape.FlxNapeTilemap.loadMap","flixel/addons/nape/FlxNapeTilemap.hx",38,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(39)
		this->super::loadMap(MapData,TileGraphic,TileWidth,TileHeight,AutoTile,StartingIndex,DrawIndex,CollideIndex);
		HX_STACK_LINE(40)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		this->_binaryData = _g;
		HX_STACK_LINE(41)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_binaryData,this->_data->length);
		HX_STACK_LINE(42)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


Void FlxNapeTilemap_obj::addSolidTile( int X,int Y,::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","addSolidTile",0x1b4b5795,"flixel.addons.nape.FlxNapeTilemap.addSolidTile","flixel/addons/nape/FlxNapeTilemap.hx",55,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(56)
		{
			HX_STACK_LINE(56)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(56)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(56)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(56)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(56)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(56)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(56)
					{
					}
				}
			}
			HX_STACK_LINE(56)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(56)
				Dynamic();
			}
			else{
				HX_STACK_LINE(56)
				_this->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(57)
		if (((mat == null()))){
			HX_STACK_LINE(59)
			::nape::phys::Material _g = ::nape::phys::Material_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(59)
			mat = _g;
		}
		HX_STACK_LINE(61)
		hx::MultEq(X,this->_tileWidth);
		HX_STACK_LINE(62)
		hx::MultEq(Y,this->_tileHeight);
		HX_STACK_LINE(63)
		Array< ::Dynamic > vertices = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(65)
		::nape::geom::Vec2 _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(65)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(65)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(65)
				::nape::geom::Vec2 _g1 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(65)
				ret = _g1;
			}
			else{
				HX_STACK_LINE(65)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(65)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(65)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(65)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(65)
				::zpp_nape::geom::ZPP_Vec2 _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(65)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(65)
							::zpp_nape::geom::ZPP_Vec2 _g2 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(65)
							ret1 = _g2;
						}
						else{
							HX_STACK_LINE(65)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(65)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(65)
							ret1->next = null();
						}
						HX_STACK_LINE(65)
						ret1->weak = false;
					}
					HX_STACK_LINE(65)
					ret1->_immutable = immutable;
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						ret1->x = X;
						HX_STACK_LINE(65)
						ret1->y = Y;
						HX_STACK_LINE(65)
						{
						}
					}
					HX_STACK_LINE(65)
					_g3 = ret1;
				}
				HX_STACK_LINE(65)
				ret->zpp_inner = _g3;
				HX_STACK_LINE(65)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(65)
				Float _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(65)
				{
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(65)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(65)
							_this->_validate();
						}
					}
					HX_STACK_LINE(65)
					_g4 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( int &Y,::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",65,0x86ce3ecc)
						{
							HX_STACK_LINE(65)
							Float _g5;		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(65)
							{
								HX_STACK_LINE(65)
								{
									HX_STACK_LINE(65)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(65)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(65)
										_this->_validate();
									}
								}
								HX_STACK_LINE(65)
								_g5 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(65)
							return (_g5 == Y);
						}
						return null();
					}
				};
				HX_STACK_LINE(65)
				if ((!(((  (((_g4 == X))) ? bool(_Function_3_1::Block(Y,ret)) : bool(false) ))))){
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						ret->zpp_inner->x = X;
						HX_STACK_LINE(65)
						ret->zpp_inner->y = Y;
						HX_STACK_LINE(65)
						{
						}
					}
					HX_STACK_LINE(65)
					{
						HX_STACK_LINE(65)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(65)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(65)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(65)
				ret;
			}
			HX_STACK_LINE(65)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(65)
			_g6 = ret;
		}
		HX_STACK_LINE(65)
		vertices->push(_g6);
		HX_STACK_LINE(66)
		::nape::geom::Vec2 _g12;		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			Float x = (X + this->_tileWidth);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(66)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(66)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(66)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(66)
				::nape::geom::Vec2 _g7 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(66)
				ret = _g7;
			}
			else{
				HX_STACK_LINE(66)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(66)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(66)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(66)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(66)
				::zpp_nape::geom::ZPP_Vec2 _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(66)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(66)
							::zpp_nape::geom::ZPP_Vec2 _g8 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(66)
							ret1 = _g8;
						}
						else{
							HX_STACK_LINE(66)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(66)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(66)
							ret1->next = null();
						}
						HX_STACK_LINE(66)
						ret1->weak = false;
					}
					HX_STACK_LINE(66)
					ret1->_immutable = immutable;
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						ret1->x = x;
						HX_STACK_LINE(66)
						ret1->y = Y;
						HX_STACK_LINE(66)
						{
						}
					}
					HX_STACK_LINE(66)
					_g9 = ret1;
				}
				HX_STACK_LINE(66)
				ret->zpp_inner = _g9;
				HX_STACK_LINE(66)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(66)
				Float _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(66)
				{
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(66)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(66)
							_this->_validate();
						}
					}
					HX_STACK_LINE(66)
					_g10 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( int &Y,::nape::geom::Vec2 &ret){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",66,0x86ce3ecc)
						{
							HX_STACK_LINE(66)
							Float _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(66)
							{
								HX_STACK_LINE(66)
								{
									HX_STACK_LINE(66)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(66)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(66)
										_this->_validate();
									}
								}
								HX_STACK_LINE(66)
								_g11 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(66)
							return (_g11 == Y);
						}
						return null();
					}
				};
				HX_STACK_LINE(66)
				if ((!(((  (((_g10 == x))) ? bool(_Function_3_1::Block(Y,ret)) : bool(false) ))))){
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(66)
						ret->zpp_inner->y = Y;
						HX_STACK_LINE(66)
						{
						}
					}
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(66)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(66)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(66)
				ret;
			}
			HX_STACK_LINE(66)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(66)
			_g12 = ret;
		}
		HX_STACK_LINE(66)
		vertices->push(_g12);
		HX_STACK_LINE(67)
		::nape::geom::Vec2 _g18;		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			Float x = (X + this->_tileWidth);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(67)
			Float y = (Y + this->_tileHeight);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(67)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(67)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(67)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(67)
				::nape::geom::Vec2 _g13 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(67)
				ret = _g13;
			}
			else{
				HX_STACK_LINE(67)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(67)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(67)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(67)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(67)
				::zpp_nape::geom::ZPP_Vec2 _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(67)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(67)
							::zpp_nape::geom::ZPP_Vec2 _g14 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g14,"_g14");
							HX_STACK_LINE(67)
							ret1 = _g14;
						}
						else{
							HX_STACK_LINE(67)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(67)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(67)
							ret1->next = null();
						}
						HX_STACK_LINE(67)
						ret1->weak = false;
					}
					HX_STACK_LINE(67)
					ret1->_immutable = immutable;
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						ret1->x = x;
						HX_STACK_LINE(67)
						ret1->y = y;
						HX_STACK_LINE(67)
						{
						}
					}
					HX_STACK_LINE(67)
					_g15 = ret1;
				}
				HX_STACK_LINE(67)
				ret->zpp_inner = _g15;
				HX_STACK_LINE(67)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(67)
				Float _g16;		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(67)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(67)
							_this->_validate();
						}
					}
					HX_STACK_LINE(67)
					_g16 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",67,0x86ce3ecc)
						{
							HX_STACK_LINE(67)
							Float _g17;		HX_STACK_VAR(_g17,"_g17");
							HX_STACK_LINE(67)
							{
								HX_STACK_LINE(67)
								{
									HX_STACK_LINE(67)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(67)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(67)
										_this->_validate();
									}
								}
								HX_STACK_LINE(67)
								_g17 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(67)
							return (_g17 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(67)
				if ((!(((  (((_g16 == x))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						ret->zpp_inner->x = x;
						HX_STACK_LINE(67)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(67)
						{
						}
					}
					HX_STACK_LINE(67)
					{
						HX_STACK_LINE(67)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(67)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(67)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(67)
				ret;
			}
			HX_STACK_LINE(67)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(67)
			_g18 = ret;
		}
		HX_STACK_LINE(67)
		vertices->push(_g18);
		HX_STACK_LINE(68)
		::nape::geom::Vec2 _g24;		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			Float y = (Y + this->_tileHeight);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(68)
			bool weak = false;		HX_STACK_VAR(weak,"weak");
			HX_STACK_LINE(68)
			::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
			HX_STACK_LINE(68)
			if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
				HX_STACK_LINE(68)
				::nape::geom::Vec2 _g19 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(68)
				ret = _g19;
			}
			else{
				HX_STACK_LINE(68)
				ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
				HX_STACK_LINE(68)
				::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
				HX_STACK_LINE(68)
				ret->zpp_pool = null();
			}
			HX_STACK_LINE(68)
			if (((ret->zpp_inner == null()))){
				HX_STACK_LINE(68)
				::zpp_nape::geom::ZPP_Vec2 _g21;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
					HX_STACK_LINE(68)
					::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2 _g20 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(68)
							ret1 = _g20;
						}
						else{
							HX_STACK_LINE(68)
							ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
							HX_STACK_LINE(68)
							::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
							HX_STACK_LINE(68)
							ret1->next = null();
						}
						HX_STACK_LINE(68)
						ret1->weak = false;
					}
					HX_STACK_LINE(68)
					ret1->_immutable = immutable;
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						ret1->x = X;
						HX_STACK_LINE(68)
						ret1->y = y;
						HX_STACK_LINE(68)
						{
						}
					}
					HX_STACK_LINE(68)
					_g21 = ret1;
				}
				HX_STACK_LINE(68)
				ret->zpp_inner = _g21;
				HX_STACK_LINE(68)
				ret->zpp_inner->outer = ret;
			}
			else{
				HX_STACK_LINE(68)
				Float _g22;		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(68)
				{
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(68)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(68)
							_this->_validate();
						}
					}
					HX_STACK_LINE(68)
					_g22 = ret->zpp_inner->x;
				}
				struct _Function_3_1{
					inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",68,0x86ce3ecc)
						{
							HX_STACK_LINE(68)
							Float _g23;		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(68)
							{
								HX_STACK_LINE(68)
								{
									HX_STACK_LINE(68)
									::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(68)
									if (((_this->_validate != null()))){
										HX_STACK_LINE(68)
										_this->_validate();
									}
								}
								HX_STACK_LINE(68)
								_g23 = ret->zpp_inner->y;
							}
							HX_STACK_LINE(68)
							return (_g23 == y);
						}
						return null();
					}
				};
				HX_STACK_LINE(68)
				if ((!(((  (((_g22 == X))) ? bool(_Function_3_1::Block(ret,y)) : bool(false) ))))){
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						ret->zpp_inner->x = X;
						HX_STACK_LINE(68)
						ret->zpp_inner->y = y;
						HX_STACK_LINE(68)
						{
						}
					}
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(68)
						::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(68)
						if (((_this->_invalidate != null()))){
							HX_STACK_LINE(68)
							_this->_invalidate(_this);
						}
					}
				}
				HX_STACK_LINE(68)
				ret;
			}
			HX_STACK_LINE(68)
			ret->zpp_inner->weak = weak;
			HX_STACK_LINE(68)
			_g24 = ret;
		}
		HX_STACK_LINE(68)
		vertices->push(_g24);
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(70)
			::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(vertices,mat,null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(70)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(70)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(70)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(71)
			::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(71)
			{
				HX_STACK_LINE(71)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(71)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(71)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(71)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(71)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(71)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(71)
					if (((space != null()))){
						HX_STACK_LINE(71)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(71)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(71)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(71)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(71)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(71)
				Dynamic();
			}
			else{
				HX_STACK_LINE(71)
				_this->zpp_inner->space->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeTilemap_obj,addSolidTile,(void))

Void FlxNapeTilemap_obj::placeCustomPolygon( Array< int > tileIndices,Array< ::Dynamic > vertices,::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","placeCustomPolygon",0xd2040a3f,"flixel.addons.nape.FlxNapeTilemap.placeCustomPolygon","flixel/addons/nape/FlxNapeTilemap.hx",74,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileIndices,"tileIndices")
		HX_STACK_ARG(vertices,"vertices")
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(75)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
					HX_STACK_LINE(75)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(75)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(75)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(75)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(75)
					{
					}
				}
			}
			HX_STACK_LINE(75)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(75)
				Dynamic();
			}
			else{
				HX_STACK_LINE(75)
				_this->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(76)
		::nape::shape::Polygon polygon;		HX_STACK_VAR(polygon,"polygon");
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			while((true)){
				HX_STACK_LINE(77)
				if ((!(((_g < tileIndices->length))))){
					HX_STACK_LINE(77)
					break;
				}
				HX_STACK_LINE(77)
				int index = tileIndices->__get(_g);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(77)
				++(_g);
				HX_STACK_LINE(78)
				Array< ::Dynamic > coords = this->getTileCoords(index,false);		HX_STACK_VAR(coords,"coords");
				HX_STACK_LINE(79)
				{
					HX_STACK_LINE(79)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(79)
					while((true)){
						HX_STACK_LINE(79)
						if ((!(((_g1 < coords->length))))){
							HX_STACK_LINE(79)
							break;
						}
						HX_STACK_LINE(79)
						::flixel::util::FlxPoint point = coords->__get(_g1).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(79)
						++(_g1);
						HX_STACK_LINE(80)
						::nape::shape::Polygon _g2 = ::nape::shape::Polygon_obj::__new(vertices,mat,null());		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(80)
						polygon = _g2;
						HX_STACK_LINE(81)
						::nape::geom::Vec2 _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(81)
						{
							HX_STACK_LINE(81)
							Float x = point->x;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(81)
							Float y = point->y;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(81)
							bool weak = false;		HX_STACK_VAR(weak,"weak");
							HX_STACK_LINE(81)
							::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
							HX_STACK_LINE(81)
							if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
								HX_STACK_LINE(81)
								::nape::geom::Vec2 _g11 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(81)
								ret = _g11;
							}
							else{
								HX_STACK_LINE(81)
								ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
								HX_STACK_LINE(81)
								::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
								HX_STACK_LINE(81)
								ret->zpp_pool = null();
							}
							HX_STACK_LINE(81)
							if (((ret->zpp_inner == null()))){
								HX_STACK_LINE(81)
								::zpp_nape::geom::ZPP_Vec2 _g3;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(81)
								{
									HX_STACK_LINE(81)
									bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
									HX_STACK_LINE(81)
									::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
									HX_STACK_LINE(81)
									{
										HX_STACK_LINE(81)
										if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
											HX_STACK_LINE(81)
											::zpp_nape::geom::ZPP_Vec2 _g21 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g21,"_g21");
											HX_STACK_LINE(81)
											ret1 = _g21;
										}
										else{
											HX_STACK_LINE(81)
											ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
											HX_STACK_LINE(81)
											::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
											HX_STACK_LINE(81)
											ret1->next = null();
										}
										HX_STACK_LINE(81)
										ret1->weak = false;
									}
									HX_STACK_LINE(81)
									ret1->_immutable = immutable;
									HX_STACK_LINE(81)
									{
										HX_STACK_LINE(81)
										ret1->x = x;
										HX_STACK_LINE(81)
										ret1->y = y;
										HX_STACK_LINE(81)
										{
										}
									}
									HX_STACK_LINE(81)
									_g3 = ret1;
								}
								HX_STACK_LINE(81)
								ret->zpp_inner = _g3;
								HX_STACK_LINE(81)
								ret->zpp_inner->outer = ret;
							}
							else{
								HX_STACK_LINE(81)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(81)
								{
									HX_STACK_LINE(81)
									{
										HX_STACK_LINE(81)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(81)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(81)
											_this->_validate();
										}
									}
									HX_STACK_LINE(81)
									_g4 = ret->zpp_inner->x;
								}
								struct _Function_7_1{
									inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",81,0x86ce3ecc)
										{
											HX_STACK_LINE(81)
											Float _g5;		HX_STACK_VAR(_g5,"_g5");
											HX_STACK_LINE(81)
											{
												HX_STACK_LINE(81)
												{
													HX_STACK_LINE(81)
													::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
													HX_STACK_LINE(81)
													if (((_this->_validate != null()))){
														HX_STACK_LINE(81)
														_this->_validate();
													}
												}
												HX_STACK_LINE(81)
												_g5 = ret->zpp_inner->y;
											}
											HX_STACK_LINE(81)
											return (_g5 == y);
										}
										return null();
									}
								};
								HX_STACK_LINE(81)
								if ((!(((  (((_g4 == x))) ? bool(_Function_7_1::Block(ret,y)) : bool(false) ))))){
									HX_STACK_LINE(81)
									{
										HX_STACK_LINE(81)
										ret->zpp_inner->x = x;
										HX_STACK_LINE(81)
										ret->zpp_inner->y = y;
										HX_STACK_LINE(81)
										{
										}
									}
									HX_STACK_LINE(81)
									{
										HX_STACK_LINE(81)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(81)
										if (((_this->_invalidate != null()))){
											HX_STACK_LINE(81)
											_this->_invalidate(_this);
										}
									}
								}
								HX_STACK_LINE(81)
								ret;
							}
							HX_STACK_LINE(81)
							ret->zpp_inner->weak = weak;
							HX_STACK_LINE(81)
							_g6 = ret;
						}
						HX_STACK_LINE(81)
						polygon->translate(_g6);
						HX_STACK_LINE(82)
						{
							HX_STACK_LINE(82)
							::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(82)
							if ((_this->zpp_inner->reverse_flag)){
								HX_STACK_LINE(82)
								_this->push(polygon);
							}
							else{
								HX_STACK_LINE(82)
								_this->unshift(polygon);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(87)
			::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(87)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(87)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(87)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(87)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(87)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(87)
					if (((space != null()))){
						HX_STACK_LINE(87)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(87)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(87)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(87)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(87)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(87)
				Dynamic();
			}
			else{
				HX_STACK_LINE(87)
				_this->zpp_inner->space->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeTilemap_obj,placeCustomPolygon,(void))

Void FlxNapeTilemap_obj::setupCollideIndex( hx::Null< int >  __o_CollideIndex,::nape::phys::Material mat){
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","setupCollideIndex",0x6c5466b4,"flixel.addons.nape.FlxNapeTilemap.setupCollideIndex","flixel/addons/nape/FlxNapeTilemap.hx",97,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(CollideIndex,"CollideIndex")
	HX_STACK_ARG(mat,"mat")
{
		HX_STACK_LINE(98)
		if (((this->_data == null()))){
			HX_STACK_LINE(101)
			return null();
		}
		HX_STACK_LINE(103)
		int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			int _g = this->heightInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(107)
					int _g2 = this->widthInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(107)
					while((true)){
						HX_STACK_LINE(107)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(107)
							break;
						}
						HX_STACK_LINE(107)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(109)
						tileIndex = (x + (y * this->widthInTiles));
						HX_STACK_LINE(110)
						if (((this->_data->__get(tileIndex) >= CollideIndex))){
							HX_STACK_LINE(110)
							this->_binaryData[tileIndex] = (int)1;
						}
						else{
							HX_STACK_LINE(110)
							this->_binaryData[tileIndex] = (int)0;
						}
					}
				}
			}
		}
		HX_STACK_LINE(113)
		this->constructCollider(mat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeTilemap_obj,setupCollideIndex,(void))

Void FlxNapeTilemap_obj::setupTileIndices( Array< int > tileIndices,::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","setupTileIndices",0xa5da1199,"flixel.addons.nape.FlxNapeTilemap.setupTileIndices","flixel/addons/nape/FlxNapeTilemap.hx",123,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(tileIndices,"tileIndices")
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(124)
		if (((this->_data == null()))){
			HX_STACK_LINE(127)
			return null();
		}
		HX_STACK_LINE(129)
		int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			int _g = this->heightInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			while((true)){
				HX_STACK_LINE(130)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(130)
					break;
				}
				HX_STACK_LINE(130)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(132)
					int _g2 = this->widthInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(132)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(134)
						tileIndex = (x + (y * this->widthInTiles));
						HX_STACK_LINE(135)
						if ((::Lambda_obj::has(tileIndices,this->_data->__get(tileIndex)))){
							HX_STACK_LINE(135)
							this->_binaryData[tileIndex] = (int)1;
						}
						else{
							HX_STACK_LINE(135)
							this->_binaryData[tileIndex] = (int)0;
						}
					}
				}
			}
		}
		HX_STACK_LINE(138)
		this->constructCollider(mat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxNapeTilemap_obj,setupTileIndices,(void))

Void FlxNapeTilemap_obj::constructCollider( ::nape::phys::Material mat){
{
		HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","constructCollider",0x412a144e,"flixel.addons.nape.FlxNapeTilemap.constructCollider","flixel/addons/nape/FlxNapeTilemap.hx",152,0x86ce3ecc)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mat,"mat")
		HX_STACK_LINE(153)
		if (((mat == null()))){
			HX_STACK_LINE(155)
			::nape::phys::Material _g = ::nape::phys::Material_obj::__new(null(),null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(155)
			mat = _g;
		}
		HX_STACK_LINE(157)
		int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
		HX_STACK_LINE(158)
		int startRow = (int)-1;		HX_STACK_VAR(startRow,"startRow");
		HX_STACK_LINE(159)
		int endRow = (int)-1;		HX_STACK_VAR(endRow,"endRow");
		HX_STACK_LINE(160)
		Array< ::Dynamic > rects = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(rects,"rects");
		HX_STACK_LINE(164)
		{
			HX_STACK_LINE(164)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(164)
			int _g = this->widthInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(164)
			while((true)){
				HX_STACK_LINE(164)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(164)
					break;
				}
				HX_STACK_LINE(164)
				int x = (_g1)++;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(166)
					int _g2 = this->heightInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(166)
					while((true)){
						HX_STACK_LINE(166)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(166)
							break;
						}
						HX_STACK_LINE(166)
						int y = (_g3)++;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(168)
						tileIndex = (x + (y * this->widthInTiles));
						HX_STACK_LINE(170)
						if (((this->_binaryData->__get(tileIndex) == (int)1))){
							HX_STACK_LINE(173)
							if (((startRow == (int)-1))){
								HX_STACK_LINE(175)
								startRow = y;
							}
							HX_STACK_LINE(178)
							this->_binaryData[tileIndex] = (int)-1;
						}
						else{
							HX_STACK_LINE(182)
							if (((bool((this->_binaryData->__get(tileIndex) == (int)0)) || bool((this->_binaryData->__get(tileIndex) == (int)-1))))){
								HX_STACK_LINE(185)
								if (((startRow != (int)-1))){
									HX_STACK_LINE(187)
									endRow = (y - (int)1);
									HX_STACK_LINE(188)
									::flixel::util::FlxRect _g11 = this->constructRectangle(x,startRow,endRow);		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(188)
									rects->push(_g11);
									HX_STACK_LINE(189)
									startRow = (int)-1;
									HX_STACK_LINE(190)
									endRow = (int)-1;
								}
							}
						}
					}
				}
				HX_STACK_LINE(195)
				if (((startRow != (int)-1))){
					HX_STACK_LINE(197)
					endRow = (this->heightInTiles - (int)1);
					HX_STACK_LINE(198)
					::flixel::util::FlxRect _g2 = this->constructRectangle(x,startRow,endRow);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(198)
					rects->push(_g2);
					HX_STACK_LINE(199)
					startRow = (int)-1;
					HX_STACK_LINE(200)
					endRow = (int)-1;
				}
			}
		}
		HX_STACK_LINE(204)
		Array< ::Dynamic > vertices;		HX_STACK_VAR(vertices,"vertices");
		HX_STACK_LINE(205)
		{
			HX_STACK_LINE(205)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(205)
			while((true)){
				HX_STACK_LINE(205)
				if ((!(((_g < rects->length))))){
					HX_STACK_LINE(205)
					break;
				}
				HX_STACK_LINE(205)
				::flixel::util::FlxRect rect = rects->__get(_g).StaticCast< ::flixel::util::FlxRect >();		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(205)
				++(_g);
				HX_STACK_LINE(207)
				Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(207)
				vertices = _g3;
				HX_STACK_LINE(208)
				hx::MultEq(rect->x,this->_tileWidth);
				HX_STACK_LINE(209)
				hx::MultEq(rect->y,this->_tileHeight);
				HX_STACK_LINE(210)
				(rect->width)++;
				HX_STACK_LINE(211)
				hx::MultEq(rect->width,this->_tileWidth);
				HX_STACK_LINE(212)
				(rect->height)++;
				HX_STACK_LINE(213)
				hx::MultEq(rect->height,this->_tileHeight);
				HX_STACK_LINE(214)
				::nape::geom::Vec2 _g9;		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(214)
				{
					HX_STACK_LINE(214)
					Float x = rect->x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(214)
					Float y = rect->y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(214)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(214)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(214)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(214)
						::nape::geom::Vec2 _g4 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(214)
						ret = _g4;
					}
					else{
						HX_STACK_LINE(214)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(214)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(214)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(214)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(214)
						::zpp_nape::geom::ZPP_Vec2 _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(214)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(214)
									::zpp_nape::geom::ZPP_Vec2 _g5 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g5,"_g5");
									HX_STACK_LINE(214)
									ret1 = _g5;
								}
								else{
									HX_STACK_LINE(214)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(214)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(214)
									ret1->next = null();
								}
								HX_STACK_LINE(214)
								ret1->weak = false;
							}
							HX_STACK_LINE(214)
							ret1->_immutable = immutable;
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								ret1->x = x;
								HX_STACK_LINE(214)
								ret1->y = y;
								HX_STACK_LINE(214)
								{
								}
							}
							HX_STACK_LINE(214)
							_g6 = ret1;
						}
						HX_STACK_LINE(214)
						ret->zpp_inner = _g6;
						HX_STACK_LINE(214)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(214)
						Float _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(214)
						{
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(214)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(214)
									_this->_validate();
								}
							}
							HX_STACK_LINE(214)
							_g7 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",214,0x86ce3ecc)
								{
									HX_STACK_LINE(214)
									Float _g8;		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(214)
									{
										HX_STACK_LINE(214)
										{
											HX_STACK_LINE(214)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(214)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(214)
												_this->_validate();
											}
										}
										HX_STACK_LINE(214)
										_g8 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(214)
									return (_g8 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(214)
						if ((!(((  (((_g7 == x))) ? bool(_Function_5_1::Block(ret,y)) : bool(false) ))))){
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(214)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(214)
								{
								}
							}
							HX_STACK_LINE(214)
							{
								HX_STACK_LINE(214)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(214)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(214)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(214)
						ret;
					}
					HX_STACK_LINE(214)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(214)
					_g9 = ret;
				}
				HX_STACK_LINE(214)
				vertices->push(_g9);
				HX_STACK_LINE(215)
				::nape::geom::Vec2 _g15;		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(215)
				{
					HX_STACK_LINE(215)
					Float x = rect->width;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(215)
					Float y = rect->y;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(215)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(215)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(215)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(215)
						::nape::geom::Vec2 _g10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(215)
						ret = _g10;
					}
					else{
						HX_STACK_LINE(215)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(215)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(215)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(215)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(215)
						::zpp_nape::geom::ZPP_Vec2 _g12;		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(215)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(215)
									::zpp_nape::geom::ZPP_Vec2 _g11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g11,"_g11");
									HX_STACK_LINE(215)
									ret1 = _g11;
								}
								else{
									HX_STACK_LINE(215)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(215)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(215)
									ret1->next = null();
								}
								HX_STACK_LINE(215)
								ret1->weak = false;
							}
							HX_STACK_LINE(215)
							ret1->_immutable = immutable;
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								ret1->x = x;
								HX_STACK_LINE(215)
								ret1->y = y;
								HX_STACK_LINE(215)
								{
								}
							}
							HX_STACK_LINE(215)
							_g12 = ret1;
						}
						HX_STACK_LINE(215)
						ret->zpp_inner = _g12;
						HX_STACK_LINE(215)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(215)
						Float _g13;		HX_STACK_VAR(_g13,"_g13");
						HX_STACK_LINE(215)
						{
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(215)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(215)
									_this->_validate();
								}
							}
							HX_STACK_LINE(215)
							_g13 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",215,0x86ce3ecc)
								{
									HX_STACK_LINE(215)
									Float _g14;		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(215)
									{
										HX_STACK_LINE(215)
										{
											HX_STACK_LINE(215)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(215)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(215)
												_this->_validate();
											}
										}
										HX_STACK_LINE(215)
										_g14 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(215)
									return (_g14 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(215)
						if ((!(((  (((_g13 == x))) ? bool(_Function_5_1::Block(ret,y)) : bool(false) ))))){
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(215)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(215)
								{
								}
							}
							HX_STACK_LINE(215)
							{
								HX_STACK_LINE(215)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(215)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(215)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(215)
						ret;
					}
					HX_STACK_LINE(215)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(215)
					_g15 = ret;
				}
				HX_STACK_LINE(215)
				vertices->push(_g15);
				HX_STACK_LINE(216)
				::nape::geom::Vec2 _g21;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(216)
				{
					HX_STACK_LINE(216)
					Float x = rect->width;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(216)
					Float y = rect->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(216)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(216)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(216)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(216)
						::nape::geom::Vec2 _g16 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g16,"_g16");
						HX_STACK_LINE(216)
						ret = _g16;
					}
					else{
						HX_STACK_LINE(216)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(216)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(216)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(216)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(216)
						::zpp_nape::geom::ZPP_Vec2 _g18;		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(216)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(216)
									::zpp_nape::geom::ZPP_Vec2 _g17 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g17,"_g17");
									HX_STACK_LINE(216)
									ret1 = _g17;
								}
								else{
									HX_STACK_LINE(216)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(216)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(216)
									ret1->next = null();
								}
								HX_STACK_LINE(216)
								ret1->weak = false;
							}
							HX_STACK_LINE(216)
							ret1->_immutable = immutable;
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								ret1->x = x;
								HX_STACK_LINE(216)
								ret1->y = y;
								HX_STACK_LINE(216)
								{
								}
							}
							HX_STACK_LINE(216)
							_g18 = ret1;
						}
						HX_STACK_LINE(216)
						ret->zpp_inner = _g18;
						HX_STACK_LINE(216)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(216)
						Float _g19;		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(216)
						{
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(216)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(216)
									_this->_validate();
								}
							}
							HX_STACK_LINE(216)
							_g19 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",216,0x86ce3ecc)
								{
									HX_STACK_LINE(216)
									Float _g20;		HX_STACK_VAR(_g20,"_g20");
									HX_STACK_LINE(216)
									{
										HX_STACK_LINE(216)
										{
											HX_STACK_LINE(216)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(216)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(216)
												_this->_validate();
											}
										}
										HX_STACK_LINE(216)
										_g20 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(216)
									return (_g20 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(216)
						if ((!(((  (((_g19 == x))) ? bool(_Function_5_1::Block(ret,y)) : bool(false) ))))){
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(216)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(216)
								{
								}
							}
							HX_STACK_LINE(216)
							{
								HX_STACK_LINE(216)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(216)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(216)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(216)
						ret;
					}
					HX_STACK_LINE(216)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(216)
					_g21 = ret;
				}
				HX_STACK_LINE(216)
				vertices->push(_g21);
				HX_STACK_LINE(217)
				::nape::geom::Vec2 _g27;		HX_STACK_VAR(_g27,"_g27");
				HX_STACK_LINE(217)
				{
					HX_STACK_LINE(217)
					Float x = rect->x;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(217)
					Float y = rect->height;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(217)
					bool weak = false;		HX_STACK_VAR(weak,"weak");
					HX_STACK_LINE(217)
					::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
					HX_STACK_LINE(217)
					if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
						HX_STACK_LINE(217)
						::nape::geom::Vec2 _g22 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g22,"_g22");
						HX_STACK_LINE(217)
						ret = _g22;
					}
					else{
						HX_STACK_LINE(217)
						ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
						HX_STACK_LINE(217)
						::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
						HX_STACK_LINE(217)
						ret->zpp_pool = null();
					}
					HX_STACK_LINE(217)
					if (((ret->zpp_inner == null()))){
						HX_STACK_LINE(217)
						::zpp_nape::geom::ZPP_Vec2 _g24;		HX_STACK_VAR(_g24,"_g24");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
							HX_STACK_LINE(217)
							::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
									HX_STACK_LINE(217)
									::zpp_nape::geom::ZPP_Vec2 _g23 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g23,"_g23");
									HX_STACK_LINE(217)
									ret1 = _g23;
								}
								else{
									HX_STACK_LINE(217)
									ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
									HX_STACK_LINE(217)
									::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
									HX_STACK_LINE(217)
									ret1->next = null();
								}
								HX_STACK_LINE(217)
								ret1->weak = false;
							}
							HX_STACK_LINE(217)
							ret1->_immutable = immutable;
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								ret1->x = x;
								HX_STACK_LINE(217)
								ret1->y = y;
								HX_STACK_LINE(217)
								{
								}
							}
							HX_STACK_LINE(217)
							_g24 = ret1;
						}
						HX_STACK_LINE(217)
						ret->zpp_inner = _g24;
						HX_STACK_LINE(217)
						ret->zpp_inner->outer = ret;
					}
					else{
						HX_STACK_LINE(217)
						Float _g25;		HX_STACK_VAR(_g25,"_g25");
						HX_STACK_LINE(217)
						{
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(217)
								if (((_this->_validate != null()))){
									HX_STACK_LINE(217)
									_this->_validate();
								}
							}
							HX_STACK_LINE(217)
							_g25 = ret->zpp_inner->x;
						}
						struct _Function_5_1{
							inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",217,0x86ce3ecc)
								{
									HX_STACK_LINE(217)
									Float _g26;		HX_STACK_VAR(_g26,"_g26");
									HX_STACK_LINE(217)
									{
										HX_STACK_LINE(217)
										{
											HX_STACK_LINE(217)
											::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(217)
											if (((_this->_validate != null()))){
												HX_STACK_LINE(217)
												_this->_validate();
											}
										}
										HX_STACK_LINE(217)
										_g26 = ret->zpp_inner->y;
									}
									HX_STACK_LINE(217)
									return (_g26 == y);
								}
								return null();
							}
						};
						HX_STACK_LINE(217)
						if ((!(((  (((_g25 == x))) ? bool(_Function_5_1::Block(ret,y)) : bool(false) ))))){
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								ret->zpp_inner->x = x;
								HX_STACK_LINE(217)
								ret->zpp_inner->y = y;
								HX_STACK_LINE(217)
								{
								}
							}
							HX_STACK_LINE(217)
							{
								HX_STACK_LINE(217)
								::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(217)
								if (((_this->_invalidate != null()))){
									HX_STACK_LINE(217)
									_this->_invalidate(_this);
								}
							}
						}
						HX_STACK_LINE(217)
						ret;
					}
					HX_STACK_LINE(217)
					ret->zpp_inner->weak = weak;
					HX_STACK_LINE(217)
					_g27 = ret;
				}
				HX_STACK_LINE(217)
				vertices->push(_g27);
				HX_STACK_LINE(218)
				{
					HX_STACK_LINE(218)
					::nape::shape::ShapeList _this = this->body->zpp_inner->wrap_shapes;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(218)
					::nape::shape::Shape obj = ::nape::shape::Polygon_obj::__new(vertices,mat,null());		HX_STACK_VAR(obj,"obj");
					HX_STACK_LINE(218)
					if ((_this->zpp_inner->reverse_flag)){
						HX_STACK_LINE(218)
						_this->push(obj);
					}
					else{
						HX_STACK_LINE(218)
						_this->unshift(obj);
					}
				}
				HX_STACK_LINE(219)
				if ((!(rect->_inPool))){
					HX_STACK_LINE(219)
					rect->_inPool = true;
					HX_STACK_LINE(219)
					::flixel::util::FlxRect_obj::_pool->putUnsafe(rect);
				}
			}
		}
		struct _Function_1_1{
			inline static ::nape::space::Space Block( hx::ObjectPtr< ::flixel::addons::nape::FlxNapeTilemap_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/nape/FlxNapeTilemap.hx",222,0x86ce3ecc)
				{
					HX_STACK_LINE(222)
					::nape::phys::Body _this = __this->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(222)
					return (  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) );
				}
				return null();
			}
		};
		HX_STACK_LINE(222)
		if (((_Function_1_1::Block(this) == null()))){
			HX_STACK_LINE(224)
			::nape::phys::Body _this = this->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(224)
			::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(224)
			{
				HX_STACK_LINE(224)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(224)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(224)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(224)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(224)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(224)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(224)
					if (((space != null()))){
						HX_STACK_LINE(224)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(224)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(224)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(224)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(224)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(224)
				Dynamic();
			}
			else{
				HX_STACK_LINE(224)
				_this->zpp_inner->space->outer;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxNapeTilemap_obj,constructCollider,(void))

::flixel::util::FlxRect FlxNapeTilemap_obj::constructRectangle( int StartX,int StartY,int EndY){
	HX_STACK_FRAME("flixel.addons.nape.FlxNapeTilemap","constructRectangle",0x0bd715d5,"flixel.addons.nape.FlxNapeTilemap.constructRectangle","flixel/addons/nape/FlxNapeTilemap.hx",237,0x86ce3ecc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartX,"StartX")
	HX_STACK_ARG(StartY,"StartY")
	HX_STACK_ARG(EndY,"EndY")
	HX_STACK_LINE(239)
	(StartX)++;
	HX_STACK_LINE(240)
	bool rectFinished = false;		HX_STACK_VAR(rectFinished,"rectFinished");
	HX_STACK_LINE(241)
	int tileIndex = (int)0;		HX_STACK_VAR(tileIndex,"tileIndex");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		int _g1 = StartX;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(243)
		int _g = this->widthInTiles;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(243)
		while((true)){
			HX_STACK_LINE(243)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(243)
				break;
			}
			HX_STACK_LINE(243)
			int x = (_g1)++;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				int _g3 = StartY;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(245)
				int _g2 = (EndY + (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(245)
				while((true)){
					HX_STACK_LINE(245)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(245)
						break;
					}
					HX_STACK_LINE(245)
					int y = (_g3)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(247)
					tileIndex = (x + (y * this->widthInTiles));
					HX_STACK_LINE(249)
					if (((bool((this->_binaryData->__get(tileIndex) == (int)0)) || bool((this->_binaryData->__get(tileIndex) == (int)-1))))){
						HX_STACK_LINE(251)
						rectFinished = true;
						HX_STACK_LINE(252)
						break;
					}
				}
			}
			HX_STACK_LINE(255)
			if ((rectFinished)){
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					int _g2 = StartX;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(258)
					while((true)){
						HX_STACK_LINE(258)
						if ((!(((_g2 < x))))){
							HX_STACK_LINE(258)
							break;
						}
						HX_STACK_LINE(258)
						int u = (_g2)++;		HX_STACK_VAR(u,"u");
						HX_STACK_LINE(260)
						{
							HX_STACK_LINE(260)
							int _g4 = StartY;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(260)
							int _g3 = (EndY + (int)1);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(260)
							while((true)){
								HX_STACK_LINE(260)
								if ((!(((_g4 < _g3))))){
									HX_STACK_LINE(260)
									break;
								}
								HX_STACK_LINE(260)
								int v = (_g4)++;		HX_STACK_VAR(v,"v");
								HX_STACK_LINE(262)
								tileIndex = (u + (v * this->widthInTiles));
								HX_STACK_LINE(263)
								this->_binaryData[tileIndex] = (int)-1;
							}
						}
					}
				}
				HX_STACK_LINE(268)
				{
					HX_STACK_LINE(268)
					::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
					HX_STACK_LINE(268)
					{
						HX_STACK_LINE(268)
						::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(268)
						_this->x = (StartX - (int)1);
						HX_STACK_LINE(268)
						_this->y = StartY;
						HX_STACK_LINE(268)
						_this->width = (x - (int)1);
						HX_STACK_LINE(268)
						_this->height = EndY;
						HX_STACK_LINE(268)
						rect = _this;
					}
					HX_STACK_LINE(268)
					rect->_inPool = false;
					HX_STACK_LINE(268)
					return rect;
				}
			}
		}
	}
	HX_STACK_LINE(272)
	{
		HX_STACK_LINE(272)
		int _g1 = StartX;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(272)
		int _g = this->widthInTiles;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		while((true)){
			HX_STACK_LINE(272)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(272)
				break;
			}
			HX_STACK_LINE(272)
			int u = (_g1)++;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(274)
			{
				HX_STACK_LINE(274)
				int _g3 = StartY;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(274)
				int _g2 = (EndY + (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(274)
				while((true)){
					HX_STACK_LINE(274)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(274)
						break;
					}
					HX_STACK_LINE(274)
					int v = (_g3)++;		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(276)
					tileIndex = (u + (v * this->widthInTiles));
					HX_STACK_LINE(277)
					this->_binaryData[tileIndex] = (int)-1;
				}
			}
		}
	}
	HX_STACK_LINE(280)
	::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(280)
	{
		HX_STACK_LINE(280)
		::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(280)
		_this->x = (StartX - (int)1);
		HX_STACK_LINE(280)
		_this->y = StartY;
		HX_STACK_LINE(280)
		_this->width = (this->widthInTiles - (int)1);
		HX_STACK_LINE(280)
		_this->height = EndY;
		HX_STACK_LINE(280)
		rect = _this;
	}
	HX_STACK_LINE(280)
	rect->_inPool = false;
	HX_STACK_LINE(280)
	return rect;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxNapeTilemap_obj,constructRectangle,return )


FlxNapeTilemap_obj::FlxNapeTilemap_obj()
{
}

void FlxNapeTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxNapeTilemap);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(_binaryData,"_binaryData");
	::flixel::tile::FlxTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxNapeTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(_binaryData,"_binaryData");
	::flixel::tile::FlxTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxNapeTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return body; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_binaryData") ) { return _binaryData; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addSolidTile") ) { return addSolidTile_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setupTileIndices") ) { return setupTileIndices_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"setupCollideIndex") ) { return setupCollideIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"constructCollider") ) { return constructCollider_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"placeCustomPolygon") ) { return placeCustomPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"constructRectangle") ) { return constructRectangle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxNapeTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast< ::nape::phys::Body >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_binaryData") ) { _binaryData=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxNapeTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("body"));
	outFields->push(HX_CSTRING("_binaryData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::nape::phys::Body*/ ,(int)offsetof(FlxNapeTilemap_obj,body),HX_CSTRING("body")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxNapeTilemap_obj,_binaryData),HX_CSTRING("_binaryData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("body"),
	HX_CSTRING("_binaryData"),
	HX_CSTRING("update"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("addSolidTile"),
	HX_CSTRING("placeCustomPolygon"),
	HX_CSTRING("setupCollideIndex"),
	HX_CSTRING("setupTileIndices"),
	HX_CSTRING("constructCollider"),
	HX_CSTRING("constructRectangle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxNapeTilemap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxNapeTilemap_obj::__mClass,"__mClass");
};

#endif

Class FlxNapeTilemap_obj::__mClass;

void FlxNapeTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.nape.FlxNapeTilemap"), hx::TCanCast< FlxNapeTilemap_obj> ,sStaticFields,sMemberFields,
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

void FlxNapeTilemap_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace nape
