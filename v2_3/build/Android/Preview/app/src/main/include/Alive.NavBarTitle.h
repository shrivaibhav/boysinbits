// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Alive.NavBarTitle.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Text.h>
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
#include <Fuse.Triggers.IValue-1.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct NavBarTitle;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class NavBarTitle :4
// {
::g::Fuse::Controls::TextControl_type* NavBarTitle_typeof();
void NavBarTitle__ctor_8_fn(NavBarTitle* __this);
void NavBarTitle__InitializeUX1_fn(NavBarTitle* __this);
void NavBarTitle__New4_fn(NavBarTitle** __retval);

struct NavBarTitle : ::g::Fuse::Controls::Text
{
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return NavBarTitle_typeof()->Init(), __selector0_; }

    void ctor_8();
    void InitializeUX1();
    static NavBarTitle* New4();
};
// }

}} // ::g::Alive
