// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_accessor_vaibhav_myDrawer_HideButton;}

namespace g{

// internal sealed class v2_accessor_vaibhav_myDrawer_HideButton :161
// {
::g::Uno::UX::PropertyAccessor_type* v2_accessor_vaibhav_myDrawer_HideButton_typeof();
void v2_accessor_vaibhav_myDrawer_HideButton__ctor_1_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this);
void v2_accessor_vaibhav_myDrawer_HideButton__GetAsObject_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void v2_accessor_vaibhav_myDrawer_HideButton__get_Name_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, ::g::Uno::UX::Selector* __retval);
void v2_accessor_vaibhav_myDrawer_HideButton__New1_fn(v2_accessor_vaibhav_myDrawer_HideButton** __retval);
void v2_accessor_vaibhav_myDrawer_HideButton__get_PropertyType_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, uType** __retval);
void v2_accessor_vaibhav_myDrawer_HideButton__SetAsObject_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void v2_accessor_vaibhav_myDrawer_HideButton__get_SupportsOriginSetter_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, bool* __retval);

struct v2_accessor_vaibhav_myDrawer_HideButton : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return v2_accessor_vaibhav_myDrawer_HideButton_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return v2_accessor_vaibhav_myDrawer_HideButton_typeof()->Init(), _name_; }

    void ctor_1();
    static v2_accessor_vaibhav_myDrawer_HideButton* New1();
};
// }

} // ::g
