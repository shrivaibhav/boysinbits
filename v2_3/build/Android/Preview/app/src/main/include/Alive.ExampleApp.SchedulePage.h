// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.SchedulePage.g.uno.
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
namespace g{namespace Alive{namespace ExampleApp{struct SchedulePage;}}}
namespace g{namespace Alive{struct Drawer;}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage :4
// {
::g::Fuse::Controls::Panel_type* SchedulePage_typeof();
void SchedulePage__ctor_9_fn(SchedulePage* __this, ::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1);
void SchedulePage__InitializeUX1_fn(SchedulePage* __this);
void SchedulePage__New6_fn(::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1, SchedulePage** __retval);

struct SchedulePage : ::g::Alive::Page
{
    uStrong< ::g::Alive::Drawer*> drawer;
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return SchedulePage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return SchedulePage_typeof()->Init(), __selector01_; }

    void ctor_9(::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1);
    void InitializeUX1();
    static SchedulePage* New6(::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1);
};
// }

}}} // ::g::Alive::ExampleApp