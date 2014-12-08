#include <hxcpp.h>

#ifndef INCLUDED_Bumper
#include <Bumper.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Cueball
#include <Cueball.h>
#endif
#ifndef INCLUDED_OtherBall
#include <OtherBall.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Pocket
#include <Pocket.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObject
#include <flixel/addons/editors/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_nape_FlxNapeSprite
#include <flixel/addons/nape/FlxNapeSprite.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_nape_callbacks_Callback
#include <nape/callbacks/Callback.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbEvent
#include <nape/callbacks/CbEvent.h>
#endif
#ifndef INCLUDED_nape_callbacks_CbType
#include <nape/callbacks/CbType.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionCallback
#include <nape/callbacks/InteractionCallback.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionListener
#include <nape/callbacks/InteractionListener.h>
#endif
#ifndef INCLUDED_nape_callbacks_InteractionType
#include <nape/callbacks/InteractionType.h>
#endif
#ifndef INCLUDED_nape_callbacks_Listener
#include <nape/callbacks/Listener.h>
#endif
#ifndef INCLUDED_nape_callbacks_ListenerList
#include <nape/callbacks/ListenerList.h>
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
#ifndef INCLUDED_nape_phys_Interactor
#include <nape/phys/Interactor.h>
#endif
#ifndef INCLUDED_nape_phys_Material
#include <nape/phys/Material.h>
#endif
#ifndef INCLUDED_nape_space_Space
#include <nape/space/Space.h>
#endif
#ifndef INCLUDED_zpp_nape_callbacks_ZPP_Callback
#include <zpp_nape/callbacks/ZPP_Callback.h>
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
#ifndef INCLUDED_zpp_nape_util_ZPP_ListenerList
#include <zpp_nape/util/ZPP_ListenerList.h>
#endif
#ifndef INCLUDED_zpp_nape_util_ZPP_PubPool
#include <zpp_nape/util/ZPP_PubPool.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",24,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(24)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",34,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->super::create();
		HX_STACK_LINE(36)
		::flixel::FlxG_obj::mouse->set_useSystemCursor(true);
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			::nape::space::Space _this = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(37)
			{
				HX_STACK_LINE(37)
				Float d = (int)0;		HX_STACK_VAR(d,"d");
				HX_STACK_LINE(37)
				_this->zpp_inner->global_lin_drag = d;
			}
			HX_STACK_LINE(37)
			_this->zpp_inner->global_lin_drag;
		}
		HX_STACK_LINE(39)
		::flixel::addons::editors::tiled::TiledMap mapData = ::flixel::addons::editors::tiled::TiledMap_obj::__new(HX_CSTRING("assets/maps/testMap.tmx"));		HX_STACK_VAR(mapData,"mapData");
		HX_STACK_LINE(40)
		::flixel::addons::nape::FlxNapeTilemap level = ::flixel::addons::nape::FlxNapeTilemap_obj::__new();		HX_STACK_VAR(level,"level");
		HX_STACK_LINE(41)
		level->widthInTiles = (int)22;
		HX_STACK_LINE(42)
		level->heightInTiles = (int)17;
		HX_STACK_LINE(43)
		Array< int > _g = mapData->getLayer(HX_CSTRING("tiles"))->get_tileArray();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		level->loadMap(_g,HX_CSTRING("assets/images/tilesheet.png"),(int)32,(int)32,(int)0,(int)1,(int)1,(int)2);
		HX_STACK_LINE(44)
		::nape::phys::Material _g1 = ::nape::phys::Material_obj::__new((int)1,(int)0,(int)0,::Math_obj::POSITIVE_INFINITY,(int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		level->setupCollideIndex((int)2,_g1);
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::nape::phys::Body _this = level->body;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(45)
			::nape::space::Space space = ::flixel::addons::nape::FlxNapeState_obj::space;		HX_STACK_VAR(space,"space");
			HX_STACK_LINE(45)
			{
				HX_STACK_LINE(45)
				_this->zpp_inner->immutable_midstep(HX_CSTRING("Body::space"));
				HX_STACK_LINE(45)
				if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != space))){
					HX_STACK_LINE(45)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(45)
						_this->zpp_inner->component->woken = false;
					}
					HX_STACK_LINE(45)
					if (((((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) )) != null()))){
						HX_STACK_LINE(45)
						((  (((_this->zpp_inner->space == null()))) ? ::nape::space::Space(null()) : ::nape::space::Space(_this->zpp_inner->space->outer) ))->zpp_inner->wrap_bodies->remove(_this);
					}
					HX_STACK_LINE(45)
					if (((space != null()))){
						HX_STACK_LINE(45)
						::nape::phys::BodyList _this1 = space->zpp_inner->wrap_bodies;		HX_STACK_VAR(_this1,"_this1");
						HX_STACK_LINE(45)
						if ((_this1->zpp_inner->reverse_flag)){
							HX_STACK_LINE(45)
							_this1->push(_this);
						}
						else{
							HX_STACK_LINE(45)
							_this1->unshift(_this);
						}
					}
				}
			}
			HX_STACK_LINE(45)
			if (((_this->zpp_inner->space == null()))){
				HX_STACK_LINE(45)
				Dynamic();
			}
			else{
				HX_STACK_LINE(45)
				_this->zpp_inner->space->outer;
			}
		}
		HX_STACK_LINE(46)
		this->add(level);
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(48)
			Array< ::Dynamic > _g11 = mapData->getObjectGroup(HX_CSTRING("bumpers"))->objects;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				if ((!(((_g2 < _g11->length))))){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				::flixel::addons::editors::tiled::TiledObject b = _g11->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(48)
				++(_g2);
				HX_STACK_LINE(49)
				::Bumper _g21 = ::Bumper_obj::__new((b->x + (int)16),(b->y + (int)16));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(49)
				this->add(_g21);
			}
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(52)
			Array< ::Dynamic > _g11 = mapData->getObjectGroup(HX_CSTRING("pockets"))->objects;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(52)
			while((true)){
				HX_STACK_LINE(52)
				if ((!(((_g2 < _g11->length))))){
					HX_STACK_LINE(52)
					break;
				}
				HX_STACK_LINE(52)
				::flixel::addons::editors::tiled::TiledObject p = _g11->__get(_g2).StaticCast< ::flixel::addons::editors::tiled::TiledObject >();		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(52)
				++(_g2);
				HX_STACK_LINE(53)
				::Pocket _g3 = ::Pocket_obj::__new((p->x + (int)16),(p->y + (int)16));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(53)
				this->add(_g3);
				HX_STACK_LINE(54)
				Float maxAngle = (int)180;		HX_STACK_VAR(maxAngle,"maxAngle");
				HX_STACK_LINE(55)
				Float minAngle = (int)-180;		HX_STACK_VAR(minAngle,"minAngle");
				HX_STACK_LINE(56)
				if (((p->x <= (int)32))){
					HX_STACK_LINE(57)
					if (((p->y <= (int)32))){
						HX_STACK_LINE(58)
						maxAngle = (Float(::Math_obj::PI) / Float((int)2));
						HX_STACK_LINE(59)
						minAngle = (int)0;
					}
					else{
						HX_STACK_LINE(60)
						if (((p->y >= (int)480))){
							HX_STACK_LINE(61)
							maxAngle = (int)0;
							HX_STACK_LINE(62)
							minAngle = (Float(-(::Math_obj::PI)) / Float((int)2));
						}
						else{
							HX_STACK_LINE(64)
							maxAngle = (Float(::Math_obj::PI) / Float((int)2));
							HX_STACK_LINE(65)
							minAngle = (Float(-(::Math_obj::PI)) / Float((int)2));
						}
					}
				}
				else{
					HX_STACK_LINE(67)
					if (((p->x >= (int)640))){
						HX_STACK_LINE(68)
						if (((p->y <= (int)32))){
							HX_STACK_LINE(69)
							maxAngle = ::Math_obj::PI;
							HX_STACK_LINE(70)
							minAngle = (Float(::Math_obj::PI) / Float((int)2));
						}
						else{
							HX_STACK_LINE(71)
							if (((p->y >= (int)480))){
								HX_STACK_LINE(72)
								maxAngle = (Float(-(::Math_obj::PI)) / Float((int)2));
								HX_STACK_LINE(73)
								minAngle = -(::Math_obj::PI);
							}
							else{
								HX_STACK_LINE(75)
								maxAngle = (Float(((int)3 * ::Math_obj::PI)) / Float((int)2));
								HX_STACK_LINE(76)
								minAngle = (Float(::Math_obj::PI) / Float((int)2));
							}
						}
					}
					else{
						HX_STACK_LINE(78)
						if (((p->y <= (int)32))){
							HX_STACK_LINE(79)
							maxAngle = (int)0;
							HX_STACK_LINE(80)
							minAngle = -(::Math_obj::PI);
						}
						else{
							HX_STACK_LINE(81)
							if (((p->y >= (int)480))){
								HX_STACK_LINE(82)
								maxAngle = ::Math_obj::PI;
								HX_STACK_LINE(83)
								minAngle = (int)0;
							}
						}
					}
				}
				HX_STACK_LINE(85)
				Float tempAngle = ::flixel::util::FlxRandom_obj::floatRanged(minAngle,maxAngle,null());		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(86)
				Float _g4 = ::Math_obj::cos(tempAngle);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(86)
				Float _g5 = ::Math_obj::sin(tempAngle);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(86)
				::nape::geom::Vec2 startDir = ::nape::geom::Vec2_obj::__new(_g4,_g5);		HX_STACK_VAR(startDir,"startDir");
				HX_STACK_LINE(87)
				Float _g6;		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::zpp_nape::geom::ZPP_Vec2 _this = startDir->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(87)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(87)
							_this->_validate();
						}
					}
					HX_STACK_LINE(87)
					_g6 = startDir->zpp_inner->x;
				}
				HX_STACK_LINE(87)
				Float _g7 = (_g6 * (int)33);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(87)
				Float _g8 = ((p->x + (int)16) + _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(87)
				int _g9 = ::Math_obj::round(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(87)
				Float _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(87)
				{
					HX_STACK_LINE(87)
					{
						HX_STACK_LINE(87)
						::zpp_nape::geom::ZPP_Vec2 _this = startDir->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(87)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(87)
							_this->_validate();
						}
					}
					HX_STACK_LINE(87)
					_g10 = startDir->zpp_inner->y;
				}
				HX_STACK_LINE(87)
				Float _g111 = (_g10 * (int)33);		HX_STACK_VAR(_g111,"_g111");
				HX_STACK_LINE(87)
				Float _g12 = ((p->y + (int)16) + _g111);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(87)
				int _g13 = ::Math_obj::round(_g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(87)
				::OtherBall testBall = ::OtherBall_obj::__new(_g9,_g13);		HX_STACK_VAR(testBall,"testBall");
				HX_STACK_LINE(88)
				testBall->shootAtSpeed(startDir,::Reg_obj::minShootSpeed);
				HX_STACK_LINE(89)
				this->add(testBall);
			}
		}
		HX_STACK_LINE(92)
		::Player _g14 = ::Player_obj::__new((mapData->getObjectGroup(HX_CSTRING("player"))->objects->__get((int)0).StaticCast< ::flixel::addons::editors::tiled::TiledObject >()->x + (int)16),(mapData->getObjectGroup(HX_CSTRING("player"))->objects->__get((int)0).StaticCast< ::flixel::addons::editors::tiled::TiledObject >()->y + (int)16));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(92)
		this->player = _g14;
		HX_STACK_LINE(93)
		this->add(this->player);
		HX_STACK_LINE(95)
		::flixel::FlxSprite _g15 = ::flixel::FlxSprite_obj::__new(null(),null(),null())->makeGraphic((int)32,(int)32,(int)0,true,null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(95)
		this->preCue = _g15;
		HX_STACK_LINE(96)
		::flixel::util::FlxSpriteUtil_obj::drawCircle(this->preCue,(int)16,(int)16,(int)16,(int)2147483647,null(),null(),null());
		HX_STACK_LINE(97)
		this->preCue->set_visible(false);
		HX_STACK_LINE(98)
		this->add(this->preCue);
		HX_STACK_LINE(101)
		{
			HX_STACK_LINE(101)
			::nape::callbacks::ListenerList _this = ::flixel::addons::nape::FlxNapeState_obj::space->zpp_inner->wrap_listeners;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(101)
			::nape::callbacks::CbEvent _g17;		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
					HX_STACK_LINE(101)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(101)
					::nape::callbacks::CbEvent _g16 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(101)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g16;
					HX_STACK_LINE(101)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(101)
				_g17 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			HX_STACK_LINE(101)
			::nape::callbacks::InteractionType _g19;		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
					HX_STACK_LINE(101)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(101)
					::nape::callbacks::InteractionType _g18 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(101)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g18;
					HX_STACK_LINE(101)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(101)
				_g19 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
			}
			HX_STACK_LINE(101)
			::nape::callbacks::Listener obj = ::nape::callbacks::InteractionListener_obj::__new(_g17,_g19,::Cueball_obj::cbType,::Player_obj::cbType,this->hitPlayer_dyn(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(101)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(101)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(101)
				_this->unshift(obj);
			}
		}
		HX_STACK_LINE(102)
		{
			HX_STACK_LINE(102)
			::nape::callbacks::ListenerList _this = ::flixel::addons::nape::FlxNapeState_obj::space->zpp_inner->wrap_listeners;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(102)
			::nape::callbacks::CbEvent _g21;		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				if (((::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN == null()))){
					HX_STACK_LINE(102)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(102)
					::nape::callbacks::CbEvent _g20 = ::nape::callbacks::CbEvent_obj::__new();		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(102)
					::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN = _g20;
					HX_STACK_LINE(102)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(102)
				_g21 = ::zpp_nape::util::ZPP_Flags_obj::CbEvent_BEGIN;
			}
			HX_STACK_LINE(102)
			::nape::callbacks::InteractionType _g23;		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				if (((::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY == null()))){
					HX_STACK_LINE(102)
					::zpp_nape::util::ZPP_Flags_obj::internal = true;
					HX_STACK_LINE(102)
					::nape::callbacks::InteractionType _g22 = ::nape::callbacks::InteractionType_obj::__new();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(102)
					::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY = _g22;
					HX_STACK_LINE(102)
					::zpp_nape::util::ZPP_Flags_obj::internal = false;
				}
				HX_STACK_LINE(102)
				_g23 = ::zpp_nape::util::ZPP_Flags_obj::InteractionType_ANY;
			}
			HX_STACK_LINE(102)
			::nape::callbacks::Listener obj = ::nape::callbacks::InteractionListener_obj::__new(_g21,_g23,::OtherBall_obj::cbType,::Player_obj::cbType,this->hitPlayer_dyn(),null());		HX_STACK_VAR(obj,"obj");
			HX_STACK_LINE(102)
			if ((_this->zpp_inner->reverse_flag)){
				HX_STACK_LINE(102)
				_this->push(obj);
			}
			else{
				HX_STACK_LINE(102)
				_this->unshift(obj);
			}
		}
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",111,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",118,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(119)
		::Controls_obj::update();
		HX_STACK_LINE(120)
		::nape::geom::Vec2 _g5;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			Float x = ::flixel::FlxG_obj::mouse->x;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(120)
			Float y = ::flixel::FlxG_obj::mouse->y;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(120)
			{
				HX_STACK_LINE(120)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(120)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(120)
					::nape::geom::Vec2 _g = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(120)
					ret = _g;
				}
				else{
					HX_STACK_LINE(120)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(120)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(120)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(120)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(120)
					::zpp_nape::geom::ZPP_Vec2 _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(120)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(120)
								::zpp_nape::geom::ZPP_Vec2 _g1 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(120)
								ret1 = _g1;
							}
							else{
								HX_STACK_LINE(120)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(120)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(120)
								ret1->next = null();
							}
							HX_STACK_LINE(120)
							ret1->weak = false;
						}
						HX_STACK_LINE(120)
						ret1->_immutable = immutable;
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							ret1->x = x;
							HX_STACK_LINE(120)
							ret1->y = y;
							HX_STACK_LINE(120)
							{
							}
						}
						HX_STACK_LINE(120)
						_g2 = ret1;
					}
					HX_STACK_LINE(120)
					ret->zpp_inner = _g2;
					HX_STACK_LINE(120)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(120)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(120)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(120)
								_this->_validate();
							}
						}
						HX_STACK_LINE(120)
						_g3 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",120,0xb30d7781)
							{
								HX_STACK_LINE(120)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(120)
								{
									HX_STACK_LINE(120)
									{
										HX_STACK_LINE(120)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(120)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(120)
											_this->_validate();
										}
									}
									HX_STACK_LINE(120)
									_g4 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(120)
								return (_g4 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(120)
					if ((!(((  (((_g3 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(120)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(120)
							{
							}
						}
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(120)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(120)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(120)
					ret;
				}
				HX_STACK_LINE(120)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(120)
				_g5 = ret;
			}
		}
		struct _Function_1_1{
			inline static ::nape::geom::Vec2 Block( hx::ObjectPtr< ::PlayState_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",120,0xb30d7781)
				{
					HX_STACK_LINE(120)
					::nape::phys::Body _this = __this->player->body;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(120)
					if (((_this->zpp_inner->wrap_pos == null()))){
						HX_STACK_LINE(120)
						_this->zpp_inner->setupPosition();
					}
					HX_STACK_LINE(120)
					return _this->zpp_inner->wrap_pos;
				}
				return null();
			}
		};
		HX_STACK_LINE(120)
		::nape::geom::Vec2 shootDir = (_Function_1_1::Block(this))->sub(_g5,true)->unit(false);		HX_STACK_VAR(shootDir,"shootDir");
		HX_STACK_LINE(121)
		::nape::geom::Vec2 ballPlace;		HX_STACK_VAR(ballPlace,"ballPlace");
		HX_STACK_LINE(121)
		{
			HX_STACK_LINE(121)
			Float _g6;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					::zpp_nape::geom::ZPP_Vec2 _this = shootDir->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(121)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(121)
						_this->_validate();
					}
				}
				HX_STACK_LINE(121)
				_g6 = shootDir->zpp_inner->x;
			}
			HX_STACK_LINE(121)
			Float _g7 = (_g6 * (int)33);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(121)
			Float x = (this->player->x + _g7);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(121)
			Float _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				{
					HX_STACK_LINE(121)
					::zpp_nape::geom::ZPP_Vec2 _this = shootDir->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(121)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(121)
						_this->_validate();
					}
				}
				HX_STACK_LINE(121)
				_g8 = shootDir->zpp_inner->y;
			}
			HX_STACK_LINE(121)
			Float _g9 = (_g8 * (int)33);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(121)
			Float y = (this->player->y + _g9);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(121)
			{
				HX_STACK_LINE(121)
				::nape::geom::Vec2 ret;		HX_STACK_VAR(ret,"ret");
				HX_STACK_LINE(121)
				if (((::zpp_nape::util::ZPP_PubPool_obj::poolVec2 == null()))){
					HX_STACK_LINE(121)
					::nape::geom::Vec2 _g10 = ::nape::geom::Vec2_obj::__new(null(),null());		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(121)
					ret = _g10;
				}
				else{
					HX_STACK_LINE(121)
					ret = ::zpp_nape::util::ZPP_PubPool_obj::poolVec2;
					HX_STACK_LINE(121)
					::zpp_nape::util::ZPP_PubPool_obj::poolVec2 = ret->zpp_pool;
					HX_STACK_LINE(121)
					ret->zpp_pool = null();
				}
				HX_STACK_LINE(121)
				if (((ret->zpp_inner == null()))){
					HX_STACK_LINE(121)
					::zpp_nape::geom::ZPP_Vec2 _g12;		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						bool immutable = false;		HX_STACK_VAR(immutable,"immutable");
						HX_STACK_LINE(121)
						::zpp_nape::geom::ZPP_Vec2 ret1;		HX_STACK_VAR(ret1,"ret1");
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							if (((::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool == null()))){
								HX_STACK_LINE(121)
								::zpp_nape::geom::ZPP_Vec2 _g11 = ::zpp_nape::geom::ZPP_Vec2_obj::__new();		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(121)
								ret1 = _g11;
							}
							else{
								HX_STACK_LINE(121)
								ret1 = ::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool;
								HX_STACK_LINE(121)
								::zpp_nape::geom::ZPP_Vec2_obj::zpp_pool = ret1->next;
								HX_STACK_LINE(121)
								ret1->next = null();
							}
							HX_STACK_LINE(121)
							ret1->weak = false;
						}
						HX_STACK_LINE(121)
						ret1->_immutable = immutable;
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							ret1->x = x;
							HX_STACK_LINE(121)
							ret1->y = y;
							HX_STACK_LINE(121)
							{
							}
						}
						HX_STACK_LINE(121)
						_g12 = ret1;
					}
					HX_STACK_LINE(121)
					ret->zpp_inner = _g12;
					HX_STACK_LINE(121)
					ret->zpp_inner->outer = ret;
				}
				else{
					HX_STACK_LINE(121)
					Float _g13;		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(121)
					{
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(121)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(121)
								_this->_validate();
							}
						}
						HX_STACK_LINE(121)
						_g13 = ret->zpp_inner->x;
					}
					struct _Function_4_1{
						inline static bool Block( ::nape::geom::Vec2 &ret,Float &y){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",121,0xb30d7781)
							{
								HX_STACK_LINE(121)
								Float _g14;		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(121)
								{
									HX_STACK_LINE(121)
									{
										HX_STACK_LINE(121)
										::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(121)
										if (((_this->_validate != null()))){
											HX_STACK_LINE(121)
											_this->_validate();
										}
									}
									HX_STACK_LINE(121)
									_g14 = ret->zpp_inner->y;
								}
								HX_STACK_LINE(121)
								return (_g14 == y);
							}
							return null();
						}
					};
					HX_STACK_LINE(121)
					if ((!(((  (((_g13 == x))) ? bool(_Function_4_1::Block(ret,y)) : bool(false) ))))){
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							ret->zpp_inner->x = x;
							HX_STACK_LINE(121)
							ret->zpp_inner->y = y;
							HX_STACK_LINE(121)
							{
							}
						}
						HX_STACK_LINE(121)
						{
							HX_STACK_LINE(121)
							::zpp_nape::geom::ZPP_Vec2 _this = ret->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(121)
							if (((_this->_invalidate != null()))){
								HX_STACK_LINE(121)
								_this->_invalidate(_this);
							}
						}
					}
					HX_STACK_LINE(121)
					ret;
				}
				HX_STACK_LINE(121)
				ret->zpp_inner->weak = true;
				HX_STACK_LINE(121)
				ballPlace = ret;
			}
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",123,0xb30d7781)
				{
					HX_STACK_LINE(123)
					::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(123)
					return (bool((_this->current == (int)2)) || bool((_this->current == (int)-2)));
				}
				return null();
			}
		};
		HX_STACK_LINE(123)
		if (((bool(_Function_1_2::Block()) && bool(this->player->alive)))){
			HX_STACK_LINE(124)
			this->mouseCounter = (int)0;
			HX_STACK_LINE(125)
			this->preCue->set_visible(true);
			HX_STACK_LINE(126)
			Float _g15;		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(126)
			{
				HX_STACK_LINE(126)
				{
					HX_STACK_LINE(126)
					::zpp_nape::geom::ZPP_Vec2 _this = ballPlace->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(126)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(126)
						_this->_validate();
					}
				}
				HX_STACK_LINE(126)
				_g15 = ballPlace->zpp_inner->x;
			}
			HX_STACK_LINE(126)
			this->preCue->set_x(_g15);
			HX_STACK_LINE(127)
			Float _g16;		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(127)
			{
				HX_STACK_LINE(127)
				{
					HX_STACK_LINE(127)
					::zpp_nape::geom::ZPP_Vec2 _this = ballPlace->zpp_inner;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(127)
					if (((_this->_validate != null()))){
						HX_STACK_LINE(127)
						_this->_validate();
					}
				}
				HX_STACK_LINE(127)
				_g16 = ballPlace->zpp_inner->y;
			}
			HX_STACK_LINE(127)
			this->preCue->set_y(_g16);
		}
		else{
			HX_STACK_LINE(128)
			if (((bool((::flixel::FlxG_obj::mouse->_leftButton->current > (int)0)) && bool(this->player->alive)))){
				HX_STACK_LINE(129)
				hx::AddEq(this->mouseCounter,::flixel::FlxG_obj::elapsed);
				HX_STACK_LINE(130)
				Float _g17;		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(130)
				{
					HX_STACK_LINE(130)
					{
						HX_STACK_LINE(130)
						::zpp_nape::geom::ZPP_Vec2 _this = ballPlace->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(130)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(130)
							_this->_validate();
						}
					}
					HX_STACK_LINE(130)
					_g17 = ballPlace->zpp_inner->x;
				}
				HX_STACK_LINE(130)
				this->preCue->set_x(_g17);
				HX_STACK_LINE(131)
				Float _g18;		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(131)
				{
					HX_STACK_LINE(131)
					{
						HX_STACK_LINE(131)
						::zpp_nape::geom::ZPP_Vec2 _this = ballPlace->zpp_inner;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(131)
						if (((_this->_validate != null()))){
							HX_STACK_LINE(131)
							_this->_validate();
						}
					}
					HX_STACK_LINE(131)
					_g18 = ballPlace->zpp_inner->y;
				}
				HX_STACK_LINE(131)
				this->preCue->set_y(_g18);
			}
			else{
				struct _Function_3_1{
					inline static bool Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","PlayState.hx",132,0xb30d7781)
						{
							HX_STACK_LINE(132)
							::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(132)
							return (bool((_this->current == (int)-1)) || bool((_this->current == (int)-2)));
						}
						return null();
					}
				};
				HX_STACK_LINE(132)
				if (((bool(_Function_3_1::Block()) && bool(this->player->alive)))){
					HX_STACK_LINE(133)
					this->preCue->set_visible(false);
					HX_STACK_LINE(134)
					Float _g19;		HX_STACK_VAR(_g19,"_g19");
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							::zpp_nape::geom::ZPP_Vec2 _this = ballPlace->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(134)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(134)
								_this->_validate();
							}
						}
						HX_STACK_LINE(134)
						_g19 = ballPlace->zpp_inner->x;
					}
					HX_STACK_LINE(134)
					int _g20 = ::Math_obj::round(_g19);		HX_STACK_VAR(_g20,"_g20");
					HX_STACK_LINE(134)
					int _g21 = (_g20 + (int)16);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(134)
					Float _g22;		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(134)
					{
						HX_STACK_LINE(134)
						{
							HX_STACK_LINE(134)
							::zpp_nape::geom::ZPP_Vec2 _this = ballPlace->zpp_inner;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(134)
							if (((_this->_validate != null()))){
								HX_STACK_LINE(134)
								_this->_validate();
							}
						}
						HX_STACK_LINE(134)
						_g22 = ballPlace->zpp_inner->y;
					}
					HX_STACK_LINE(134)
					int _g23 = ::Math_obj::round(_g22);		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(134)
					int _g24 = (_g23 + (int)16);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(134)
					::Cueball testCueball = ::Cueball_obj::__new(_g21,_g24);		HX_STACK_VAR(testCueball,"testCueball");
					HX_STACK_LINE(135)
					this->add(testCueball);
					HX_STACK_LINE(137)
					Float _g25 = ::Math_obj::min((int)1,(Float(this->mouseCounter) / Float(::Reg_obj::shootChargeTime)));		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(137)
					Float _g26 = (((::Reg_obj::maxShootSpeed - ::Reg_obj::minShootSpeed)) * _g25);		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(137)
					Float _g27 = (_g26 + ::Reg_obj::minShootSpeed);		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(136)
					testCueball->shootAtSpeed(shootDir,_g27);
				}
				else{
					HX_STACK_LINE(138)
					if ((!(this->player->alive))){
						HX_STACK_LINE(139)
						this->preCue->set_visible(false);
					}
				}
			}
		}
		HX_STACK_LINE(142)
		this->super::update();
	}
return null();
}


Void PlayState_obj::hitPlayer( ::nape::callbacks::InteractionCallback collision){
{
		HX_STACK_FRAME("PlayState","hitPlayer",0xa81d69c3,"PlayState.hitPlayer","PlayState.hx",145,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(collision,"collision")
		HX_STACK_LINE(146)
		Float _g7;		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(146)
		{
			HX_STACK_LINE(146)
			::nape::geom::Vec2 _this;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				::nape::phys::Body _this1;		HX_STACK_VAR(_this1,"_this1");
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					::nape::phys::Interactor _this2 = collision->zpp_inner->int1->outer_i;		HX_STACK_VAR(_this2,"_this2");
					HX_STACK_LINE(146)
					if (((_this2->zpp_inner_i->ibody != null()))){
						HX_STACK_LINE(146)
						_this1 = _this2->zpp_inner_i->ibody->outer;
					}
					else{
						HX_STACK_LINE(146)
						_this1 = null();
					}
				}
				HX_STACK_LINE(146)
				if (((_this1->zpp_inner->wrap_vel == null()))){
					HX_STACK_LINE(146)
					_this1->zpp_inner->setupVelocity();
				}
				HX_STACK_LINE(146)
				_this = _this1->zpp_inner->wrap_vel;
			}
			HX_STACK_LINE(146)
			Float _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(146)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(146)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(146)
				_g = _this->zpp_inner->x;
			}
			HX_STACK_LINE(146)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(146)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(146)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(146)
				_g1 = _this->zpp_inner->x;
			}
			HX_STACK_LINE(146)
			Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(146)
			Float _g3;		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(146)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(146)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(146)
				_g3 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(146)
			Float _g4;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(146)
			{
				HX_STACK_LINE(146)
				{
					HX_STACK_LINE(146)
					::zpp_nape::geom::ZPP_Vec2 _this1 = _this->zpp_inner;		HX_STACK_VAR(_this1,"_this1");
					HX_STACK_LINE(146)
					if (((_this1->_validate != null()))){
						HX_STACK_LINE(146)
						_this1->_validate();
					}
				}
				HX_STACK_LINE(146)
				_g4 = _this->zpp_inner->y;
			}
			HX_STACK_LINE(146)
			Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(146)
			Float _g6 = (_g2 + _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(146)
			_g7 = ::Math_obj::sqrt(_g6);
		}
		HX_STACK_LINE(146)
		this->player->getHit(_g7);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,hitPlayer,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(mouseCounter,"mouseCounter");
	HX_MARK_MEMBER_NAME(preCue,"preCue");
	::flixel::addons::nape::FlxNapeState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(mouseCounter,"mouseCounter");
	HX_VISIT_MEMBER_NAME(preCue,"preCue");
	::flixel::addons::nape::FlxNapeState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"preCue") ) { return preCue; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitPlayer") ) { return hitPlayer_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseCounter") ) { return mouseCounter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"preCue") ) { preCue=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseCounter") ) { mouseCounter=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("mouseCounter"));
	outFields->push(HX_CSTRING("preCue"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,player),HX_CSTRING("player")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,mouseCounter),HX_CSTRING("mouseCounter")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,preCue),HX_CSTRING("preCue")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("mouseCounter"),
	HX_CSTRING("preCue"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("hitPlayer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

