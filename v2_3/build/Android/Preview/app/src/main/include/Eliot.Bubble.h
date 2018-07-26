// This file was generated based on build/Android/Preview/cache/ux15/Eliot.Bubble.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Drawing.IDrawObj-d34d045e.h>
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
namespace g{namespace Eliot{struct Bubble;}}

namespace g{
namespace Eliot{

// public partial sealed class Bubble :4
// {
::g::Fuse::Controls::Shape_type* Bubble_typeof();
void Bubble__ctor_9_fn(Bubble* __this);
void Bubble__InitializeUX_fn(Bubble* __this);
void Bubble__New4_fn(Bubble** __retval);

struct Bubble : ::g::Fuse::Controls::Circle
{
    void ctor_9();
    void InitializeUX();
    static Bubble* New4();
};
// }

}} // ::g::Eliot
