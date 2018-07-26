// This file was generated based on 'C:/Users/Chetanya Gupta/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Alive.SwipeActionConfirmed.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Alive{struct SwipeActionConfirmed;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class SwipeActionConfirmed :4
// {
::g::Fuse::Triggers::Trigger_type* SwipeActionConfirmed_typeof();
void SwipeActionConfirmed__ctor_6_fn(SwipeActionConfirmed* __this);
void SwipeActionConfirmed__InitializeUX_fn(SwipeActionConfirmed* __this);
void SwipeActionConfirmed__New3_fn(SwipeActionConfirmed** __retval);

struct SwipeActionConfirmed : ::g::Fuse::Triggers::OnUserEvent
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return SwipeActionConfirmed_typeof()->Init(), __selector0_; }

    void ctor_6();
    void InitializeUX();
    static SwipeActionConfirmed* New3();
};
// }

}} // ::g::Alive
