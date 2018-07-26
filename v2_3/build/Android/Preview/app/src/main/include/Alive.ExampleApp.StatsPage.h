// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.StatsPage.g.uno.
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
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{namespace ExampleApp{struct StatsPage;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class StatsPage :4
// {
::g::Fuse::Controls::Panel_type* StatsPage_typeof();
void StatsPage__ctor_9_fn(StatsPage* __this);
void StatsPage__InitializeUX1_fn(StatsPage* __this);
void StatsPage__New6_fn(StatsPage** __retval);

struct StatsPage : ::g::Alive::Page
{
    uStrong< ::g::Uno::UX::Property1*> temp_Data_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return StatsPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return StatsPage_typeof()->Init(), __selector01_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return StatsPage_typeof()->Init(), __selector1_; }

    void ctor_9();
    void InitializeUX1();
    static StatsPage* New6();
};
// }

}}} // ::g::Alive::ExampleApp
