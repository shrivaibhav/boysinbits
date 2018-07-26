// This file was generated based on build/Android/Preview/cache/ux15/Eliot.GridElement.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
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
namespace g{namespace Eliot{struct GridElement;}}

namespace g{
namespace Eliot{

// public partial sealed class GridElement :4
// {
::g::Fuse::Controls::Shape_type* GridElement_typeof();
void GridElement__ctor_8_fn(GridElement* __this);
void GridElement__InitializeUX_fn(GridElement* __this);
void GridElement__New4_fn(GridElement** __retval);

struct GridElement : ::g::Fuse::Controls::Rectangle
{
    void ctor_8();
    void InitializeUX();
    static GridElement* New4();
};
// }

}} // ::g::Eliot
