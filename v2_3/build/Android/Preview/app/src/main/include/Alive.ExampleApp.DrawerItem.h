// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.DrawerItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
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
namespace g{namespace Alive{namespace ExampleApp{struct DrawerItem;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class DrawerItem :4
// {
::g::Fuse::Controls::Panel_type* DrawerItem_typeof();
void DrawerItem__ctor_7_fn(DrawerItem* __this);
void DrawerItem__InitializeUX_fn(DrawerItem* __this);
void DrawerItem__New4_fn(DrawerItem** __retval);
void DrawerItem__SetText_fn(DrawerItem* __this, uString* value, uObject* origin);
void DrawerItem__get_Text_fn(DrawerItem* __this, uString** __retval);
void DrawerItem__set_Text_fn(DrawerItem* __this, uString* value);

struct DrawerItem : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DrawerItem_typeof()->Init(), __selector0_; }

    void ctor_7();
    void InitializeUX();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static DrawerItem* New4();
};
// }

}}} // ::g::Alive::ExampleApp
