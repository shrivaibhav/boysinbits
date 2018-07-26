// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ScheduleDetails.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Ali-1f079a4e.h>
#include <_root.v2_accessor_Ali-54437bd5.h>
#include <_root.v2_accessor_Ali-8332321c.h>
#include <_root.v2_accessor_Ali-bce86099.h>
#include <_root.v2_AliveIconLab-9e2fd3cc.h>
#include <_root.v2_bundle.h>
#include <_root.v2_FuseControls-71dcdce3.h>
#include <_root.v2_FuseControls-ce0b45cc.h>
#include <Alive.Body.h>
#include <Alive.DarkTheme.h>
#include <Alive.ExampleApp.Sche-71f472d9.h>
#include <Alive.IconLabel.h>
#include <Alive.Title.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.WrapPanel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[12];
static uType* TYPES[2];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ScheduleDetails :4
// {
// static ScheduleDetails() :85
static void ScheduleDetails__cctor_4_fn(uType* __type)
{
    ScheduleDetails::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Color"*/]);
    ScheduleDetails::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
    ScheduleDetails::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Text"*/]);
}

static void ScheduleDetails_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Color");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("Components/ScheduleDetails.ux");
    ::STRINGS[4] = uString::Const("\356\262\210");
    ::STRINGS[5] = uString::Const("Building C1, Room: Root");
    ::STRINGS[6] = uString::Const("Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.");
    ::STRINGS[7] = uString::Const("Category");
    ::STRINGS[8] = uString::Const("CategoryColor");
    ::STRINGS[9] = uString::Const("Location");
    ::STRINGS[10] = uString::Const("Time");
    ::STRINGS[11] = uString::Const("Title");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_Category_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_CategoryColor_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_Time_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_Title_typeof(),
        ::g::v2_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Uno::String_typeof(), offsetof(ScheduleDetails, _field_Time), 0,
        ::g::Uno::String_typeof(), offsetof(ScheduleDetails, _field_Location), 0,
        ::g::Uno::String_typeof(), offsetof(ScheduleDetails, _field_Category), 0,
        ::g::Uno::String_typeof(), offsetof(ScheduleDetails, _field_Title), 0,
        ::g::Uno::Float4_typeof(), offsetof(ScheduleDetails, _field_CategoryColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ScheduleDetails, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ScheduleDetails, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ScheduleDetails, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ScheduleDetails, temp3_Text_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleDetails::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleDetails::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleDetails::__selector2_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_Category", NULL, (void*)ScheduleDetails__get_Category_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Category", NULL, (void*)ScheduleDetails__set_Category_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_CategoryColor", NULL, (void*)ScheduleDetails__get_CategoryColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_CategoryColor", NULL, (void*)ScheduleDetails__set_CategoryColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Location", NULL, (void*)ScheduleDetails__get_Location_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Location", NULL, (void*)ScheduleDetails__set_Location_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)ScheduleDetails__New4_fn, 0, true, type, 0),
        new uFunction("SetCategory", NULL, (void*)ScheduleDetails__SetCategory_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetCategoryColor", NULL, (void*)ScheduleDetails__SetCategoryColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetLocation", NULL, (void*)ScheduleDetails__SetLocation_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTime", NULL, (void*)ScheduleDetails__SetTime_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTitle", NULL, (void*)ScheduleDetails__SetTitle_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Time", NULL, (void*)ScheduleDetails__get_Time_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Time", NULL, (void*)ScheduleDetails__set_Time_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Title", NULL, (void*)ScheduleDetails__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)ScheduleDetails__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* ScheduleDetails_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 132;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(ScheduleDetails);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.ScheduleDetails", options);
    type->fp_build_ = ScheduleDetails_build;
    type->fp_ctor_ = (void*)ScheduleDetails__New4_fn;
    type->fp_cctor_ = ScheduleDetails__cctor_4_fn;
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

// public ScheduleDetails() :89
void ScheduleDetails__ctor_7_fn(ScheduleDetails* __this)
{
    __this->ctor_7();
}

// public string get_Category() :40
void ScheduleDetails__get_Category_fn(ScheduleDetails* __this, uString** __retval)
{
    *__retval = __this->Category();
}

// public void set_Category(string value) :41
void ScheduleDetails__set_Category_fn(ScheduleDetails* __this, uString* value)
{
    __this->Category(value);
}

// public float4 get_CategoryColor() :70
void ScheduleDetails__get_CategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CategoryColor();
}

// public void set_CategoryColor(float4 value) :71
void ScheduleDetails__set_CategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* value)
{
    __this->CategoryColor(*value);
}

// private void InitializeUX() :93
void ScheduleDetails__InitializeUX_fn(ScheduleDetails* __this)
{
    __this->InitializeUX();
}

// public string get_Location() :25
void ScheduleDetails__get_Location_fn(ScheduleDetails* __this, uString** __retval)
{
    *__retval = __this->Location();
}

// public void set_Location(string value) :26
void ScheduleDetails__set_Location_fn(ScheduleDetails* __this, uString* value)
{
    __this->Location(value);
}

// public ScheduleDetails New() :89
void ScheduleDetails__New4_fn(ScheduleDetails** __retval)
{
    *__retval = ScheduleDetails::New4();
}

// public void SetCategory(string value, Uno.UX.IPropertyListener origin) :43
void ScheduleDetails__SetCategory_fn(ScheduleDetails* __this, uString* value, uObject* origin)
{
    __this->SetCategory(value, origin);
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) :73
void ScheduleDetails__SetCategoryColor_fn(ScheduleDetails* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetCategoryColor(*value, origin);
}

// public void SetLocation(string value, Uno.UX.IPropertyListener origin) :28
void ScheduleDetails__SetLocation_fn(ScheduleDetails* __this, uString* value, uObject* origin)
{
    __this->SetLocation(value, origin);
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) :13
void ScheduleDetails__SetTime_fn(ScheduleDetails* __this, uString* value, uObject* origin)
{
    __this->SetTime(value, origin);
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) :58
void ScheduleDetails__SetTitle_fn(ScheduleDetails* __this, uString* value, uObject* origin)
{
    __this->SetTitle(value, origin);
}

// public string get_Time() :10
void ScheduleDetails__get_Time_fn(ScheduleDetails* __this, uString** __retval)
{
    *__retval = __this->Time();
}

// public void set_Time(string value) :11
void ScheduleDetails__set_Time_fn(ScheduleDetails* __this, uString* value)
{
    __this->Time(value);
}

// public string get_Title() :55
void ScheduleDetails__get_Title_fn(ScheduleDetails* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :56
void ScheduleDetails__set_Title_fn(ScheduleDetails* __this, uString* value)
{
    __this->Title(value);
}

::g::Uno::UX::Selector ScheduleDetails::__selector0_;
::g::Uno::UX::Selector ScheduleDetails::__selector1_;
::g::Uno::UX::Selector ScheduleDetails::__selector2_;

// public ScheduleDetails() [instance] :89
void ScheduleDetails::ctor_7()
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public string get_Category() [instance] :40
uString* ScheduleDetails::Category()
{
    return _field_Category;
}

// public void set_Category(string value) [instance] :41
void ScheduleDetails::Category(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "set_Category(string)");
    SetCategory(value, NULL);
}

// public float4 get_CategoryColor() [instance] :70
::g::Uno::Float4 ScheduleDetails::CategoryColor()
{
    return _field_CategoryColor;
}

// public void set_CategoryColor(float4 value) [instance] :71
void ScheduleDetails::CategoryColor(::g::Uno::Float4 value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "set_CategoryColor(float4)");
    SetCategoryColor(value, NULL);
}

// private void InitializeUX() [instance] :93
void ScheduleDetails::InitializeUX()
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Rectangle* temp = ::g::Fuse::Controls::Rectangle::New3();
    temp_Color_inst = ::g::v2_FuseControlsShape_Color_Property::New1(temp, ScheduleDetails::__selector0_);
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_CategoryColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Alive::Title* temp1 = ::g::Alive::Title::New4();
    temp1_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp1, ScheduleDetails::__selector1_);
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_Title::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Alive::Body* temp2 = ::g::Alive::Body::New4();
    temp2_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp2, ScheduleDetails::__selector1_);
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_Category::Singleton());
    ::g::Fuse::Reactive::Constant* temp10 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Alive::IconLabel* temp3 = ::g::Alive::IconLabel::New5();
    temp3_Text_inst = ::g::v2_AliveIconLabel_Text_Property::New1(temp3, ScheduleDetails::__selector2_);
    ::g::Fuse::Reactive::Property* temp11 = ::g::Fuse::Reactive::Property::New1(temp10, ::g::v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::Singleton());
    ::g::Fuse::Controls::ScrollView* temp12 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp13 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    ::g::Alive::DarkTheme* temp15 = ::g::Alive::DarkTheme::New4();
    ::g::Fuse::Controls::StackPanel* temp16 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp5, 1);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp7, 1);
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp9, 1);
    ::g::Fuse::Controls::Image* temp20 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::WrapPanel* temp21 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Text_inst, (uObject*)temp11, 1);
    ::g::Alive::IconLabel* temp23 = ::g::Alive::IconLabel::New5();
    ::g::Alive::Body* temp24 = ::g::Alive::Body::New4();
    SourceLineNumber(1);
    SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp12->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp12->SourceLineNumber(7);
    temp12->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    temp13->SourceLineNumber(8);
    temp13->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp14->SourceLineNumber(9);
    temp14->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp15->SourceLineNumber(10);
    temp15->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp16->Alignment(12);
    temp16->Margin(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    temp16->SourceLineNumber(11);
    temp16->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp->Width(::g::Uno::UX::Size__New1(27.0f, 1));
    temp->Height(::g::Uno::UX::Size__New1(2.5f, 1));
    temp->Alignment(1);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 8.0f));
    temp->SourceLineNumber(12);
    temp->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp5->SourceLineNumber(12);
    temp5->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp4->SourceLineNumber(12);
    temp4->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp1->SourceLineNumber(13);
    temp1->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp7->SourceLineNumber(13);
    temp7->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp6->SourceLineNumber(13);
    temp6->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp2->SourceLineNumber(14);
    temp2->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    temp9->SourceLineNumber(14);
    temp9->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp8->SourceLineNumber(14);
    temp8->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp20->SourceLineNumber(16);
    temp20->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp20->File(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::event31d77e205()));
    temp21->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp21->SourceLineNumber(18);
    temp21->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp23);
    temp3->IconSize(14);
    temp3->Icon(::STRINGS[4/*"\uEC88"*/]);
    temp3->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 0.0f));
    temp3->SourceLineNumber(19);
    temp3->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    temp11->SourceLineNumber(19);
    temp11->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp10->SourceLineNumber(19);
    temp10->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp23->Text(::STRINGS[5/*"Building C1...*/]);
    temp23->IconSize(14);
    temp23->Icon(::STRINGS[4/*"\uEC88"*/]);
    temp23->SourceLineNumber(20);
    temp23->SourceFileName(::STRINGS[3/*"Components/...*/]);
    temp24->Value(::STRINGS[6/*"Vivamus sag...*/]);
    temp24->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp24->SourceLineNumber(22);
    temp24->SourceFileName(::STRINGS[3/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
}

// public string get_Location() [instance] :25
uString* ScheduleDetails::Location()
{
    return _field_Location;
}

// public void set_Location(string value) [instance] :26
void ScheduleDetails::Location(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "set_Location(string)");
    SetLocation(value, NULL);
}

// public void SetCategory(string value, Uno.UX.IPropertyListener origin) [instance] :43
void ScheduleDetails::SetCategory(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "SetCategory(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Category))
    {
        _field_Category = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"Category"*/]), origin);
    }
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :73
void ScheduleDetails::SetCategoryColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "SetCategoryColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_CategoryColor))
    {
        _field_CategoryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"CategoryColor"*/]), origin);
    }
}

// public void SetLocation(string value, Uno.UX.IPropertyListener origin) [instance] :28
void ScheduleDetails::SetLocation(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "SetLocation(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Location))
    {
        _field_Location = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"Location"*/]), origin);
    }
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) [instance] :13
void ScheduleDetails::SetTime(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "SetTime(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Time))
    {
        _field_Time = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Time"*/]), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :58
void ScheduleDetails::SetTitle(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "SetTitle(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"Title"*/]), origin);
    }
}

// public string get_Time() [instance] :10
uString* ScheduleDetails::Time()
{
    return _field_Time;
}

// public void set_Time(string value) [instance] :11
void ScheduleDetails::Time(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "set_Time(string)");
    SetTime(value, NULL);
}

// public string get_Title() [instance] :55
uString* ScheduleDetails::Title()
{
    return _field_Title;
}

// public void set_Title(string value) [instance] :56
void ScheduleDetails::Title(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleDetails", "set_Title(string)");
    SetTitle(value, NULL);
}

// public ScheduleDetails New() [static] :89
ScheduleDetails* ScheduleDetails::New4()
{
    ScheduleDetails* obj1 = (ScheduleDetails*)uNew(ScheduleDetails_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
