#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/addons/nape/FlxNapeState.h>
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeSprite)
HX_DECLARE_CLASS3(flixel,addons,nape,FlxNapeState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(nape,callbacks,Callback)
HX_DECLARE_CLASS2(nape,callbacks,InteractionCallback)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::addons::nape::FlxNapeState_obj{
	public:
		typedef ::flixel::addons::nape::FlxNapeState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::Player player;
		Float mouseCounter;
		::flixel::FlxSprite preCue;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

		virtual Void hitPlayer( ::nape::callbacks::InteractionCallback collision);
		Dynamic hitPlayer_dyn();

};


#endif /* INCLUDED_PlayState */ 
