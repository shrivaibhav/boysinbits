// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_FuseNavigationNavigationAnimation_Scale_Property;}

namespace g{

// internal sealed class v2_FuseNavigationNavigationAnimation_Scale_Property :362
// {
::g::Uno::UX::Property1_type* v2_FuseNavigationNavigationAnimation_Scale_Property_typeof();
void v2_FuseNavigationNavigationAnimation_Scale_Property__ctor_3_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector* name);
void v2_FuseNavigationNavigationAnimation_Scale_Property__Get1_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void v2_FuseNavigationNavigationAnimation_Scale_Property__New1_fn(::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector* name, v2_FuseNavigationNavigationAnimation_Scale_Property** __retval);
void v2_FuseNavigationNavigationAnimation_Scale_Property__get_Object_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void v2_FuseNavigationNavigationAnimation_Scale_Property__Set1_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct v2_FuseNavigationNavigationAnimation_Scale_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Navigation::NavigationAnimation*> _obj;

    void ctor_3(::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector name);
    static v2_FuseNavigationNavigationAnimation_Scale_Property* New1(::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
