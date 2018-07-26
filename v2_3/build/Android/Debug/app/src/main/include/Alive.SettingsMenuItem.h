// This file was generated based on '.uno/ux15/Alive.SettingsMenuItem.g.uno'.
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
namespace g{namespace Alive{struct SettingsMenuItem;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class SettingsMenuItem :4
// {
::g::Fuse::Controls::Shape_type* SettingsMenuItem_typeof();
void SettingsMenuItem__ctor_10_fn(SettingsMenuItem* __this);
void SettingsMenuItem__InitializeUX2_fn(SettingsMenuItem* __this);
void SettingsMenuItem__get_Label_fn(SettingsMenuItem* __this, uString** __retval);
void SettingsMenuItem__set_Label_fn(SettingsMenuItem* __this, uString* value);
void SettingsMenuItem__New6_fn(SettingsMenuItem** __retval);
void SettingsMenuItem__SetLabel_fn(SettingsMenuItem* __this, uString* value, uObject* origin);

struct SettingsMenuItem : ::g::Alive::Card
{
    uStrong<uString*> _field_Label;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector01_;
    static ::g::Uno::UX::Selector& __selector01() { return SettingsMenuItem_typeof()->Init(), __selector01_; }

    void ctor_10();
    void InitializeUX2();
    uString* Label();
    void Label(uString* value);
    void SetLabel(uString* value, uObject* origin);
    static SettingsMenuItem* New6();
};
// }

}} // ::g::Alive
