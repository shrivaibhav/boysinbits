// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct RangeControl;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_FuseControlsRangeControl_Value_Property;}

namespace g{

// internal sealed class v2_FuseControlsRangeControl_Value_Property :252
// {
::g::Uno::UX::Property1_type* v2_FuseControlsRangeControl_Value_Property_typeof();
void v2_FuseControlsRangeControl_Value_Property__ctor_3_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector* name);
void v2_FuseControlsRangeControl_Value_Property__Get1_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void v2_FuseControlsRangeControl_Value_Property__New1_fn(::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsRangeControl_Value_Property** __retval);
void v2_FuseControlsRangeControl_Value_Property__get_Object_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void v2_FuseControlsRangeControl_Value_Property__Set1_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);
void v2_FuseControlsRangeControl_Value_Property__get_SupportsOriginSetter_fn(v2_FuseControlsRangeControl_Value_Property* __this, bool* __retval);

struct v2_FuseControlsRangeControl_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::RangeControl*> _obj;

    void ctor_3(::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector name);
    static v2_FuseControlsRangeControl_Value_Property* New1(::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
