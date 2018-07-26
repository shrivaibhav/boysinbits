// This file was generated based on '.uno/ux15/Alive.ExampleApp.ScheduleDetails.g.uno'.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Alive{namespace ExampleApp{struct ScheduleDetails;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ScheduleDetails :4
// {
::g::Fuse::Controls::Panel_type* ScheduleDetails_typeof();
void ScheduleDetails__get_Category_fn(ScheduleDetails* __this, uString** __retval);
void ScheduleDetails__set_Category_fn(ScheduleDetails* __this, uString* value);
void ScheduleDetails__get_CategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* __retval);
void ScheduleDetails__set_CategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* value);
void ScheduleDetails__SetCategory_fn(ScheduleDetails* __this, uString* value, uObject* origin);
void ScheduleDetails__SetCategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* value, uObject* origin);
void ScheduleDetails__SetTime_fn(ScheduleDetails* __this, uString* value, uObject* origin);
void ScheduleDetails__SetTitle_fn(ScheduleDetails* __this, uString* value, uObject* origin);
void ScheduleDetails__get_Time_fn(ScheduleDetails* __this, uString** __retval);
void ScheduleDetails__set_Time_fn(ScheduleDetails* __this, uString* value);
void ScheduleDetails__get_Title_fn(ScheduleDetails* __this, uString** __retval);
void ScheduleDetails__set_Title_fn(ScheduleDetails* __this, uString* value);

struct ScheduleDetails : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Time;
    uStrong<uString*> _field_Category;
    uStrong<uString*> _field_Title;
    ::g::Uno::Float4 _field_CategoryColor;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ScheduleDetails_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ScheduleDetails_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ScheduleDetails_typeof()->Init(), __selector2_; }

    uString* Category();
    void Category(uString* value);
    ::g::Uno::Float4 CategoryColor();
    void CategoryColor(::g::Uno::Float4 value);
    void SetCategory(uString* value, uObject* origin);
    void SetCategoryColor(::g::Uno::Float4 value, uObject* origin);
    void SetTime(uString* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Time();
    void Time(uString* value);
    uString* Title();
    void Title(uString* value);
};
// }

}}} // ::g::Alive::ExampleApp
