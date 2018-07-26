// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.DetailsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Alive{namespace ExampleApp{struct DetailsPage;}}}
namespace g{namespace Alive{namespace ExampleApp{struct DetailsPage__Template;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class DetailsPage.Template :8
// {
::g::Uno::UX::Template_type* DetailsPage__Template_typeof();
void DetailsPage__Template__ctor_1_fn(DetailsPage__Template* __this, ::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance);
void DetailsPage__Template__New1_fn(DetailsPage__Template* __this, uObject** __retval);
void DetailsPage__Template__New2_fn(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance, DetailsPage__Template** __retval);

struct DetailsPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ExampleApp::DetailsPage*> __parent1;
    uWeak< ::g::Alive::ExampleApp::DetailsPage*> __parentInstance1;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb2;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DetailsPage__Template_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance);
    static DetailsPage__Template* New2(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance);
};
// }

}}} // ::g::Alive::ExampleApp
