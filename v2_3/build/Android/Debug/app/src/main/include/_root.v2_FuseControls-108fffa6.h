// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_FuseControlsImage_Url_Property;}

namespace g{

// internal sealed class v2_FuseControlsImage_Url_Property :235
// {
::g::Uno::UX::Property1_type* v2_FuseControlsImage_Url_Property_typeof();
void v2_FuseControlsImage_Url_Property__ctor_3_fn(v2_FuseControlsImage_Url_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name);
void v2_FuseControlsImage_Url_Property__Get1_fn(v2_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void v2_FuseControlsImage_Url_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsImage_Url_Property** __retval);
void v2_FuseControlsImage_Url_Property__get_Object_fn(v2_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void v2_FuseControlsImage_Url_Property__Set1_fn(v2_FuseControlsImage_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);

struct v2_FuseControlsImage_Url_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Image*> _obj;

    void ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
    static v2_FuseControlsImage_Url_Property* New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
