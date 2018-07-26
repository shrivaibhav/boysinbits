// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ScheduleDetails.g.uno.
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
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ScheduleDetails :4
// {
::g::Fuse::Controls::Panel_type* ScheduleDetails_typeof();
void ScheduleDetails__ctor_7_fn(ScheduleDetails* __this);
void ScheduleDetails__get_Category_fn(ScheduleDetails* __this, uString** __retval);
void ScheduleDetails__set_Category_fn(ScheduleDetails* __this, uString* value);
void ScheduleDetails__get_CategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* __retval);
void ScheduleDetails__set_CategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* value);
void ScheduleDetails__InitializeUX_fn(ScheduleDetails* __this);
void ScheduleDetails__get_Location_fn(ScheduleDetails* __this, uString** __retval);
void ScheduleDetails__set_Location_fn(ScheduleDetails* __this, uString* value);
void ScheduleDetails__New4_fn(ScheduleDetails** __retval);
void ScheduleDetails__SetCategory_fn(ScheduleDetails* __this, uString* value, uObject* origin);
void ScheduleDetails__SetCategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* value, uObject* origin);
void ScheduleDetails__SetLocation_fn(ScheduleDetails* __this, uString* value, uObject* origin);
void ScheduleDetails__SetTime_fn(ScheduleDetails* __this, uString* value, uObject* origin);
void ScheduleDetails__SetTitle_fn(ScheduleDetails* __this, uString* value, uObject* origin);
void ScheduleDetails__get_Time_fn(ScheduleDetails* __this, uString** __retval);
void ScheduleDetails__set_Time_fn(ScheduleDetails* __this, uString* value);
void ScheduleDetails__get_Title_fn(ScheduleDetails* __this, uString** __retval);
void ScheduleDetails__set_Title_fn(ScheduleDetails* __this, uString* value);

struct ScheduleDetails : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Time;
    uStrong<uString*> _field_Location;
    uStrong<uString*> _field_Category;
    uStrong<uString*> _field_Title;
    ::g::Uno::Float4 _field_CategoryColor;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Text_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ScheduleDetails_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ScheduleDetails_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ScheduleDetails_typeof()->Init(), __selector2_; }

    void ctor_7();
    uString* Category();
    void Category(uString* value);
    ::g::Uno::Float4 CategoryColor();
    void CategoryColor(::g::Uno::Float4 value);
    void InitializeUX();
    uString* Location();
    void Location(uString* value);
    void SetCategory(uString* value, uObject* origin);
    void SetCategoryColor(::g::Uno::Float4 value, uObject* origin);
    void SetLocation(uString* value, uObject* origin);
    void SetTime(uString* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Time();
    void Time(uString* value);
    uString* Title();
    void Title(uString* value);
    static ScheduleDetails* New4();
};
// }

}}} // ::g::Alive::ExampleApp
