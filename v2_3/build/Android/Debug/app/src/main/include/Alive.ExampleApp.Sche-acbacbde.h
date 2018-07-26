// This file was generated based on '.uno/ux15/Alive.ExampleApp.SchedulePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Alive{namespace ExampleApp{struct SchedulePage;}}}
namespace g{namespace Alive{namespace ExampleApp{struct SchedulePage__Template;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage.Template :8
// {
::g::Uno::UX::Template_type* SchedulePage__Template_typeof();
void SchedulePage__Template__ctor_1_fn(SchedulePage__Template* __this, ::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance);
void SchedulePage__Template__New1_fn(SchedulePage__Template* __this, uObject** __retval);
void SchedulePage__Template__New2_fn(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance, SchedulePage__Template** __retval);

struct SchedulePage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ExampleApp::SchedulePage*> __parent1;
    uWeak< ::g::Alive::ExampleApp::SchedulePage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SchedulePage__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance);
    static SchedulePage__Template* New2(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance);
};
// }

}}} // ::g::Alive::ExampleApp
