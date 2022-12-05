// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_path_FlxPath
#define INCLUDED_flixel_path_FlxPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxBasePoint)
HX_DECLARE_CLASS2(flixel,path,FlxPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace path{


class HXCPP_CLASS_ATTRIBUTES FlxPath_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxPath_obj OBJ_;
		FlxPath_obj();

	public:
		enum { _hx_ClassId = 0x4d90b1b6 };

		void __construct(::Array< ::Dynamic> nodes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.path.FlxPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.path.FlxPath"); }
		static ::hx::ObjectPtr< FlxPath_obj > __new(::Array< ::Dynamic> nodes);
		static ::hx::ObjectPtr< FlxPath_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> nodes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxPath",17,1f,aa,da); }

		static void __boot();
		static int FORWARD;
		static int BACKWARD;
		static int LOOP_FORWARD;
		static int LOOP_BACKWARD;
		static int YOYO;
		static  ::flixel::math::FlxBasePoint _point;
		::Array< ::Dynamic> _nodes;
		Float speed;
		bool immovable;
		Float angle;
		bool autoCenter;
		bool autoRotate;
		Float angleOffset;
		bool active;
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		int nodeIndex;
		bool finished;
		int axes;
		int _mode;
		int _inc;
		 ::Dynamic _wasObjectImmovable;
		bool _firstUpdate;
		 ::flixel::FlxObject object;
		 ::flixel::path::FlxPath reset();
		::Dynamic reset_dyn();

		 ::flixel::path::FlxPath setProperties(::hx::Null< Float >  speed,::hx::Null< int >  mode,::hx::Null< bool >  autoRotate);
		::Dynamic setProperties_dyn();

		 ::flixel::path::FlxPath start(::Array< ::Dynamic> nodes,::hx::Null< Float >  speed,::hx::Null< int >  mode,::hx::Null< bool >  autoRotate,::hx::Null< bool >  nodesAsReference);
		::Dynamic start_dyn();

		 ::flixel::path::FlxPath restart();
		::Dynamic restart_dyn();

		 ::flixel::path::FlxPath setNode(int nodeIndex);
		::Dynamic setNode_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void calculateVelocity( ::flixel::math::FlxBasePoint node,bool horizontalOnly,bool verticalOnly);
		::Dynamic calculateVelocity_dyn();

		 ::flixel::math::FlxBasePoint advancePath(::hx::Null< bool >  snap);
		::Dynamic advancePath_dyn();

		 ::flixel::path::FlxPath cancel();
		::Dynamic cancel_dyn();

		void onEnd();
		::Dynamic onEnd_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		 ::flixel::path::FlxPath add(Float x,Float y);
		::Dynamic add_dyn();

		 ::flixel::path::FlxPath addAt(Float x,Float y,int index);
		::Dynamic addAt_dyn();

		 ::flixel::path::FlxPath addPoint( ::flixel::math::FlxBasePoint node,::hx::Null< bool >  asReference);
		::Dynamic addPoint_dyn();

		 ::flixel::path::FlxPath addPointAt( ::flixel::math::FlxBasePoint node,int index,::hx::Null< bool >  asReference);
		::Dynamic addPointAt_dyn();

		 ::flixel::math::FlxBasePoint remove( ::flixel::math::FlxBasePoint node);
		::Dynamic remove_dyn();

		 ::flixel::math::FlxBasePoint removeAt(int index);
		::Dynamic removeAt_dyn();

		 ::flixel::math::FlxBasePoint head();
		::Dynamic head_dyn();

		 ::flixel::math::FlxBasePoint tail();
		::Dynamic tail_dyn();

		::Array< ::Dynamic> get_nodes();
		::Dynamic get_nodes_dyn();

		::Array< ::Dynamic> set_nodes(::Array< ::Dynamic> nodes);
		::Dynamic set_nodes_dyn();

		bool set_immovable(bool value);
		::Dynamic set_immovable_dyn();

};

} // end namespace flixel
} // end namespace path

#endif /* INCLUDED_flixel_path_FlxPath */ 