// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Alive.StickingAnimation.g.uno.
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
namespace g{namespace Alive{struct StickingAnimation;}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class StickingAnimation :4
// {
::g::Fuse::Triggers::ScrollingAnimation_type* StickingAnimation_typeof();
void StickingAnimation__get_Distance_fn(StickingAnimation* __this, float* __retval);
void StickingAnimation__set_Distance_fn(StickingAnimation* __this, float* value);
void StickingAnimation__SetDistance_fn(StickingAnimation* __this, float* value, uObject* origin);

struct StickingAnimation : ::g::Fuse::Triggers::ScrollingAnimation
{
    float _field_Distance;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return StickingAnimation_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return StickingAnimation_typeof()->Init(), __selector1_; }

    float Distance();
    void Distance(float value);
    void SetDistance(float value, uObject* origin);
};
// }

}} // ::g::Alive
