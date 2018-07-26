// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ScheduleItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseUXKitsAlive-c03cf3e5.h>
#include <_root.v2_accessor_Ali-15ca235e.h>
#include <_root.v2_accessor_Ali-262a742e.h>
#include <_root.v2_accessor_Ali-3aab20b7.h>
#include <_root.v2_accessor_Ali-d6afc3b3.h>
#include <_root.v2_FuseControls-71dcdce3.h>
#include <_root.v2_FuseControls-c213f1cc.h>
#include <Alive.Body.h>
#include <Alive.Donut.h>
#include <Alive.ExampleApp.ScheduleItem.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Reactive.Add.h>
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
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[9];
static uType* TYPES[2];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ScheduleItem :4
// {
// static ScheduleItem() :69
static void ScheduleItem__cctor_4_fn(uType* __type)
{
    ScheduleItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"StrokeColor"*/]);
    ScheduleItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
}

static void ScheduleItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("StrokeColor");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const(", ");
    ::STRINGS[3] = uString::Const("auto,1*");
    ::STRINGS[4] = uString::Const("Components/ScheduleItem.ux");
    ::STRINGS[5] = uString::Const("Category");
    ::STRINGS[6] = uString::Const("CategoryColor");
    ::STRINGS[7] = uString::Const("Time");
    ::STRINGS[8] = uString::Const("Title");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::FuseUXKitsAlive_ColorPalette_res_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_Category_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_CategoryColor_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_Time_typeof(),
        ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_Title_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
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
        ::g::Uno::String_typeof(), offsetof(ScheduleItem, _field_Time), 0,
        ::g::Uno::String_typeof(), offsetof(ScheduleItem, _field_Category), 0,
        ::g::Uno::String_typeof(), offsetof(ScheduleItem, _field_Title), 0,
        ::g::Uno::Float4_typeof(), offsetof(ScheduleItem, _field_CategoryColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ScheduleItem, temp_StrokeColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ScheduleItem, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ScheduleItem, temp2_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleItem::__selector1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(13,
        new uFunction("get_Category", NULL, (void*)ScheduleItem__get_Category_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Category", NULL, (void*)ScheduleItem__set_Category_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_CategoryColor", NULL, (void*)ScheduleItem__get_CategoryColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_CategoryColor", NULL, (void*)ScheduleItem__set_CategoryColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)ScheduleItem__New5_fn, 0, true, type, 0),
        new uFunction("SetCategory", NULL, (void*)ScheduleItem__SetCategory_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetCategoryColor", NULL, (void*)ScheduleItem__SetCategoryColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTime", NULL, (void*)ScheduleItem__SetTime_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTitle", NULL, (void*)ScheduleItem__SetTitle_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Time", NULL, (void*)ScheduleItem__get_Time_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Time", NULL, (void*)ScheduleItem__set_Time_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Title", NULL, (void*)ScheduleItem__get_Title_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Title", NULL, (void*)ScheduleItem__set_Title_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* ScheduleItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Grid_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 19;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(ScheduleItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.ScheduleItem", options);
    type->fp_build_ = ScheduleItem_build;
    type->fp_ctor_ = (void*)ScheduleItem__New5_fn;
    type->fp_cctor_ = ScheduleItem__cctor_4_fn;
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

// public ScheduleItem() :73
void ScheduleItem__ctor_8_fn(ScheduleItem* __this)
{
    __this->ctor_8();
}

// public string get_Category() :25
void ScheduleItem__get_Category_fn(ScheduleItem* __this, uString** __retval)
{
    *__retval = __this->Category();
}

// public void set_Category(string value) :26
void ScheduleItem__set_Category_fn(ScheduleItem* __this, uString* value)
{
    __this->Category(value);
}

// public float4 get_CategoryColor() :55
void ScheduleItem__get_CategoryColor_fn(ScheduleItem* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CategoryColor();
}

// public void set_CategoryColor(float4 value) :56
void ScheduleItem__set_CategoryColor_fn(ScheduleItem* __this, ::g::Uno::Float4* value)
{
    __this->CategoryColor(*value);
}

// private void InitializeUX() :77
void ScheduleItem__InitializeUX_fn(ScheduleItem* __this)
{
    __this->InitializeUX();
}

// public ScheduleItem New() :73
void ScheduleItem__New5_fn(ScheduleItem** __retval)
{
    *__retval = ScheduleItem::New5();
}

// public void SetCategory(string value, Uno.UX.IPropertyListener origin) :28
void ScheduleItem__SetCategory_fn(ScheduleItem* __this, uString* value, uObject* origin)
{
    __this->SetCategory(value, origin);
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) :58
void ScheduleItem__SetCategoryColor_fn(ScheduleItem* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetCategoryColor(*value, origin);
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) :13
void ScheduleItem__SetTime_fn(ScheduleItem* __this, uString* value, uObject* origin)
{
    __this->SetTime(value, origin);
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) :43
void ScheduleItem__SetTitle_fn(ScheduleItem* __this, uString* value, uObject* origin)
{
    __this->SetTitle(value, origin);
}

// public string get_Time() :10
void ScheduleItem__get_Time_fn(ScheduleItem* __this, uString** __retval)
{
    *__retval = __this->Time();
}

// public void set_Time(string value) :11
void ScheduleItem__set_Time_fn(ScheduleItem* __this, uString* value)
{
    __this->Time(value);
}

// public string get_Title() :40
void ScheduleItem__get_Title_fn(ScheduleItem* __this, uString** __retval)
{
    *__retval = __this->Title();
}

// public void set_Title(string value) :41
void ScheduleItem__set_Title_fn(ScheduleItem* __this, uString* value)
{
    __this->Title(value);
}

::g::Uno::UX::Selector ScheduleItem::__selector0_;
::g::Uno::UX::Selector ScheduleItem::__selector1_;

// public ScheduleItem() [instance] :73
void ScheduleItem::ctor_8()
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public string get_Category() [instance] :25
uString* ScheduleItem::Category()
{
    return _field_Category;
}

// public void set_Category(string value) [instance] :26
void ScheduleItem::Category(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "set_Category(string)");
    SetCategory(value, NULL);
}

// public float4 get_CategoryColor() [instance] :55
::g::Uno::Float4 ScheduleItem::CategoryColor()
{
    return _field_CategoryColor;
}

// public void set_CategoryColor(float4 value) [instance] :56
void ScheduleItem::CategoryColor(::g::Uno::Float4 value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "set_CategoryColor(float4)");
    SetCategoryColor(value, NULL);
}

// private void InitializeUX() [instance] :77
void ScheduleItem::InitializeUX()
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Alive::Donut* temp = ::g::Alive::Donut::New4();
    temp_StrokeColor_inst = ::g::v2_FuseControlsShape_StrokeColor_Property::New1(temp, ScheduleItem::__selector0_);
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_CategoryColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_Time::Singleton());
    uString* temp7 = ::STRINGS[2/*", "*/];
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(temp7);
    ::g::Fuse::Reactive::Constant* temp9 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Property* temp10 = ::g::Fuse::Reactive::Property::New1(temp9, ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_Category::Singleton());
    ::g::Fuse::Reactive::Add* temp11 = ::g::Fuse::Reactive::Add::New1(temp8, temp10);
    ::g::Alive::Body* temp1 = ::g::Alive::Body::New4();
    temp1_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp1, ScheduleItem::__selector1_);
    ::g::Fuse::Reactive::Add* temp12 = ::g::Fuse::Reactive::Add::New1(temp6, temp11);
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Alive::Body* temp2 = ::g::Alive::Body::New4();
    temp2_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp2, ScheduleItem::__selector1_);
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp13, ::g::v2_accessor_Alive_ExampleApp_ScheduleItem_Title::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp_StrokeColor_inst, (uObject*)temp4, 1);
    ::g::Fuse::Controls::Grid* temp16 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp12, 3);
    ::g::Fuse::Reactive::DataBinding* temp18 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp14, 1);
    Columns(::STRINGS[3/*"auto,1*"*/]);
    Margin(::g::Uno::Float4__New2(20.0f, 25.0f, 20.0f, 20.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp->Alignment(5);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 3.0f, 13.0f, 0.0f));
    temp->SourceLineNumber(7);
    temp->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp4->SourceLineNumber(7);
    temp4->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp3->SourceLineNumber(7);
    temp3->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp16->RowCount(2);
    temp16->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp16->SourceLineNumber(8);
    temp16->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp1->FontSize(13.0f);
    temp1->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGray200());
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 10.0f));
    temp1->SourceLineNumber(9);
    temp1->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp12->SourceLineNumber(9);
    temp12->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp6->SourceLineNumber(9);
    temp6->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp5->SourceLineNumber(9);
    temp5->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp11->SourceLineNumber(9);
    temp11->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp8->SourceLineNumber(9);
    temp8->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp10->SourceLineNumber(9);
    temp10->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp9->SourceLineNumber(9);
    temp9->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp2->FontSize(15.0f);
    temp2->SourceLineNumber(10);
    temp2->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp18);
    temp14->SourceLineNumber(10);
    temp14->SourceFileName(::STRINGS[4/*"Components/...*/]);
    temp13->SourceLineNumber(10);
    temp13->SourceFileName(::STRINGS[4/*"Components/...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
}

// public void SetCategory(string value, Uno.UX.IPropertyListener origin) [instance] :28
void ScheduleItem::SetCategory(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "SetCategory(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Category))
    {
        _field_Category = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"Category"*/]), origin);
    }
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :58
void ScheduleItem::SetCategoryColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "SetCategoryColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_CategoryColor))
    {
        _field_CategoryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"CategoryColor"*/]), origin);
    }
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) [instance] :13
void ScheduleItem::SetTime(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "SetTime(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Time))
    {
        _field_Time = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"Time"*/]), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :43
void ScheduleItem::SetTitle(uString* value, uObject* origin)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "SetTitle(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"Title"*/]), origin);
    }
}

// public string get_Time() [instance] :10
uString* ScheduleItem::Time()
{
    return _field_Time;
}

// public void set_Time(string value) [instance] :11
void ScheduleItem::Time(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "set_Time(string)");
    SetTime(value, NULL);
}

// public string get_Title() [instance] :40
uString* ScheduleItem::Title()
{
    return _field_Title;
}

// public void set_Title(string value) [instance] :41
void ScheduleItem::Title(uString* value)
{
    uStackFrame __("Alive.ExampleApp.ScheduleItem", "set_Title(string)");
    SetTitle(value, NULL);
}

// public ScheduleItem New() [static] :73
ScheduleItem* ScheduleItem::New5()
{
    ScheduleItem* obj1 = (ScheduleItem*)uNew(ScheduleItem_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
