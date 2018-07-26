// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource;}

namespace g{

// internal sealed class v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource :21
// {
::g::Uno::UX::PropertyAccessor_type* v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_typeof();
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__ctor_1_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this);
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__GetAsObject_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_Name_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, ::g::Uno::UX::Selector* __retval);
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__New1_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource** __retval);
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_PropertyType_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, uType** __retval);
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__SetAsObject_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_SupportsOriginSetter_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, bool* __retval);

struct v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_typeof()->Init(), _name_; }

    void ctor_1();
    static v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* New1();
};
// }

} // ::g
