// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Alive.ListView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Alive{struct ListView;}}
namespace g{namespace Alive{struct ListView__Template;}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class ListView.Template :37
// {
::g::Uno::UX::Template_type* ListView__Template_typeof();
void ListView__Template__New1_fn(ListView__Template* __this, uObject** __retval);

struct ListView__Template : ::g::Uno::UX::Template
{
    uWeak< ::g::Alive::ListView*> __parent1;
    uStrong< ::g::Uno::UX::Property1*> temp_Data_inst;
    uStrong< ::g::Uno::UX::Property1*> bg_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> __self_Opacity_inst1;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> bg;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ListView__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ListView__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ListView__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ListView__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ListView__Template_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ListView__Template_typeof()->Init(), __selector5_; }
};
// }

}} // ::g::Alive
