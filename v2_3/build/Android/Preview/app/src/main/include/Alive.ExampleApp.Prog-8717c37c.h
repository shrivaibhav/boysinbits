// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ProgramPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Alive{namespace ExampleApp{struct ProgramPage;}}}
namespace g{namespace Alive{namespace ExampleApp{struct ProgramPage__Template1;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ProgramPage.Template1 :46
// {
::g::Uno::UX::Template_type* ProgramPage__Template1_typeof();
void ProgramPage__Template1__ctor_1_fn(ProgramPage__Template1* __this, ::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance);
void ProgramPage__Template1__New1_fn(ProgramPage__Template1* __this, uObject** __retval);
void ProgramPage__Template1__New2_fn(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance, ProgramPage__Template1** __retval);

struct ProgramPage__Template1 : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ExampleApp::ProgramPage*> __parent1;
    uWeak< ::g::Alive::ExampleApp::ProgramPage*> __parentInstance1;
    uStrong< ::g::Uno::UX::Property1*> temp_CategoryColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_IsAttending_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Time_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Person_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Title_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_File_inst;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ProgramPage__Template1_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ProgramPage__Template1_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ProgramPage__Template1_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ProgramPage__Template1_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ProgramPage__Template1_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ProgramPage__Template1_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return ProgramPage__Template1_typeof()->Init(), __selector6_; }

    void ctor_1(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance);
    static ProgramPage__Template1* New2(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance);
};
// }

}}} // ::g::Alive::ExampleApp
