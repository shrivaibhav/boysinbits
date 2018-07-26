// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.DetailsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Alive.Page.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{namespace ExampleApp{struct DetailsPage;}}}
namespace g{namespace Alive{struct StickyHeader;}}
namespace g{namespace Alive{struct TabBar;}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Shadow;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class DetailsPage :4
// {
::g::Fuse::Controls::Panel_type* DetailsPage_typeof();
void DetailsPage__ctor_9_fn(DetailsPage* __this, ::g::Fuse::Navigation::Router* router1);
void DetailsPage__InitializeUX1_fn(DetailsPage* __this);
void DetailsPage__New6_fn(::g::Fuse::Navigation::Router* router1, DetailsPage** __retval);

struct DetailsPage : ::g::Alive::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> tabBarShadow_Size_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_TopBarColor_inst;
    uStrong< ::g::Alive::StickyHeader*> sticky;
    uStrong< ::g::Alive::TabBar*> tabBar;
    uStrong< ::g::Fuse::Controls::Shadow*> tabBarShadow;
    uStrong< ::g::Fuse::Controls::PageControl*> pc;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return DetailsPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return DetailsPage_typeof()->Init(), __selector01_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return DetailsPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return DetailsPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return DetailsPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return DetailsPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return DetailsPage_typeof()->Init(), __selector5_; }

    void ctor_9(::g::Fuse::Navigation::Router* router1);
    void InitializeUX1();
    static DetailsPage* New6(::g::Fuse::Navigation::Router* router1);
};
// }

}}} // ::g::Alive::ExampleApp
