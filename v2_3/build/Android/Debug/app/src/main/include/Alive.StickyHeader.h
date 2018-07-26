// This file was generated based on 'C:/Users/Chetanya Gupta/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/Docs/StickyHeader.ux.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.StackPanel.h>
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
namespace g{namespace Alive{struct StickyHeader;}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class StickyHeader :44
// {
::g::Fuse::Controls::Panel_type* StickyHeader_typeof();
void StickyHeader__ctor_8_fn(StickyHeader* __this, ::g::Fuse::Visual* Header1);
void StickyHeader__InitializeUX_fn(StickyHeader* __this);
void StickyHeader__New5_fn(::g::Fuse::Visual* Header1, StickyHeader** __retval);

struct StickyHeader : ::g::Fuse::Controls::StackPanel
{
    uStrong< ::g::Fuse::Visual*> Header;
    uStrong< ::g::Fuse::Controls::Panel*> header;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StickyHeader_typeof()->Init(), __selector0_; }

    void ctor_8(::g::Fuse::Visual* Header1);
    void InitializeUX();
    static StickyHeader* New5(::g::Fuse::Visual* Header1);
};
// }

}} // ::g::Alive
