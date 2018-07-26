// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ProgramItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Ali-1cec6cef.h>
#include <_root.v2_accessor_Ali-1d99d1cf.h>
#include <_root.v2_accessor_Ali-2a497be8.h>
#include <_root.v2_accessor_Ali-5bb0bb82.h>
#include <_root.v2_accessor_Ali-75a7c5f4.h>
#include <_root.v2_accessor_Ali-8e553a3f.h>
#include <_root.v2_FuseControls-1a068ef9.h>
#include <_root.v2_FuseControls-71dcdce3.h>
#include <_root.v2_FuseControls-89b09788.h>
#include <_root.v2_FuseControls-ce0b45cc.h>
#include <_root.v2_FuseElements-476826aa.h>
#include <_root.v2_FuseTriggers-d9e0f73f.h>
#include <Alive.BodyBold.h>
#include <Alive.DarkTheme.h>
#include <Alive.ExampleApp.ProgramItem.h>
#include <Alive.Icon.h>
#include <Alive.TransparentizeFunction.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.Add.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[17];
static uType* TYPES[4];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ProgramItem :4
// {
// static ProgramItem() :107
static void ProgramItem__cctor_4_fn(uType* __type)
{
    ProgramItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Color"*/]);
    ProgramItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Source"*/]);
    ProgramItem::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Opacity"*/]);
    ProgramItem::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Value"*/]);
    ProgramItem::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"img"*/]);
    ProgramItem::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"attendingOv...*/]);
}

static void ProgramItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("Source");
    ::STRINGS[2] = uString::Const("Opacity");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("img");
    ::STRINGS[5] = uString::Const("attendingOverlay");
    ::STRINGS[6] = uString::Const("Alive.Dark.Blue");
    ::STRINGS[7] = uString::Const("Alive.Gray600");
    ::STRINGS[8] = uString::Const(" -");
    ::STRINGS[9] = uString::Const("Components/ProgramItem.ux");
    ::STRINGS[10] = uString::Const("\356\261\213");
    ::STRINGS[11] = uString::Const("CategoryColor");
    ::STRINGS[12] = uString::Const("ImageSource");
    ::STRINGS[13] = uString::Const("IsAttending");
    ::STRINGS[14] = uString::Const("Person");
    ::STRINGS[15] = uString::Const("Time");
    ::STRINGS[16] = uString::Const("Title");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ProgramItem_IsAttending_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ProgramItem_Person_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ProgramItem_Time_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ProgramItem_Title_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(121,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProgramItem, _field_ImageSource), 0,
        ::g::Uno::Float4_typeof(), offsetof(ProgramItem, _field_CategoryColor), 0,
        ::g::Uno::String_typeof(), offsetof(ProgramItem, _field_Time), 0,
        ::g::Uno::String_typeof(), offsetof(ProgramItem, _field_Person), 0,
        ::g::Uno::String_typeof(), offsetof(ProgramItem, _field_Title), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProgramItem, _field_IsAttending), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ProgramItem, attendingOverlay_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL), offsetof(ProgramItem, img_Source_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(ProgramItem, attendingOverlay_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ProgramItem, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ProgramItem, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ProgramItem, temp2_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProgramItem, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProgramItem, temp3_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProgramItem, temp4_Value_inst), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(ProgramItem, img), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(ProgramItem, attendingOverlay), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(19,
        new uFunction("get_CategoryColor", NULL, (void*)ProgramItem__get_CategoryColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_CategoryColor", NULL, (void*)ProgramItem__set_CategoryColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ImageSource", NULL, (void*)ProgramItem__get_ImageSource_fn, 0, false, ::g::Fuse::Resources::ImageSource_typeof(), 0),
        new uFunction("set_ImageSource", NULL, (void*)ProgramItem__set_ImageSource_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSource_typeof()),
        new uFunction("get_IsAttending", NULL, (void*)ProgramItem__get_IsAttending_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsAttending", NULL, (void*)ProgramItem__set_IsAttending_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ProgramItem__New5_fn, 0, true, type, 0),
        new uFunction("get_Person", NULL, (void*)ProgramItem__get_Person_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Person", NULL, (void*)ProgramItem__set_Person_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetCategoryColor", NULL, (void*)ProgramItem__SetCategoryColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetImageSource", NULL, (void*)ProgramItem__SetImageSource_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Resources::ImageSource_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetIsAttending", NULL, (void*)ProgramItem__SetIsAttending_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetPerson", NULL, (void*)ProgramItem__SetPerson_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTime", NULL, (void*)ProgramItem__SetTime_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTitle", NULL, (void*)ProgramItem__SetTitle_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Time", NULL, (void*)ProgramItem__get_Time_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Time", NULL, (void*)ProgramItem__set_Time_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Title", NULL, (void*)ProgramItem__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)ProgramItem__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* ProgramItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::DockPanel_typeof();
    options.FieldCount = 144;
    options.InterfaceCount = 19;
    options.DependencyCount = 7;
    options.ObjectSize = sizeof(ProgramItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.ProgramItem", options);
    type->fp_build_ = ProgramItem_build;
    type->fp_ctor_ = (void*)ProgramItem__New5_fn;
    type->fp_cctor_ = ProgramItem__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ProgramItem() :111
void ProgramItem__ctor_8_fn(ProgramItem* __this)
{
    __this->ctor_8();
}

// public float4 get_CategoryColor() :25
void ProgramItem__get_CategoryColor_fn(ProgramItem* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CategoryColor();
}

// public void set_CategoryColor(float4 value) :26
void ProgramItem__set_CategoryColor_fn(ProgramItem* __this, ::g::Uno::Float4* value)
{
    __this->CategoryColor(*value);
}

// public Fuse.Resources.ImageSource get_ImageSource() :10
void ProgramItem__get_ImageSource_fn(ProgramItem* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->ImageSource();
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) :11
void ProgramItem__set_ImageSource_fn(ProgramItem* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->ImageSource(value);
}

// private void InitializeUX() :115
void ProgramItem__InitializeUX_fn(ProgramItem* __this)
{
    __this->InitializeUX();
}

// public bool get_IsAttending() :85
void ProgramItem__get_IsAttending_fn(ProgramItem* __this, bool* __retval)
{
    *__retval = __this->IsAttending();
}

// public void set_IsAttending(bool value) :86
void ProgramItem__set_IsAttending_fn(ProgramItem* __this, bool* value)
{
    __this->IsAttending(*value);
}

// public ProgramItem New() :111
void ProgramItem__New5_fn(ProgramItem** __retval)
{
    *__retval = ProgramItem::New5();
}

// public string get_Person() :55
void ProgramItem__get_Person_fn(ProgramItem* __this, uString** __retval)
{
    *__retval = __this->Person();
}

// public void set_Person(string value) :56
void ProgramItem__set_Person_fn(ProgramItem* __this, uString* value)
{
    __this->Person(value);
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) :28
void ProgramItem__SetCategoryColor_fn(ProgramItem* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetCategoryColor(*value, origin);
}

// public void SetImageSource(Fuse.Resources.ImageSource value, Uno.UX.IPropertyListener origin) :13
void ProgramItem__SetImageSource_fn(ProgramItem* __this, ::g::Fuse::Resources::ImageSource* value, uObject* origin)
{
    __this->SetImageSource(value, origin);
}

// public void SetIsAttending(bool value, Uno.UX.IPropertyListener origin) :88
void ProgramItem__SetIsAttending_fn(ProgramItem* __this, bool* value, uObject* origin)
{
    __this->SetIsAttending(*value, origin);
}

// public void SetPerson(string value, Uno.UX.IPropertyListener origin) :58
void ProgramItem__SetPerson_fn(ProgramItem* __this, uString* value, uObject* origin)
{
    __this->SetPerson(value, origin);
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) :43
void ProgramItem__SetTime_fn(ProgramItem* __this, uString* value, uObject* origin)
{
    __this->SetTime(value, origin);
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) :73
void ProgramItem__SetTitle_fn(ProgramItem* __this, uString* value, uObject* origin)
{
    __this->SetTitle(value, origin);
}

// public string get_Time() :40
void ProgramItem__get_Time_fn(ProgramItem* __this, uString** __retval)
{
    *__retval = __this->Time();
}

// public void set_Time(string value) :41
void ProgramItem__set_Time_fn(ProgramItem* __this, uString* value)
{
    __this->Time(value);
}

// public string get_Title() :70
void ProgramItem__get_Title_fn(ProgramItem* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :71
void ProgramItem__set_Title_fn(ProgramItem* __this, uString* value)
{
    __this->Title(value);
}

::g::Uno::UX::Selector ProgramItem::__selector0_;
::g::Uno::UX::Selector ProgramItem::__selector1_;
::g::Uno::UX::Selector ProgramItem::__selector2_;
::g::Uno::UX::Selector ProgramItem::__selector3_;
::g::Uno::UX::Selector ProgramItem::__selector4_;
::g::Uno::UX::Selector ProgramItem::__selector5_;

// public ProgramItem() [instance] :111
void ProgramItem::ctor_8()
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public float4 get_CategoryColor() [instance] :25
::g::Uno::Float4 ProgramItem::CategoryColor()
{
    return _field_CategoryColor;
}

// public void set_CategoryColor(float4 value) [instance] :26
void ProgramItem::CategoryColor(::g::Uno::Float4 value)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "set_CategoryColor(float4)");
    SetCategoryColor(value, NULL);
}

// public Fuse.Resources.ImageSource get_ImageSource() [instance] :10
::g::Fuse::Resources::ImageSource* ProgramItem::ImageSource()
{
    return _field_ImageSource;
}

// public void set_ImageSource(Fuse.Resources.ImageSource value) [instance] :11
void ProgramItem::ImageSource(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "set_ImageSource(Fuse.Resources.ImageSource)");
    SetImageSource(value, NULL);
}

// private void InitializeUX() [instance] :115
void ProgramItem::InitializeUX()
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "InitializeUX()");
    ::g::Fuse::Reactive::Resource* temp5 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[6/*"Alive.Dark....*/]);
    double temp6 = 0.3;
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::Double_typeof(), temp6));
    attendingOverlay = ::g::Fuse::Controls::Rectangle::New3();
    attendingOverlay_Color_inst = ::g::v2_FuseControlsShape_Color_Property::New1(attendingOverlay, ProgramItem::__selector0_);
    ::g::Alive::TransparentizeFunction* temp8 = ::g::Alive::TransparentizeFunction::New1(temp5, temp7);
    ::g::Fuse::Reactive::Constant* temp9 = ::g::Fuse::Reactive::Constant::New1(this);
    img = ::g::Fuse::Controls::Image::New3();
    img_Source_inst = ::g::v2_FuseControlsImage_Source_Property::New1(img, ProgramItem::__selector1_);
    ::g::Fuse::Reactive::Property* temp10 = ::g::Fuse::Reactive::Property::New1(temp9, ::g::v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::Singleton());
    attendingOverlay_Opacity_inst = ::g::v2_FuseElementsElement_Opacity_Property::New1(attendingOverlay, ProgramItem::__selector2_);
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::v2_FuseTriggersWhileBool_Value_Property::New1(temp, ProgramItem::__selector3_);
    ::g::Fuse::Reactive::Property* temp12 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::v2_accessor_Alive_ExampleApp_ProgramItem_IsAttending::Singleton());
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    temp1_Color_inst = ::g::v2_FuseControlsShape_Color_Property::New1(temp1, ProgramItem::__selector0_);
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp13, ::g::v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::Singleton());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Color_inst = ::g::v2_FuseControlsTextControl_Color_Property::New1(temp2, ProgramItem::__selector0_);
    ::g::Fuse::Reactive::Resource* temp15 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[7/*"Alive.Gray600"*/]);
    ::g::Fuse::Reactive::Constant* temp16 = ::g::Fuse::Reactive::Constant::New1(this);
    temp2_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp2, ProgramItem::__selector3_);
    ::g::Fuse::Reactive::Property* temp17 = ::g::Fuse::Reactive::Property::New1(temp16, ::g::v2_accessor_Alive_ExampleApp_ProgramItem_Time::Singleton());
    ::g::Fuse::Reactive::Constant* temp18 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp19 = ::g::Fuse::Reactive::Property::New1(temp18, ::g::v2_accessor_Alive_ExampleApp_ProgramItem_Person::Singleton());
    uString* temp20 = ::STRINGS[8/*" -"*/];
    ::g::Fuse::Reactive::Constant* temp21 = ::g::Fuse::Reactive::Constant::New1(temp20);
    ::g::Alive::BodyBold* temp3 = ::g::Alive::BodyBold::New4();
    temp3_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp3, ProgramItem::__selector3_);
    ::g::Fuse::Reactive::Add* temp22 = ::g::Fuse::Reactive::Add::New1(temp19, temp21);
    ::g::Fuse::Reactive::Constant* temp23 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Alive::BodyBold* temp4 = ::g::Alive::BodyBold::New4();
    temp4_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp4, ProgramItem::__selector3_);
    ::g::Fuse::Reactive::Property* temp24 = ::g::Fuse::Reactive::Property::New1(temp23, ::g::v2_accessor_Alive_ExampleApp_ProgramItem_Title::Singleton());
    ::g::Fuse::Controls::Panel* temp25 = ::g::Fuse::Controls::Panel::New3();
    ::g::Alive::DarkTheme* temp26 = ::g::Alive::DarkTheme::New4();
    ::g::Alive::Icon* temp27 = ::g::Alive::Icon::New4();
    ::g::Fuse::Reactive::DataBinding* temp28 = ::g::Fuse::Reactive::DataBinding::New1(attendingOverlay_Color_inst, (uObject*)temp8, 3);
    ::g::Fuse::Reactive::DataBinding* temp29 = ::g::Fuse::Reactive::DataBinding::New1(img_Source_inst, (uObject*)temp10, 1);
    ::g::Fuse::Animations::Change* temp30 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], attendingOverlay_Opacity_inst);
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp12, 1);
    ::g::Fuse::Controls::StackPanel* temp32 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp33 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Color_inst, (uObject*)temp14, 1);
    ::g::Fuse::Reactive::DataBinding* temp34 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Color_inst, (uObject*)temp15, 3);
    ::g::Fuse::Reactive::DataBinding* temp35 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp17, 1);
    ::g::Fuse::Reactive::DataBinding* temp36 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Value_inst, (uObject*)temp22, 3);
    ::g::Fuse::Reactive::DataBinding* temp37 = ::g::Fuse::Reactive::DataBinding::New1(temp4_Value_inst, (uObject*)temp24, 1);
    CategoryColor(::g::Fuse::Drawing::Colors::Black());
    HitTestMode(2);
    MinHeight(::g::Uno::UX::Size__New1(115.0f, 1));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp25->SourceLineNumber(9);
    temp25->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp25, 0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), img);
    uPtr(img)->StretchMode(6);
    uPtr(img)->Width(::g::Uno::UX::Size__New1(90.0f, 1));
    uPtr(img)->Name(ProgramItem::__selector4_);
    uPtr(img)->SourceLineNumber(10);
    uPtr(img)->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(img)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(img)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), attendingOverlay);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(img)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp29);
    temp26->SourceLineNumber(11);
    temp26->SourceFileName(::STRINGS[9/*"Components/...*/]);
    uPtr(attendingOverlay)->Opacity(0.0f);
    uPtr(attendingOverlay)->Layer(3);
    uPtr(attendingOverlay)->Name(ProgramItem::__selector5_);
    uPtr(attendingOverlay)->SourceLineNumber(12);
    uPtr(attendingOverlay)->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(attendingOverlay)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(attendingOverlay)->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp28);
    temp27->Value(::STRINGS[10/*"\uEC4B"*/]);
    temp27->Alignment(15);
    temp27->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp27->SourceLineNumber(13);
    temp27->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp8->SourceLineNumber(12);
    temp8->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp5->SourceLineNumber(12);
    temp5->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp7->SourceLineNumber(12);
    temp7->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp10->SourceLineNumber(10);
    temp10->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp9->SourceLineNumber(10);
    temp9->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp->SourceLineNumber(18);
    temp->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    ::g::Fuse::Animations::Change__set_Value_fn(temp30, uCRef(1.0f));
    temp30->Duration(0.1);
    temp12->SourceLineNumber(18);
    temp12->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp11->SourceLineNumber(18);
    temp11->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp32->Alignment(8);
    temp32->Margin(::g::Uno::Float4__New2(13.0f, 0.0f, 13.0f, 0.0f));
    temp32->SourceLineNumber(22);
    temp32->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp1->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp1->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    temp1->Alignment(1);
    temp1->SourceLineNumber(23);
    temp1->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp33);
    temp14->SourceLineNumber(23);
    temp14->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp13->SourceLineNumber(23);
    temp13->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp2->FontSize(13.0f);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 8.0f, 0.0f, 3.0f));
    temp2->SourceLineNumber(24);
    temp2->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp35);
    temp15->SourceLineNumber(24);
    temp15->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp17->SourceLineNumber(24);
    temp17->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp16->SourceLineNumber(24);
    temp16->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp3->SourceLineNumber(25);
    temp3->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp36);
    temp22->SourceLineNumber(25);
    temp22->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp19->SourceLineNumber(25);
    temp19->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp18->SourceLineNumber(25);
    temp18->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp21->SourceLineNumber(25);
    temp21->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp4->SourceLineNumber(26);
    temp4->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp37);
    temp24->SourceLineNumber(26);
    temp24->SourceFileName(::STRINGS[9/*"Components/...*/]);
    temp23->SourceLineNumber(26);
    temp23->SourceFileName(::STRINGS[9/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
}

// public bool get_IsAttending() [instance] :85
bool ProgramItem::IsAttending()
{
    return _field_IsAttending;
}

// public void set_IsAttending(bool value) [instance] :86
void ProgramItem::IsAttending(bool value)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "set_IsAttending(bool)");
    SetIsAttending(value, NULL);
}

// public string get_Person() [instance] :55
uString* ProgramItem::Person()
{
    return _field_Person;
}

// public void set_Person(string value) [instance] :56
void ProgramItem::Person(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "set_Person(string)");
    SetPerson(value, NULL);
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :28
void ProgramItem::SetCategoryColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "SetCategoryColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_CategoryColor))
    {
        _field_CategoryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"CategoryColor"*/]), origin);
    }
}

// public void SetImageSource(Fuse.Resources.ImageSource value, Uno.UX.IPropertyListener origin) [instance] :13
void ProgramItem::SetImageSource(::g::Fuse::Resources::ImageSource* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "SetImageSource(Fuse.Resources.ImageSource,Uno.UX.IPropertyListener)");

    if (value != _field_ImageSource)
    {
        _field_ImageSource = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[12/*"ImageSource"*/]), origin);
    }
}

// public void SetIsAttending(bool value, Uno.UX.IPropertyListener origin) [instance] :88
void ProgramItem::SetIsAttending(bool value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "SetIsAttending(bool,Uno.UX.IPropertyListener)");

    if (value != _field_IsAttending)
    {
        _field_IsAttending = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[13/*"IsAttending"*/]), origin);
    }
}

// public void SetPerson(string value, Uno.UX.IPropertyListener origin) [instance] :58
void ProgramItem::SetPerson(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "SetPerson(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Person))
    {
        _field_Person = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[14/*"Person"*/]), origin);
    }
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) [instance] :43
void ProgramItem::SetTime(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "SetTime(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Time))
    {
        _field_Time = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[15/*"Time"*/]), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :73
void ProgramItem::SetTitle(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "SetTitle(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[16/*"Title"*/]), origin);
    }
}

// public string get_Time() [instance] :40
uString* ProgramItem::Time()
{
    return _field_Time;
}

// public void set_Time(string value) [instance] :41
void ProgramItem::Time(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "set_Time(string)");
    SetTime(value, NULL);
}

// public string get_Title() [instance] :70
uString* ProgramItem::Title()
{
    return _field_Title;
}

// public void set_Title(string value) [instance] :71
void ProgramItem::Title(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ProgramItem", "set_Title(string)");
    SetTitle(value, NULL);
}

// public ProgramItem New() [static] :111
ProgramItem* ProgramItem::New5()
{
    ProgramItem* obj1 = (ProgramItem*)uNew(ProgramItem_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
