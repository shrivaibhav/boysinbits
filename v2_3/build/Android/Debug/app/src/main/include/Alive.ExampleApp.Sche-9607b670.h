// This file was generated based on '.uno/ux15/Alive.ExampleApp.SchedulePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Alive{namespace ExampleApp{struct SchedulePage;}}}
namespace g{namespace Alive{namespace ExampleApp{struct SchedulePage__Template2;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage.Template2 :105
// {
::g::Uno::UX::Template_type* SchedulePage__Template2_typeof();
void SchedulePage__Template2__ctor_1_fn(SchedulePage__Template2* __this, ::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance);
void SchedulePage__Template2__New1_fn(SchedulePage__Template2* __this, uObject** __retval);
void SchedulePage__Template2__New2_fn(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance, SchedulePage__Template2** __retval);

struct SchedulePage__Template2 : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ExampleApp::SchedulePage*> __parent1;
    uWeak< ::g::Alive::ExampleApp::SchedulePage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_Url_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Color_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb10;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SchedulePage__Template2_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return SchedulePage__Template2_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return SchedulePage__Template2_typeof()->Init(), __selector2_; }

    void ctor_1(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance);
    static SchedulePage__Template2* New2(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance);
};
// }

}}} // ::g::Alive::ExampleApp