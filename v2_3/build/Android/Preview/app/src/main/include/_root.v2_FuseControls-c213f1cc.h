// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Shape;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_FuseControlsShape_StrokeColor_Property;}

namespace g{

// internal sealed class v2_FuseControlsShape_StrokeColor_Property :232
// {
::g::Uno::UX::Property1_type* v2_FuseControlsShape_StrokeColor_Property_typeof();
void v2_FuseControlsShape_StrokeColor_Property__ctor_3_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name);
void v2_FuseControlsShape_StrokeColor_Property__Get1_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void v2_FuseControlsShape_StrokeColor_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsShape_StrokeColor_Property** __retval);
void v2_FuseControlsShape_StrokeColor_Property__get_Object_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void v2_FuseControlsShape_StrokeColor_Property__Set1_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);

struct v2_FuseControlsShape_StrokeColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Shape*> _obj;

    void ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
    static v2_FuseControlsShape_StrokeColor_Property* New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
