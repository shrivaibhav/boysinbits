// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_accessor_Alive_ExampleApp_ScheduleDetails_Category;}

namespace g{

// internal sealed class v2_accessor_Alive_ExampleApp_ScheduleDetails_Category :91
// {
::g::Uno::UX::PropertyAccessor_type* v2_accessor_Alive_ExampleApp_ScheduleDetails_Category_typeof();
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Category__ctor_1_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Category* __this);
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Category__GetAsObject_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Category* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Category__get_Name_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Category* __this, ::g::Uno::UX::Selector* __retval);
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Category__New1_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Category** __retval);
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Category__get_PropertyType_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Category* __this, uType** __retval);
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Category__SetAsObject_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Category* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Category__get_SupportsOriginSetter_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Category* __this, bool* __retval);

struct v2_accessor_Alive_ExampleApp_ScheduleDetails_Category : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return v2_accessor_Alive_ExampleApp_ScheduleDetails_Category_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return v2_accessor_Alive_ExampleApp_ScheduleDetails_Category_typeof()->Init(), _name_; }

    void ctor_1();
    static v2_accessor_Alive_ExampleApp_ScheduleDetails_Category* New1();
};
// }

} // ::g
