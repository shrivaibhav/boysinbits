// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/Docs/CardBody.ux.uno'.
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
namespace g{namespace Alive{struct CardBody;}}

namespace g{
namespace Alive{

// public partial sealed class CardBody :13
// {
::g::Fuse::Controls::Panel_type* CardBody_typeof();
void CardBody__ctor_8_fn(CardBody* __this);
void CardBody__InitializeUX_fn(CardBody* __this);
void CardBody__New5_fn(CardBody** __retval);

struct CardBody : ::g::Fuse::Controls::StackPanel
{
    void ctor_8();
    void InitializeUX();
    static CardBody* New5();
};
// }

}} // ::g::Alive
