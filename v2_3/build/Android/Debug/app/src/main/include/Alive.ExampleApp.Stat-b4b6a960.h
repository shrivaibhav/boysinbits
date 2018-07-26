// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.StatsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Alive{namespace ExampleApp{struct StatsPage;}}}
namespace g{namespace Alive{namespace ExampleApp{struct StatsPage__Template;}}}
namespace g{namespace Alive{struct ButtonText;}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class StatsPage.Template :7
// {
::g::Uno::UX::Template_type* StatsPage__Template_typeof();
void StatsPage__Template__ctor_1_fn(StatsPage__Template* __this, ::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance);
void StatsPage__Template__New1_fn(StatsPage__Template* __this, uObject** __retval);
void StatsPage__Template__New2_fn(::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance, StatsPage__Template** __retval);

struct StatsPage__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ExampleApp::StatsPage*> __parent1;
    uWeak< ::g::Alive::ExampleApp::StatsPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> monthLabel_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> monthLabel_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Scale_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Scale_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb9;
    uStrong< ::g::Alive::ButtonText*> monthLabel;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StatsPage__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return StatsPage__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return StatsPage__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return StatsPage__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return StatsPage__Template_typeof()->Init(), __selector4_; }

    void ctor_1(::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance);
    static StatsPage__Template* New2(::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance);
};
// }

}}} // ::g::Alive::ExampleApp
