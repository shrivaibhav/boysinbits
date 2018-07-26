// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.ProgramPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Alive{namespace ExampleApp{struct ProgramPage;}}}
namespace g{namespace Alive{namespace ExampleApp{struct ProgramPage__Template;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ProgramPage.Template :8
// {
::g::Uno::UX::Template_type* ProgramPage__Template_typeof();
void ProgramPage__Template__ctor_1_fn(ProgramPage__Template* __this, ::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance);
void ProgramPage__Template__New1_fn(ProgramPage__Template* __this, uObject** __retval);
void ProgramPage__Template__New2_fn(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance, ProgramPage__Template** __retval);

struct ProgramPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ExampleApp::ProgramPage*> __parent1;
    uWeak< ::g::Alive::ExampleApp::ProgramPage*> __parentInstance1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ProgramPage__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance);
    static ProgramPage__Template* New2(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance);
};
// }

}}} // ::g::Alive::ExampleApp
