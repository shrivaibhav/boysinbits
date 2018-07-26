// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/Docs/StickingAnimation.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Scrolli-20ed4bc5.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{struct StickyHeaderAnimation;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class StickyHeaderAnimation :25
// {
::g::Fuse::Triggers::ScrollingAnimation_type* StickyHeaderAnimation_typeof();
void StickyHeaderAnimation__ctor_6_fn(StickyHeaderAnimation* __this, ::g::Fuse::Visual* Header1);
void StickyHeaderAnimation__InitializeUX_fn(StickyHeaderAnimation* __this);
void StickyHeaderAnimation__New3_fn(::g::Fuse::Visual* Header1, StickyHeaderAnimation** __retval);

struct StickyHeaderAnimation : ::g::Fuse::Triggers::ScrollingAnimation
{
    uStrong< ::g::Fuse::Visual*> Header;
    uStrong< ::g::Uno::UX::Property1*> this_From_inst;
    uStrong< ::g::Uno::UX::Property1*> this_To_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Y_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StickyHeaderAnimation_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return StickyHeaderAnimation_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return StickyHeaderAnimation_typeof()->Init(), __selector2_; }

    void ctor_6(::g::Fuse::Visual* Header1);
    void InitializeUX();
    static StickyHeaderAnimation* New3(::g::Fuse::Visual* Header1);
};
// }

}} // ::g::Alive
