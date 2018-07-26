// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.DetailsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Alive{namespace ExampleApp{struct DetailsPage;}}}
namespace g{namespace Alive{namespace ExampleApp{struct DetailsPage__Template1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class DetailsPage.Template1 :59
// {
::g::Uno::UX::Template_type* DetailsPage__Template1_typeof();
void DetailsPage__Template1__ctor_1_fn(DetailsPage__Template1* __this, ::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance);
void DetailsPage__Template1__New1_fn(DetailsPage__Template1* __this, uObject** __retval);
void DetailsPage__Template1__New2_fn(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance, DetailsPage__Template1** __retval);

struct DetailsPage__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ExampleApp::DetailsPage*> __parent1;
    uWeak< ::g::Alive::ExampleApp::DetailsPage*> __parentInstance1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DetailsPage__Template1_typeof()->Init(), __selector0_; }

    void ctor_1(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance);
    static DetailsPage__Template1* New2(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance);
};
// }

}}} // ::g::Alive::ExampleApp
