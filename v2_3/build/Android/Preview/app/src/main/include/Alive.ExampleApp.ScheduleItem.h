// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ScheduleItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Grid.h>
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
namespace g{namespace Alive{namespace ExampleApp{struct ScheduleItem;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ScheduleItem :4
// {
::g::Fuse::Controls::Panel_type* ScheduleItem_typeof();
void ScheduleItem__ctor_8_fn(ScheduleItem* __this);
void ScheduleItem__get_Category_fn(ScheduleItem* __this, uString** __retval);
void ScheduleItem__set_Category_fn(ScheduleItem* __this, uString* value);
void ScheduleItem__get_CategoryColor_fn(ScheduleItem* __this, ::g::Uno::Float4* __retval);
void ScheduleItem__set_CategoryColor_fn(ScheduleItem* __this, ::g::Uno::Float4* value);
void ScheduleItem__InitializeUX_fn(ScheduleItem* __this);
void ScheduleItem__New5_fn(ScheduleItem** __retval);
void ScheduleItem__SetCategory_fn(ScheduleItem* __this, uString* value, uObject* origin);
void ScheduleItem__SetCategoryColor_fn(ScheduleItem* __this, ::g::Uno::Float4* value, uObject* origin);
void ScheduleItem__SetTime_fn(ScheduleItem* __this, uString* value, uObject* origin);
void ScheduleItem__SetTitle_fn(ScheduleItem* __this, uString* value, uObject* origin);
void ScheduleItem__get_Time_fn(ScheduleItem* __this, uString** __retval);
void ScheduleItem__set_Time_fn(ScheduleItem* __this, uString* value);
void ScheduleItem__get_Title_fn(ScheduleItem* __this, uString** __retval);
void ScheduleItem__set_Title_fn(ScheduleItem* __this, uString* value);

struct ScheduleItem : ::g::Fuse::Controls::Grid
{
    uStrong<uString*> _field_Time;
    uStrong<uString*> _field_Category;
    uStrong<uString*> _field_Title;
    ::g::Uno::Float4 _field_CategoryColor;
    uStrong< ::g::Uno::UX::Property1*> temp_StrokeColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ScheduleItem_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ScheduleItem_typeof()->Init(), __selector1_; }

    void ctor_8();
    uString* Category();
    void Category(uString* value);
    ::g::Uno::Float4 CategoryColor();
    void CategoryColor(::g::Uno::Float4 value);
    void InitializeUX();
    void SetCategory(uString* value, uObject* origin);
    void SetCategoryColor(::g::Uno::Float4 value, uObject* origin);
    void SetTime(uString* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Time();
    void Time(uString* value);
    uString* Title();
    void Title(uString* value);
    static ScheduleItem* New5();
};
// }

}}} // ::g::Alive::ExampleApp
