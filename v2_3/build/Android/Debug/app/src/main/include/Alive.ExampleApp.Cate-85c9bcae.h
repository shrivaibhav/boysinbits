// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.CategoryPreviewCard.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Alive.Card.h>
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
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
namespace g{namespace Alive{namespace ExampleApp{struct CategoryPreviewCard;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class CategoryPreviewCard :4
// {
::g::Fuse::Controls::Shape_type* CategoryPreviewCard_typeof();
void CategoryPreviewCard__ctor_10_fn(CategoryPreviewCard* __this);
void CategoryPreviewCard__InitializeUX2_fn(CategoryPreviewCard* __this);
void CategoryPreviewCard__New6_fn(CategoryPreviewCard** __retval);

struct CategoryPreviewCard : ::g::Alive::Card
{
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;

    void ctor_10();
    void InitializeUX2();
    static CategoryPreviewCard* New6();
};
// }

}}} // ::g::Alive::ExampleApp
