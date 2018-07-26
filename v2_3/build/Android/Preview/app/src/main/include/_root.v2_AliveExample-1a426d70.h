// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Alive{namespace ExampleApp{struct ProgramItem;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_AliveExampleAppProgramItem_IsAttending_Property;}

namespace g{

// internal sealed class v2_AliveExampleAppProgramItem_IsAttending_Property :284
// {
::g::Uno::UX::Property1_type* v2_AliveExampleAppProgramItem_IsAttending_Property_typeof();
void v2_AliveExampleAppProgramItem_IsAttending_Property__ctor_3_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector* name);
void v2_AliveExampleAppProgramItem_IsAttending_Property__Get1_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void v2_AliveExampleAppProgramItem_IsAttending_Property__New1_fn(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector* name, v2_AliveExampleAppProgramItem_IsAttending_Property** __retval);
void v2_AliveExampleAppProgramItem_IsAttending_Property__get_Object_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void v2_AliveExampleAppProgramItem_IsAttending_Property__Set1_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void v2_AliveExampleAppProgramItem_IsAttending_Property__get_SupportsOriginSetter_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, bool* __retval);

struct v2_AliveExampleAppProgramItem_IsAttending_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Alive::ExampleApp::ProgramItem*> _obj;

    void ctor_3(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector name);
    static v2_AliveExampleAppProgramItem_IsAttending_Property* New1(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
