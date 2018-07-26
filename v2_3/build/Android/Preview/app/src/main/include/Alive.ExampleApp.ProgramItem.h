// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ProgramItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
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
namespace g{namespace Alive{namespace ExampleApp{struct ProgramItem;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ProgramItem :4
// {
::g::Fuse::Controls::Panel_type* ProgramItem_typeof();
void ProgramItem__ctor_8_fn(ProgramItem* __this);
void ProgramItem__get_CategoryColor_fn(ProgramItem* __this, ::g::Uno::Float4* __retval);
void ProgramItem__set_CategoryColor_fn(ProgramItem* __this, ::g::Uno::Float4* value);
void ProgramItem__get_ImageSource_fn(ProgramItem* __this, ::g::Fuse::Resources::ImageSource** __retval);
void ProgramItem__set_ImageSource_fn(ProgramItem* __this, ::g::Fuse::Resources::ImageSource* value);
void ProgramItem__InitializeUX_fn(ProgramItem* __this);
void ProgramItem__get_IsAttending_fn(ProgramItem* __this, bool* __retval);
void ProgramItem__set_IsAttending_fn(ProgramItem* __this, bool* value);
void ProgramItem__New5_fn(ProgramItem** __retval);
void ProgramItem__get_Person_fn(ProgramItem* __this, uString** __retval);
void ProgramItem__set_Person_fn(ProgramItem* __this, uString* value);
void ProgramItem__SetCategoryColor_fn(ProgramItem* __this, ::g::Uno::Float4* value, uObject* origin);
void ProgramItem__SetImageSource_fn(ProgramItem* __this, ::g::Fuse::Resources::ImageSource* value, uObject* origin);
void ProgramItem__SetIsAttending_fn(ProgramItem* __this, bool* value, uObject* origin);
void ProgramItem__SetPerson_fn(ProgramItem* __this, uString* value, uObject* origin);
void ProgramItem__SetTime_fn(ProgramItem* __this, uString* value, uObject* origin);
void ProgramItem__SetTitle_fn(ProgramItem* __this, uString* value, uObject* origin);
void ProgramItem__get_Time_fn(ProgramItem* __this, uString** __retval);
void ProgramItem__set_Time_fn(ProgramItem* __this, uString* value);
void ProgramItem__get_Title_fn(ProgramItem* __this, uString** __retval);
void ProgramItem__set_Title_fn(ProgramItem* __this, uString* value);

struct ProgramItem : ::g::Fuse::Controls::DockPanel
{
    uStrong< ::g::Fuse::Resources::ImageSource*> _field_ImageSource;
    ::g::Uno::Float4 _field_CategoryColor;
    uStrong<uString*> _field_Time;
    uStrong<uString*> _field_Person;
    uStrong<uString*> _field_Title;
    bool _field_IsAttending;
    uStrong< ::g::Uno::UX::Property1*> attendingOverlay_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> img_Source_inst;
    uStrong< ::g::Uno::UX::Property1*> attendingOverlay_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Value_inst;
    uStrong< ::g::Fuse::Controls::Image*> img;
    uStrong< ::g::Fuse::Controls::Rectangle*> attendingOverlay;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ProgramItem_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ProgramItem_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ProgramItem_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ProgramItem_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ProgramItem_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ProgramItem_typeof()->Init(), __selector5_; }

    void ctor_8();
    ::g::Uno::Float4 CategoryColor();
    void CategoryColor(::g::Uno::Float4 value);
    ::g::Fuse::Resources::ImageSource* ImageSource();
    void ImageSource(::g::Fuse::Resources::ImageSource* value);
    void InitializeUX();
    bool IsAttending();
    void IsAttending(bool value);
    uString* Person();
    void Person(uString* value);
    void SetCategoryColor(::g::Uno::Float4 value, uObject* origin);
    void SetImageSource(::g::Fuse::Resources::ImageSource* value, uObject* origin);
    void SetIsAttending(bool value, uObject* origin);
    void SetPerson(uString* value, uObject* origin);
    void SetTime(uString* value, uObject* origin);
    void SetTitle(uString* value, uObject* origin);
    uString* Time();
    void Time(uString* value);
    uString* Title();
    void Title(uString* value);
    static ProgramItem* New5();
};
// }

}}} // ::g::Alive::ExampleApp
