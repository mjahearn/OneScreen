#include <hxcpp.h>

#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxVector
#include <flixel/util/FlxPool_flixel_util_FlxVector.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVector
#include <flixel/util/FlxVector.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{

Void FlxVector_obj::__construct(Dynamic X,Dynamic Y)
{
HX_STACK_FRAME("flixel.util.FlxVector","new",0xf9e6a78d,"flixel.util.FlxVector.new","flixel/util/FlxVector.hx",6,0xa3e1b4e3)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(6)
	super::__construct(X,Y);
}
;
	return null();
}

//FlxVector_obj::~FlxVector_obj() { }

Dynamic FlxVector_obj::__CreateEmpty() { return  new FlxVector_obj; }
hx::ObjectPtr< FlxVector_obj > FlxVector_obj::__new(Dynamic X,Dynamic Y)
{  hx::ObjectPtr< FlxVector_obj > result = new FlxVector_obj();
	result->__construct(X,Y);
	return result;}

Dynamic FlxVector_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxVector_obj > result = new FlxVector_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void FlxVector_obj::put( ){
{
		HX_STACK_FRAME("flixel.util.FlxVector","put",0xf9e839fc,"flixel.util.FlxVector.put","flixel/util/FlxVector.hx",36,0xa3e1b4e3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		if ((!(this->_inPool))){
			HX_STACK_LINE(38)
			this->_inPool = true;
			HX_STACK_LINE(39)
			::flixel::util::FlxVector_obj::_pool->putUnsafe(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}


::flixel::util::FlxPoint FlxVector_obj::set( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVector","set",0xf9ea72cf,"flixel.util.FlxVector.set","flixel/util/FlxVector.hx",91,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(92)
		this->set_x(X);
		HX_STACK_LINE(93)
		this->set_y(Y);
		HX_STACK_LINE(94)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::flixel::util::FlxVector FlxVector_obj::scale( Float k){
	HX_STACK_FRAME("flixel.util.FlxVector","scale",0x1e278af7,"flixel.util.FlxVector.scale","flixel/util/FlxVector.hx",104,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		::flixel::util::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		_g->set_x((_g->x * k));
	}
	HX_STACK_LINE(106)
	{
		HX_STACK_LINE(106)
		::flixel::util::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		_g->set_y((_g->y * k));
	}
	HX_STACK_LINE(107)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,scale,return )

::flixel::util::FlxVector FlxVector_obj::scaleNew( Float k){
	HX_STACK_FRAME("flixel.util.FlxVector","scaleNew",0xcf29f1a9,"flixel.util.FlxVector.scaleNew","flixel/util/FlxVector.hx",118,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(118)
	::flixel::util::FlxVector _this = this->clone(null());		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		::flixel::util::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		_g->set_x((_g->x * k));
	}
	HX_STACK_LINE(118)
	{
		HX_STACK_LINE(118)
		::flixel::util::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		_g->set_y((_g->y * k));
	}
	HX_STACK_LINE(118)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,scaleNew,return )

::flixel::util::FlxVector FlxVector_obj::addNew( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","addNew",0xa75103b2,"flixel.util.FlxVector.addNew","flixel/util/FlxVector.hx",128,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(129)
	::flixel::util::FlxVector nv = this->clone(null());		HX_STACK_VAR(nv,"nv");
	HX_STACK_LINE(130)
	nv->addPoint(v);
	HX_STACK_LINE(131)
	return nv;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,addNew,return )

::flixel::util::FlxVector FlxVector_obj::subtractNew( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","subtractNew",0xbb2ac3d9,"flixel.util.FlxVector.subtractNew","flixel/util/FlxVector.hx",141,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(142)
	::flixel::util::FlxVector nv = this->clone(null());		HX_STACK_VAR(nv,"nv");
	HX_STACK_LINE(143)
	nv->subtractPoint(v);
	HX_STACK_LINE(144)
	return this->clone(null());
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,subtractNew,return )

Float FlxVector_obj::dotProduct( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","dotProduct",0xe6544019,"flixel.util.FlxVector.dotProduct","flixel/util/FlxVector.hx",155,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(155)
	return ((this->x * v->x) + (this->y * v->y));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dotProduct,return )

Float FlxVector_obj::dotProdWithNormalizing( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","dotProdWithNormalizing",0x78163bb7,"flixel.util.FlxVector.dotProdWithNormalizing","flixel/util/FlxVector.hx",165,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(166)
	::flixel::util::FlxVector normalized = v->clone(::flixel::util::FlxVector_obj::_vector1)->normalize();		HX_STACK_VAR(normalized,"normalized");
	HX_STACK_LINE(167)
	return ((this->x * normalized->x) + (this->y * normalized->y));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dotProdWithNormalizing,return )

bool FlxVector_obj::isPerpendicular( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","isPerpendicular",0x1d48770d,"flixel.util.FlxVector.isPerpendicular","flixel/util/FlxVector.hx",177,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(178)
	Float _g = ::Math_obj::abs(((this->x * v->x) + (this->y * v->y)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(178)
	return (_g < 9.99999999999999841e-15);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,isPerpendicular,return )

Float FlxVector_obj::crossProductLength( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","crossProductLength",0x7fc88948,"flixel.util.FlxVector.crossProductLength","flixel/util/FlxVector.hx",189,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(189)
	return ((this->x * v->y) - (this->y * v->x));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,crossProductLength,return )

bool FlxVector_obj::isParallel( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","isParallel",0xa109d544,"flixel.util.FlxVector.isParallel","flixel/util/FlxVector.hx",199,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(200)
	Float _g = ::Math_obj::abs(((this->x * v->y) - (this->y * v->x)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(200)
	return (_g < 9.99999999999999841e-15);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,isParallel,return )

bool FlxVector_obj::isZero( ){
	HX_STACK_FRAME("flixel.util.FlxVector","isZero",0x76a3f725,"flixel.util.FlxVector.isZero","flixel/util/FlxVector.hx",209,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(210)
	if (((_g < 0.0000001))){
		HX_STACK_LINE(210)
		Float _g1 = ::Math_obj::abs(this->y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(210)
		return (_g1 < 0.0000001);
	}
	else{
		HX_STACK_LINE(210)
		return false;
	}
	HX_STACK_LINE(210)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isZero,return )

::flixel::util::FlxVector FlxVector_obj::zero( ){
	HX_STACK_FRAME("flixel.util.FlxVector","zero",0xb7da7f5b,"flixel.util.FlxVector.zero","flixel/util/FlxVector.hx",217,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	Float _g = this->set_y((int)0);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(218)
	this->set_x(_g);
	HX_STACK_LINE(219)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,zero,return )

::flixel::util::FlxVector FlxVector_obj::normalize( ){
	HX_STACK_FRAME("flixel.util.FlxVector","normalize",0xf4b52e7a,"flixel.util.FlxVector.normalize","flixel/util/FlxVector.hx",226,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(227)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::util::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxVector.hx",227,0xa3e1b4e3)
			{
				HX_STACK_LINE(227)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(227)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(227)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(229)
		this->set_x((int)1);
		HX_STACK_LINE(230)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(232)
	Float _g2 = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(232)
	Float k = (Float((int)1) / Float(_g2));		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		::flixel::util::FlxVector _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		_g1->set_x((_g1->x * k));
	}
	HX_STACK_LINE(232)
	{
		HX_STACK_LINE(232)
		::flixel::util::FlxVector _g1 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(232)
		_g1->set_y((_g1->y * k));
	}
	HX_STACK_LINE(232)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,normalize,return )

bool FlxVector_obj::isNormalized( ){
	HX_STACK_FRAME("flixel.util.FlxVector","isNormalized",0xef7fe7f4,"flixel.util.FlxVector.isNormalized","flixel/util/FlxVector.hx",239,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(240)
	Float _g = ::Math_obj::abs((((this->x * this->x) + (this->y * this->y)) - (int)1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(240)
	return (_g < 9.99999999999999841e-15);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isNormalized,return )

bool FlxVector_obj::equals( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","equals",0xc83f1132,"flixel.util.FlxVector.equals","flixel/util/FlxVector.hx",249,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(250)
	Float _g = ::Math_obj::abs((this->x - v->x));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(250)
	if (((_g < 0.0000001))){
		HX_STACK_LINE(250)
		Float _g1 = ::Math_obj::abs((this->y - v->y));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(250)
		return (_g1 < 0.0000001);
	}
	else{
		HX_STACK_LINE(250)
		return false;
	}
	HX_STACK_LINE(250)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,equals,return )

::flixel::util::FlxVector FlxVector_obj::rotateByRadians( Float rads){
	HX_STACK_FRAME("flixel.util.FlxVector","rotateByRadians",0xe0456e2d,"flixel.util.FlxVector.rotateByRadians","flixel/util/FlxVector.hx",260,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rads,"rads")
	HX_STACK_LINE(261)
	Float s = ::Math_obj::sin(rads);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(262)
	Float c = ::Math_obj::cos(rads);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(263)
	Float tempX = this->x;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(265)
	this->set_x(((tempX * c) - (this->y * s)));
	HX_STACK_LINE(266)
	this->set_y(((tempX * s) + (this->y * c)));
	HX_STACK_LINE(268)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rotateByRadians,return )

::flixel::util::FlxVector FlxVector_obj::rotateByDegrees( Float degs){
	HX_STACK_FRAME("flixel.util.FlxVector","rotateByDegrees",0xf3b00b62,"flixel.util.FlxVector.rotateByDegrees","flixel/util/FlxVector.hx",279,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(degs,"degs")
	HX_STACK_LINE(279)
	Float rads = (degs * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rads,"rads");
	HX_STACK_LINE(279)
	Float s = ::Math_obj::sin(rads);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(279)
	Float c = ::Math_obj::cos(rads);		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(279)
	Float tempX = this->x;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(279)
	this->set_x(((tempX * c) - (this->y * s)));
	HX_STACK_LINE(279)
	this->set_y(((tempX * s) + (this->y * c)));
	HX_STACK_LINE(279)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rotateByDegrees,return )

::flixel::util::FlxVector FlxVector_obj::rotateWithTrig( Float sin,Float cos){
	HX_STACK_FRAME("flixel.util.FlxVector","rotateWithTrig",0x626cdd70,"flixel.util.FlxVector.rotateWithTrig","flixel/util/FlxVector.hx",290,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sin,"sin")
	HX_STACK_ARG(cos,"cos")
	HX_STACK_LINE(291)
	Float tempX = this->x;		HX_STACK_VAR(tempX,"tempX");
	HX_STACK_LINE(292)
	this->set_x(((tempX * cos) - (this->y * sin)));
	HX_STACK_LINE(293)
	this->set_y(((tempX * sin) + (this->y * cos)));
	HX_STACK_LINE(294)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,rotateWithTrig,return )

::flixel::util::FlxVector FlxVector_obj::rightNormal( ::flixel::util::FlxVector vec){
	HX_STACK_FRAME("flixel.util.FlxVector","rightNormal",0x491f8b50,"flixel.util.FlxVector.rightNormal","flixel/util/FlxVector.hx",301,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(302)
	if (((vec == null()))){
		HX_STACK_LINE(304)
		::flixel::util::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(304)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(304)
			::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(304)
			vector->_inPool = false;
			HX_STACK_LINE(304)
			_g = vector;
		}
		HX_STACK_LINE(304)
		vec = _g;
	}
	HX_STACK_LINE(306)
	hx::TCast< ::flixel::util::FlxVector >::cast(vec->set(-(this->y),this->x));
	HX_STACK_LINE(307)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,rightNormal,return )

::flixel::util::FlxVector FlxVector_obj::leftNormal( ::flixel::util::FlxVector vec){
	HX_STACK_FRAME("flixel.util.FlxVector","leftNormal",0x07de4601,"flixel.util.FlxVector.leftNormal","flixel/util/FlxVector.hx",314,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(315)
	if (((vec == null()))){
		HX_STACK_LINE(317)
		::flixel::util::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(317)
		{
			HX_STACK_LINE(317)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(317)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(317)
			::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(317)
			vector->_inPool = false;
			HX_STACK_LINE(317)
			_g = vector;
		}
		HX_STACK_LINE(317)
		vec = _g;
	}
	HX_STACK_LINE(319)
	hx::TCast< ::flixel::util::FlxVector >::cast(vec->set(this->y,-(this->x)));
	HX_STACK_LINE(320)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,leftNormal,return )

::flixel::util::FlxVector FlxVector_obj::negate( ){
	HX_STACK_FRAME("flixel.util.FlxVector","negate",0x6f6564b5,"flixel.util.FlxVector.negate","flixel/util/FlxVector.hx",327,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(328)
	{
		HX_STACK_LINE(328)
		::flixel::util::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(328)
		_g->set_x((_g->x * (int)-1));
	}
	HX_STACK_LINE(329)
	{
		HX_STACK_LINE(329)
		::flixel::util::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(329)
		_g->set_y((_g->y * (int)-1));
	}
	HX_STACK_LINE(330)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,negate,return )

::flixel::util::FlxVector FlxVector_obj::negateNew( ){
	HX_STACK_FRAME("flixel.util.FlxVector","negateNew",0x0ef042ab,"flixel.util.FlxVector.negateNew","flixel/util/FlxVector.hx",335,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(335)
	::flixel::util::FlxVector _this = this->clone(null());		HX_STACK_VAR(_this,"_this");
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		::flixel::util::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(335)
		_g->set_x((_g->x * (int)-1));
	}
	HX_STACK_LINE(335)
	{
		HX_STACK_LINE(335)
		::flixel::util::FlxVector _g = _this;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(335)
		_g->set_y((_g->y * (int)-1));
	}
	HX_STACK_LINE(335)
	return _this;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,negateNew,return )

::flixel::util::FlxVector FlxVector_obj::projectTo( ::flixel::util::FlxVector v,::flixel::util::FlxVector proj){
	HX_STACK_FRAME("flixel.util.FlxVector","projectTo",0xde0c7ba1,"flixel.util.FlxVector.projectTo","flixel/util/FlxVector.hx",347,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(proj,"proj")
	HX_STACK_LINE(348)
	Float dp = ((this->x * v->x) + (this->y * v->y));		HX_STACK_VAR(dp,"dp");
	HX_STACK_LINE(349)
	Float lenSq = ((v->x * v->x) + (v->y * v->y));		HX_STACK_VAR(lenSq,"lenSq");
	HX_STACK_LINE(351)
	if (((proj == null()))){
		HX_STACK_LINE(353)
		::flixel::util::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(353)
		{
			HX_STACK_LINE(353)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(353)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(353)
			::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(353)
			vector->_inPool = false;
			HX_STACK_LINE(353)
			_g = vector;
		}
		HX_STACK_LINE(353)
		proj = _g;
	}
	HX_STACK_LINE(356)
	return hx::TCast< ::flixel::util::FlxVector >::cast(proj->set((Float((dp * v->x)) / Float(lenSq)),(Float((dp * v->y)) / Float(lenSq))));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,projectTo,return )

::flixel::util::FlxVector FlxVector_obj::projectToNormalized( ::flixel::util::FlxVector v,::flixel::util::FlxVector proj){
	HX_STACK_FRAME("flixel.util.FlxVector","projectToNormalized",0xc6961738,"flixel.util.FlxVector.projectToNormalized","flixel/util/FlxVector.hx",367,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(proj,"proj")
	HX_STACK_LINE(368)
	Float dp = ((this->x * v->x) + (this->y * v->y));		HX_STACK_VAR(dp,"dp");
	HX_STACK_LINE(370)
	if (((proj == null()))){
		HX_STACK_LINE(372)
		::flixel::util::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(372)
		{
			HX_STACK_LINE(372)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(372)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(372)
			::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(372)
			vector->_inPool = false;
			HX_STACK_LINE(372)
			_g = vector;
		}
		HX_STACK_LINE(372)
		proj = _g;
	}
	HX_STACK_LINE(375)
	return hx::TCast< ::flixel::util::FlxVector >::cast(proj->set((dp * v->x),(dp * v->y)));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,projectToNormalized,return )

Float FlxVector_obj::perpProduct( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","perpProduct",0xa2c54aa9,"flixel.util.FlxVector.perpProduct","flixel/util/FlxVector.hx",383,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(383)
	return ((this->y * v->x) + (-(this->x) * v->y));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,perpProduct,return )

Float FlxVector_obj::ratio( ::flixel::util::FlxVector a,::flixel::util::FlxVector b,::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","ratio",0x897cf178,"flixel.util.FlxVector.ratio","flixel/util/FlxVector.hx",395,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(396)
	Float _g = ::Math_obj::abs(((this->x * v->y) - (this->y * v->x)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(396)
	if (((_g < 9.99999999999999841e-15))){
		HX_STACK_LINE(396)
		return ::Math_obj::NaN;
	}
	HX_STACK_LINE(397)
	if (((bool((((this->x * this->x) + (this->y * this->y)) < 9.99999999999999841e-15)) || bool((((v->x * v->x) + (v->y * v->y)) < 9.99999999999999841e-15))))){
		HX_STACK_LINE(397)
		return ::Math_obj::NaN;
	}
	HX_STACK_LINE(399)
	::flixel::util::FlxVector _g1 = b->clone(::flixel::util::FlxVector_obj::_vector1);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(399)
	::flixel::util::FlxVector_obj::_vector1 = _g1;
	HX_STACK_LINE(400)
	::flixel::util::FlxVector_obj::_vector1->subtractPoint(a);
	struct _Function_1_1{
		inline static Float Block( ::flixel::util::FlxVector &v){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxVector.hx",402,0xa3e1b4e3)
			{
				HX_STACK_LINE(402)
				::flixel::util::FlxVector _this = ::flixel::util::FlxVector_obj::_vector1;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(402)
				return ((_this->y * v->x) + (-(_this->x) * v->y));
			}
			return null();
		}
	};
	HX_STACK_LINE(402)
	return (Float(_Function_1_1::Block(v)) / Float((((this->y * v->x) + (-(this->x) * v->y)))));
}


HX_DEFINE_DYNAMIC_FUNC3(FlxVector_obj,ratio,return )

::flixel::util::FlxVector FlxVector_obj::findIntersection( ::flixel::util::FlxVector a,::flixel::util::FlxVector b,::flixel::util::FlxVector v,::flixel::util::FlxVector intersection){
	HX_STACK_FRAME("flixel.util.FlxVector","findIntersection",0x6b2e20d5,"flixel.util.FlxVector.findIntersection","flixel/util/FlxVector.hx",414,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(intersection,"intersection")
	HX_STACK_LINE(415)
	Float t = this->ratio(a,b,v);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(417)
	if (((intersection == null()))){
		HX_STACK_LINE(419)
		::flixel::util::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(419)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(419)
			::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(419)
			vector->_inPool = false;
			HX_STACK_LINE(419)
			_g = vector;
		}
		HX_STACK_LINE(419)
		intersection = _g;
	}
	HX_STACK_LINE(422)
	if ((::Math_obj::isNaN(t))){
		HX_STACK_LINE(424)
		return hx::TCast< ::flixel::util::FlxVector >::cast(intersection->set(::Math_obj::NaN,::Math_obj::NaN));
	}
	HX_STACK_LINE(427)
	return hx::TCast< ::flixel::util::FlxVector >::cast(intersection->set((a->x + (t * this->x)),(a->y + (t * this->y))));
}


HX_DEFINE_DYNAMIC_FUNC4(FlxVector_obj,findIntersection,return )

::flixel::util::FlxVector FlxVector_obj::findIntersectionInBounds( ::flixel::util::FlxVector a,::flixel::util::FlxVector b,::flixel::util::FlxVector v,::flixel::util::FlxVector intersection){
	HX_STACK_FRAME("flixel.util.FlxVector","findIntersectionInBounds",0xc1780a2f,"flixel.util.FlxVector.findIntersectionInBounds","flixel/util/FlxVector.hx",439,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(intersection,"intersection")
	HX_STACK_LINE(440)
	if (((intersection == null()))){
		HX_STACK_LINE(442)
		::flixel::util::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(442)
		{
			HX_STACK_LINE(442)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(442)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(442)
			::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(442)
			vector->_inPool = false;
			HX_STACK_LINE(442)
			_g = vector;
		}
		HX_STACK_LINE(442)
		intersection = _g;
	}
	HX_STACK_LINE(445)
	Float t1 = this->ratio(a,b,v);		HX_STACK_VAR(t1,"t1");
	HX_STACK_LINE(446)
	Float t2 = v->ratio(b,a,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(t2,"t2");
	HX_STACK_LINE(447)
	if (((  (((  (((  (((  (((  ((!(::Math_obj::isNaN(t1)))) ? bool(!(::Math_obj::isNaN(t2))) : bool(false) ))) ? bool((t1 > (int)0)) : bool(false) ))) ? bool((t1 <= (int)1)) : bool(false) ))) ? bool((t2 > (int)0)) : bool(false) ))) ? bool((t2 <= (int)1)) : bool(false) ))){
		HX_STACK_LINE(449)
		return hx::TCast< ::flixel::util::FlxVector >::cast(intersection->set((a->x + (t1 * this->x)),(a->y + (t1 * this->y))));
	}
	HX_STACK_LINE(452)
	return hx::TCast< ::flixel::util::FlxVector >::cast(intersection->set(::Math_obj::NaN,::Math_obj::NaN));
}


HX_DEFINE_DYNAMIC_FUNC4(FlxVector_obj,findIntersectionInBounds,return )

::flixel::util::FlxVector FlxVector_obj::truncate( Float max){
	HX_STACK_FRAME("flixel.util.FlxVector","truncate",0x9ccac419,"flixel.util.FlxVector.truncate","flixel/util/FlxVector.hx",461,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(462)
	{
		HX_STACK_LINE(462)
		Float _g = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(462)
		Float l = ::Math_obj::min(max,_g);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(462)
		Float a = this->get_radians();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(462)
		Float _g1 = ::Math_obj::cos(a);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(462)
		Float _g2 = (l * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(462)
		this->set_x(_g2);
		HX_STACK_LINE(462)
		Float _g3 = ::Math_obj::sin(a);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(462)
		Float _g4 = (l * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(462)
		this->set_y(_g4);
		HX_STACK_LINE(462)
		l;
	}
	HX_STACK_LINE(463)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,truncate,return )

Float FlxVector_obj::radiansBetween( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","radiansBetween",0x8e24d369,"flixel.util.FlxVector.radiansBetween","flixel/util/FlxVector.hx",473,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(474)
	Float _g = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(474)
	Float _g1 = ::Math_obj::sqrt(((v->x * v->x) + (v->y * v->y)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(474)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(474)
	Float _g3 = (Float((((this->x * v->x) + (this->y * v->y)))) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(474)
	return ::Math_obj::acos(_g3);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,radiansBetween,return )

Float FlxVector_obj::degreesBetween( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","degreesBetween",0xe36976d4,"flixel.util.FlxVector.degreesBetween","flixel/util/FlxVector.hx",484,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(485)
	Float _g = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(485)
	Float _g1 = ::Math_obj::sqrt(((v->x * v->x) + (v->y * v->y)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(485)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(485)
	Float _g3 = (Float((((this->x * v->x) + (this->y * v->y)))) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(485)
	Float _g4 = ::Math_obj::acos(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(485)
	return (_g4 * ((Float((int)180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,degreesBetween,return )

int FlxVector_obj::sign( ::flixel::util::FlxVector a,::flixel::util::FlxVector b){
	HX_STACK_FRAME("flixel.util.FlxVector","sign",0xb33d0070,"flixel.util.FlxVector.sign","flixel/util/FlxVector.hx",495,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(496)
	Float signFl = ((((a->x - this->x)) * ((b->y - this->y))) - (((a->y - this->y)) * ((b->x - this->x))));		HX_STACK_VAR(signFl,"signFl");
	HX_STACK_LINE(497)
	if (((signFl == (int)0))){
		HX_STACK_LINE(499)
		return (int)0;
	}
	HX_STACK_LINE(501)
	Float _g = ::Math_obj::abs(signFl);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(501)
	Float _g1 = (Float(signFl) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(501)
	return ::Math_obj::round(_g1);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,sign,return )

Float FlxVector_obj::dist( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","dist",0xa952d799,"flixel.util.FlxVector.dist","flixel/util/FlxVector.hx",509,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::flixel::util::FlxVector_obj > __this,::flixel::util::FlxVector &v){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxVector.hx",509,0xa3e1b4e3)
			{
				HX_STACK_LINE(509)
				Float dx = (v->x - __this->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(509)
				Float dy = (v->y - __this->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(509)
				return ((dx * dx) + (dy * dy));
			}
			return null();
		}
	};
	HX_STACK_LINE(509)
	return ::Math_obj::sqrt(_Function_1_1::Block(this,v));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,dist,return )

Float FlxVector_obj::distSquared( ::flixel::util::FlxVector v){
	HX_STACK_FRAME("flixel.util.FlxVector","distSquared",0xda0bee8e,"flixel.util.FlxVector.distSquared","flixel/util/FlxVector.hx",516,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(v,"v")
	HX_STACK_LINE(517)
	Float dx = (v->x - this->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(518)
	Float dy = (v->y - this->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(519)
	return ((dx * dx) + (dy * dy));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,distSquared,return )

::flixel::util::FlxVector FlxVector_obj::bounce( ::flixel::util::FlxVector normal,hx::Null< Float >  __o_bounceCoeff){
Float bounceCoeff = __o_bounceCoeff.Default(1);
	HX_STACK_FRAME("flixel.util.FlxVector","bounce",0x6e69a87b,"flixel.util.FlxVector.bounce","flixel/util/FlxVector.hx",530,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(bounceCoeff,"bounceCoeff")
{
		HX_STACK_LINE(531)
		Float d = ((((int)1 + bounceCoeff)) * (((this->x * normal->x) + (this->y * normal->y))));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(532)
		{
			HX_STACK_LINE(532)
			::flixel::util::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(532)
			_g->set_x((_g->x - (d * normal->x)));
		}
		HX_STACK_LINE(533)
		{
			HX_STACK_LINE(533)
			::flixel::util::FlxVector _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(533)
			_g->set_y((_g->y - (d * normal->y)));
		}
		HX_STACK_LINE(534)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,bounce,return )

::flixel::util::FlxVector FlxVector_obj::bounceWithFriction( ::flixel::util::FlxVector normal,hx::Null< Float >  __o_bounceCoeff,hx::Null< Float >  __o_friction){
Float bounceCoeff = __o_bounceCoeff.Default(1);
Float friction = __o_friction.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVector","bounceWithFriction",0x3656623b,"flixel.util.FlxVector.bounceWithFriction","flixel/util/FlxVector.hx",546,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(normal,"normal")
	HX_STACK_ARG(bounceCoeff,"bounceCoeff")
	HX_STACK_ARG(friction,"friction")
{
		HX_STACK_LINE(547)
		::flixel::util::FlxVector _g = normal->rightNormal(::flixel::util::FlxVector_obj::_vector3);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(547)
		::flixel::util::FlxVector p1 = this->projectToNormalized(_g,::flixel::util::FlxVector_obj::_vector1);		HX_STACK_VAR(p1,"p1");
		HX_STACK_LINE(548)
		::flixel::util::FlxVector p2 = this->projectToNormalized(normal,::flixel::util::FlxVector_obj::_vector2);		HX_STACK_VAR(p2,"p2");
		HX_STACK_LINE(549)
		Float bounceX = -(p2->x);		HX_STACK_VAR(bounceX,"bounceX");
		HX_STACK_LINE(550)
		Float bounceY = -(p2->y);		HX_STACK_VAR(bounceY,"bounceY");
		HX_STACK_LINE(551)
		Float frictionX = p1->x;		HX_STACK_VAR(frictionX,"frictionX");
		HX_STACK_LINE(552)
		Float frictionY = p1->y;		HX_STACK_VAR(frictionY,"frictionY");
		HX_STACK_LINE(553)
		this->set_x(((bounceX * bounceCoeff) + (frictionX * friction)));
		HX_STACK_LINE(554)
		this->set_y(((bounceY * bounceCoeff) + (frictionY * friction)));
		HX_STACK_LINE(555)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxVector_obj,bounceWithFriction,return )

bool FlxVector_obj::isValid( ){
	HX_STACK_FRAME("flixel.util.FlxVector","isValid",0x08908a5f,"flixel.util.FlxVector.isValid","flixel/util/FlxVector.hx",565,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(565)
	if (((  (((  ((!(::Math_obj::isNaN(this->x)))) ? bool(!(::Math_obj::isNaN(this->y))) : bool(false) ))) ? bool(::Math_obj::isFinite(this->x)) : bool(false) ))){
		HX_STACK_LINE(565)
		return ::Math_obj::isFinite(this->y);
	}
	else{
		HX_STACK_LINE(565)
		return false;
	}
	HX_STACK_LINE(565)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,isValid,return )

::flixel::util::FlxVector FlxVector_obj::clone( ::flixel::util::FlxVector vec){
	HX_STACK_FRAME("flixel.util.FlxVector","clone",0xedbbcfca,"flixel.util.FlxVector.clone","flixel/util/FlxVector.hx",575,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vec,"vec")
	HX_STACK_LINE(576)
	if (((vec == null()))){
		HX_STACK_LINE(578)
		::flixel::util::FlxVector _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(578)
		{
			HX_STACK_LINE(578)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(578)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(578)
			::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
			HX_STACK_LINE(578)
			vector->_inPool = false;
			HX_STACK_LINE(578)
			_g = vector;
		}
		HX_STACK_LINE(578)
		vec = _g;
	}
	HX_STACK_LINE(581)
	vec->set_x(this->x);
	HX_STACK_LINE(582)
	vec->set_y(this->y);
	HX_STACK_LINE(583)
	return vec;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,clone,return )

Float FlxVector_obj::get_dx( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_dx",0xab7c11d0,"flixel.util.FlxVector.get_dx","flixel/util/FlxVector.hx",587,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(588)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::util::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxVector.hx",588,0xa3e1b4e3)
			{
				HX_STACK_LINE(588)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(588)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(588)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(588)
		return (int)0;
	}
	HX_STACK_LINE(590)
	Float _g2 = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(590)
	return (Float(this->x) / Float(_g2));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_dx,return )

Float FlxVector_obj::get_dy( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_dy",0xab7c11d1,"flixel.util.FlxVector.get_dy","flixel/util/FlxVector.hx",594,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(595)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::util::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxVector.hx",595,0xa3e1b4e3)
			{
				HX_STACK_LINE(595)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(595)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(595)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(595)
		return (int)0;
	}
	HX_STACK_LINE(597)
	Float _g2 = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(597)
	return (Float(this->y) / Float(_g2));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_dy,return )

Float FlxVector_obj::get_length( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_length",0x37f31d22,"flixel.util.FlxVector.get_length","flixel/util/FlxVector.hx",602,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(602)
	return ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_length,return )

Float FlxVector_obj::set_length( Float l){
	HX_STACK_FRAME("flixel.util.FlxVector","set_length",0x3b70bb96,"flixel.util.FlxVector.set_length","flixel/util/FlxVector.hx",606,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(l,"l")
	HX_STACK_LINE(607)
	Float a = this->get_radians();		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(608)
	Float _g = ::Math_obj::cos(a);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(608)
	Float _g1 = (l * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(608)
	this->set_x(_g1);
	HX_STACK_LINE(609)
	Float _g2 = ::Math_obj::sin(a);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(609)
	Float _g3 = (l * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(609)
	this->set_y(_g3);
	HX_STACK_LINE(610)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_length,return )

Float FlxVector_obj::get_lengthSquared( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_lengthSquared",0x942d5c25,"flixel.util.FlxVector.get_lengthSquared","flixel/util/FlxVector.hx",615,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(615)
	return ((this->x * this->x) + (this->y * this->y));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_lengthSquared,return )

Float FlxVector_obj::get_degrees( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_degrees",0x6f868feb,"flixel.util.FlxVector.get_degrees","flixel/util/FlxVector.hx",619,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(620)
	Float _g = this->get_radians();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(620)
	return (_g * ((Float((int)180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_degrees,return )

Float FlxVector_obj::set_degrees( Float degs){
	HX_STACK_FRAME("flixel.util.FlxVector","set_degrees",0x79f396f7,"flixel.util.FlxVector.set_degrees","flixel/util/FlxVector.hx",624,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(degs,"degs")
	HX_STACK_LINE(625)
	{
		HX_STACK_LINE(625)
		Float rads = (degs * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(rads,"rads");
		HX_STACK_LINE(625)
		Float len = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(len,"len");
		HX_STACK_LINE(625)
		Float _g = ::Math_obj::cos(rads);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(625)
		Float _g1 = (len * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(625)
		this->set_x(_g1);
		HX_STACK_LINE(625)
		Float _g2 = ::Math_obj::sin(rads);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(625)
		Float _g3 = (len * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(625)
		this->set_y(_g3);
		HX_STACK_LINE(625)
		rads;
	}
	HX_STACK_LINE(626)
	return degs;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_degrees,return )

Float FlxVector_obj::get_radians( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_radians",0x5c1bf2b6,"flixel.util.FlxVector.get_radians","flixel/util/FlxVector.hx",630,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(631)
	Float _g = ::Math_obj::abs(this->x);		HX_STACK_VAR(_g,"_g");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::util::FlxVector_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxVector.hx",631,0xa3e1b4e3)
			{
				HX_STACK_LINE(631)
				Float _g1 = ::Math_obj::abs(__this->y);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(631)
				return (_g1 < 0.0000001);
			}
			return null();
		}
	};
	HX_STACK_LINE(631)
	if (((  (((_g < 0.0000001))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
		HX_STACK_LINE(631)
		return (int)0;
	}
	HX_STACK_LINE(633)
	return ::Math_obj::atan2(this->y,this->x);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_radians,return )

Float FlxVector_obj::set_radians( Float rads){
	HX_STACK_FRAME("flixel.util.FlxVector","set_radians",0x6688f9c2,"flixel.util.FlxVector.set_radians","flixel/util/FlxVector.hx",637,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rads,"rads")
	HX_STACK_LINE(638)
	Float len = ::Math_obj::sqrt(((this->x * this->x) + (this->y * this->y)));		HX_STACK_VAR(len,"len");
	HX_STACK_LINE(640)
	Float _g = ::Math_obj::cos(rads);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(640)
	Float _g1 = (len * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(640)
	this->set_x(_g1);
	HX_STACK_LINE(641)
	Float _g2 = ::Math_obj::sin(rads);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(641)
	Float _g3 = (len * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(641)
	this->set_y(_g3);
	HX_STACK_LINE(642)
	return rads;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxVector_obj,set_radians,return )

Float FlxVector_obj::get_rx( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_rx",0xab7c1e02,"flixel.util.FlxVector.get_rx","flixel/util/FlxVector.hx",647,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(647)
	return -(this->y);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_rx,return )

Float FlxVector_obj::get_ry( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_ry",0xab7c1e03,"flixel.util.FlxVector.get_ry","flixel/util/FlxVector.hx",652,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(652)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_ry,return )

Float FlxVector_obj::get_lx( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_lx",0xab7c18c8,"flixel.util.FlxVector.get_lx","flixel/util/FlxVector.hx",657,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(657)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_lx,return )

Float FlxVector_obj::get_ly( ){
	HX_STACK_FRAME("flixel.util.FlxVector","get_ly",0xab7c18c9,"flixel.util.FlxVector.get_ly","flixel/util/FlxVector.hx",662,0xa3e1b4e3)
	HX_STACK_THIS(this)
	HX_STACK_LINE(662)
	return -(this->x);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxVector_obj,get_ly,return )

Float FlxVector_obj::EPSILON;

Float FlxVector_obj::EPSILON_SQUARED;

::flixel::util::FlxPool_flixel_util_FlxVector FlxVector_obj::_pool;

::flixel::util::FlxVector FlxVector_obj::_vector1;

::flixel::util::FlxVector FlxVector_obj::_vector2;

::flixel::util::FlxVector FlxVector_obj::_vector3;

::flixel::util::FlxVector FlxVector_obj::get( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.util.FlxVector","get",0xf9e157c3,"flixel.util.FlxVector.get","flixel/util/FlxVector.hx",25,0xa3e1b4e3)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(26)
		::flixel::util::FlxVector vector = hx::TCast< ::flixel::util::FlxVector >::cast(::flixel::util::FlxVector_obj::_pool->get()->set(X,Y));		HX_STACK_VAR(vector,"vector");
		HX_STACK_LINE(27)
		vector->_inPool = false;
		HX_STACK_LINE(28)
		return vector;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxVector_obj,get,return )


FlxVector_obj::FlxVector_obj()
{
}

Dynamic FlxVector_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return get_dx(); }
		if (HX_FIELD_EQ(inName,"dy") ) { return get_dy(); }
		if (HX_FIELD_EQ(inName,"rx") ) { return get_rx(); }
		if (HX_FIELD_EQ(inName,"ry") ) { return get_ry(); }
		if (HX_FIELD_EQ(inName,"lx") ) { return get_lx(); }
		if (HX_FIELD_EQ(inName,"ly") ) { return get_ly(); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return get_dyn(); }
		if (HX_FIELD_EQ(inName,"put") ) { return put_dyn(); }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"zero") ) { return zero_dyn(); }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"dist") ) { return dist_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { return _pool; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"ratio") ) { return ratio_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return get_length(); }
		if (HX_FIELD_EQ(inName,"addNew") ) { return addNew_dyn(); }
		if (HX_FIELD_EQ(inName,"isZero") ) { return isZero_dyn(); }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		if (HX_FIELD_EQ(inName,"bounce") ) { return bounce_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dx") ) { return get_dx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_dy") ) { return get_dy_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rx") ) { return get_rx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ry") ) { return get_ry_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lx") ) { return get_lx_dyn(); }
		if (HX_FIELD_EQ(inName,"get_ly") ) { return get_ly_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"degrees") ) { return get_degrees(); }
		if (HX_FIELD_EQ(inName,"radians") ) { return get_radians(); }
		if (HX_FIELD_EQ(inName,"isValid") ) { return isValid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vector1") ) { return _vector1; }
		if (HX_FIELD_EQ(inName,"_vector2") ) { return _vector2; }
		if (HX_FIELD_EQ(inName,"_vector3") ) { return _vector3; }
		if (HX_FIELD_EQ(inName,"scaleNew") ) { return scaleNew_dyn(); }
		if (HX_FIELD_EQ(inName,"truncate") ) { return truncate_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"negateNew") ) { return negateNew_dyn(); }
		if (HX_FIELD_EQ(inName,"projectTo") ) { return projectTo_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"isParallel") ) { return isParallel_dyn(); }
		if (HX_FIELD_EQ(inName,"leftNormal") ) { return leftNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		if (HX_FIELD_EQ(inName,"set_length") ) { return set_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"subtractNew") ) { return subtractNew_dyn(); }
		if (HX_FIELD_EQ(inName,"rightNormal") ) { return rightNormal_dyn(); }
		if (HX_FIELD_EQ(inName,"perpProduct") ) { return perpProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"distSquared") ) { return distSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"get_degrees") ) { return get_degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"set_degrees") ) { return set_degrees_dyn(); }
		if (HX_FIELD_EQ(inName,"get_radians") ) { return get_radians_dyn(); }
		if (HX_FIELD_EQ(inName,"set_radians") ) { return set_radians_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isNormalized") ) { return isNormalized_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return get_lengthSquared(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { return rotateWithTrig_dyn(); }
		if (HX_FIELD_EQ(inName,"radiansBetween") ) { return radiansBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"degreesBetween") ) { return degreesBetween_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isPerpendicular") ) { return isPerpendicular_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByRadians") ) { return rotateByRadians_dyn(); }
		if (HX_FIELD_EQ(inName,"rotateByDegrees") ) { return rotateByDegrees_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findIntersection") ) { return findIntersection_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"crossProductLength") ) { return crossProductLength_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceWithFriction") ) { return bounceWithFriction_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"projectToNormalized") ) { return projectToNormalized_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"dotProdWithNormalizing") ) { return dotProdWithNormalizing_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"findIntersectionInBounds") ) { return findIntersectionInBounds_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxVector_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=inValue.Cast< ::flixel::util::FlxPool_flixel_util_FlxVector >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return set_length(inValue); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"degrees") ) { return set_degrees(inValue); }
		if (HX_FIELD_EQ(inName,"radians") ) { return set_radians(inValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_vector1") ) { _vector1=inValue.Cast< ::flixel::util::FlxVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vector2") ) { _vector2=inValue.Cast< ::flixel::util::FlxVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vector3") ) { _vector3=inValue.Cast< ::flixel::util::FlxVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxVector_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dx"));
	outFields->push(HX_CSTRING("dy"));
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthSquared"));
	outFields->push(HX_CSTRING("degrees"));
	outFields->push(HX_CSTRING("radians"));
	outFields->push(HX_CSTRING("rx"));
	outFields->push(HX_CSTRING("ry"));
	outFields->push(HX_CSTRING("lx"));
	outFields->push(HX_CSTRING("ly"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("EPSILON"),
	HX_CSTRING("EPSILON_SQUARED"),
	HX_CSTRING("_pool"),
	HX_CSTRING("_vector1"),
	HX_CSTRING("_vector2"),
	HX_CSTRING("_vector3"),
	HX_CSTRING("get"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("put"),
	HX_CSTRING("set"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleNew"),
	HX_CSTRING("addNew"),
	HX_CSTRING("subtractNew"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("dotProdWithNormalizing"),
	HX_CSTRING("isPerpendicular"),
	HX_CSTRING("crossProductLength"),
	HX_CSTRING("isParallel"),
	HX_CSTRING("isZero"),
	HX_CSTRING("zero"),
	HX_CSTRING("normalize"),
	HX_CSTRING("isNormalized"),
	HX_CSTRING("equals"),
	HX_CSTRING("rotateByRadians"),
	HX_CSTRING("rotateByDegrees"),
	HX_CSTRING("rotateWithTrig"),
	HX_CSTRING("rightNormal"),
	HX_CSTRING("leftNormal"),
	HX_CSTRING("negate"),
	HX_CSTRING("negateNew"),
	HX_CSTRING("projectTo"),
	HX_CSTRING("projectToNormalized"),
	HX_CSTRING("perpProduct"),
	HX_CSTRING("ratio"),
	HX_CSTRING("findIntersection"),
	HX_CSTRING("findIntersectionInBounds"),
	HX_CSTRING("truncate"),
	HX_CSTRING("radiansBetween"),
	HX_CSTRING("degreesBetween"),
	HX_CSTRING("sign"),
	HX_CSTRING("dist"),
	HX_CSTRING("distSquared"),
	HX_CSTRING("bounce"),
	HX_CSTRING("bounceWithFriction"),
	HX_CSTRING("isValid"),
	HX_CSTRING("clone"),
	HX_CSTRING("get_dx"),
	HX_CSTRING("get_dy"),
	HX_CSTRING("get_length"),
	HX_CSTRING("set_length"),
	HX_CSTRING("get_lengthSquared"),
	HX_CSTRING("get_degrees"),
	HX_CSTRING("set_degrees"),
	HX_CSTRING("get_radians"),
	HX_CSTRING("set_radians"),
	HX_CSTRING("get_rx"),
	HX_CSTRING("get_ry"),
	HX_CSTRING("get_lx"),
	HX_CSTRING("get_ly"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxVector_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxVector_obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(FlxVector_obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_pool,"_pool");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector1,"_vector1");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector2,"_vector2");
	HX_MARK_MEMBER_NAME(FlxVector_obj::_vector3,"_vector3");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxVector_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::EPSILON_SQUARED,"EPSILON_SQUARED");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_pool,"_pool");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector1,"_vector1");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector2,"_vector2");
	HX_VISIT_MEMBER_NAME(FlxVector_obj::_vector3,"_vector3");
};

#endif

Class FlxVector_obj::__mClass;

void FlxVector_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxVector"), hx::TCanCast< FlxVector_obj> ,sStaticFields,sMemberFields,
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

void FlxVector_obj::__boot()
{
	EPSILON= 0.0000001;
	EPSILON_SQUARED= 9.99999999999999841e-15;
	_pool= ::flixel::util::FlxPool_flixel_util_FlxVector_obj::__new(hx::ClassOf< ::flixel::util::FlxVector >());
	_vector1= ::flixel::util::FlxVector_obj::__new(null(),null());
	_vector2= ::flixel::util::FlxVector_obj::__new(null(),null());
	_vector3= ::flixel::util::FlxVector_obj::__new(null(),null());
}

} // end namespace flixel
} // end namespace util
