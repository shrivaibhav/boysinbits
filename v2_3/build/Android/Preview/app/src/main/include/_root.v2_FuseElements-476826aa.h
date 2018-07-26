// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class v2_FuseElementsElement_Opacity_Property :205
// {
::g::Uno::UX::Property1_type* v2_FuseElementsElement_Opacity_Property_typeof();
void v2_FuseElementsElement_Opacity_Property__ctor_3_fn(v2_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void v2_FuseElementsElement_Opacity_Property__Get1_fn(v2_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void v2_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, v2_FuseElementsElement_Opacity_Property** __retval);
void v2_FuseElementsElement_Opacity_Property__get_Object_fn(v2_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void v2_FuseElementsElement_Opacity_Property__Set1_fn(v2_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void v2_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(v2_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct v2_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static v2_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
