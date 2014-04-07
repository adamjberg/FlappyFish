#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_flixel_system_debug__VCR_GraphicRecordOff
#include <flixel/system/debug/_VCR/GraphicRecordOff.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace system{
namespace debug{
namespace _VCR{

Void GraphicRecordOff_obj::__construct(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{
HX_STACK_FRAME("flixel.system.debug._VCR.GraphicRecordOff","new",0xb4303408,"flixel.system.debug._VCR.GraphicRecordOff.new","openfl/Assets.hx",1391,0x989d477c)

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(__o_transparent,"transparent")

HX_STACK_ARG(__o_fillRGBA,"fillRGBA")
Dynamic transparent = __o_transparent.Default(true);
Dynamic fillRGBA = __o_fillRGBA.Default(-1);
{
	HX_STACK_LINE(1457)
	super::__construct(width,height,transparent,fillRGBA,null());
	HX_STACK_LINE(1459)
	::flash::utils::ByteArray byteArray = ::flash::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::system::debug::_VCR::GraphicRecordOff_obj::resourceName));		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(1460)
	this->__handle = ::flash::display::BitmapData_obj::lime_bitmap_data_from_bytes(byteArray,null());
}
;
	return null();
}

//GraphicRecordOff_obj::~GraphicRecordOff_obj() { }

Dynamic GraphicRecordOff_obj::__CreateEmpty() { return  new GraphicRecordOff_obj; }
hx::ObjectPtr< GraphicRecordOff_obj > GraphicRecordOff_obj::__new(int width,int height,Dynamic __o_transparent,Dynamic __o_fillRGBA)
{  hx::ObjectPtr< GraphicRecordOff_obj > result = new GraphicRecordOff_obj();
	result->__construct(width,height,__o_transparent,__o_fillRGBA);
	return result;}

Dynamic GraphicRecordOff_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicRecordOff_obj > result = new GraphicRecordOff_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String GraphicRecordOff_obj::resourceName;


GraphicRecordOff_obj::GraphicRecordOff_obj()
{
}

Dynamic GraphicRecordOff_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GraphicRecordOff_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicRecordOff_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicRecordOff_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicRecordOff_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicRecordOff_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicRecordOff_obj::resourceName,"resourceName");
};

#endif

Class GraphicRecordOff_obj::__mClass;

void GraphicRecordOff_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug._VCR.GraphicRecordOff"), hx::TCanCast< GraphicRecordOff_obj> ,sStaticFields,sMemberFields,
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

void GraphicRecordOff_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:bitmap_flixel_system_debug__VCR_GraphicRecordOff");
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace _VCR