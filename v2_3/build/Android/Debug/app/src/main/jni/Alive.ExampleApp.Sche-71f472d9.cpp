// This file was generated based on '.uno/ux15/Alive.ExampleApp.ScheduleDetails.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.ExampleApp.Sche-71f472d9.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[7];

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
    ::STRINGS[3] = uString::Const("Category");
    ::STRINGS[4] = uString::Const("CategoryColor");
    ::STRINGS[5] = uString::Const("Time");
    ::STRINGS[6] = uString::Const("Title");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(116,
        ::g::Uno::String_typeof(), offsetof(ScheduleDetails, _field_Time), 0,
        ::g::Uno::String_typeof(), offsetof(ScheduleDetails, _field_Category), 0,
        ::g::Uno::String_typeof(), offsetof(ScheduleDetails, _field_Title), 0,
        ::g::Uno::Float4_typeof(), offsetof(ScheduleDetails, _field_CategoryColor), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleDetails::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleDetails::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ScheduleDetails::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ScheduleDetails_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 123;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(ScheduleDetails);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.ScheduleDetails", options);
    type->fp_build_ = ScheduleDetails_build;
    type->fp_cctor_ = ScheduleDetails__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
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

// public string get_Category() [instance] :40
uString* ScheduleDetails::Category()
{
    return _field_Category;
}

// public void set_Category(string value) [instance] :41
void ScheduleDetails::Category(uString* value)
{
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
    SetCategoryColor(value, NULL);
}

// public void SetCategory(string value, Uno.UX.IPropertyListener origin) [instance] :43
void ScheduleDetails::SetCategory(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Category))
    {
        _field_Category = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Category"*/]), origin);
    }
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :73
void ScheduleDetails::SetCategoryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_CategoryColor))
    {
        _field_CategoryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"CategoryColor"*/]), origin);
    }
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) [instance] :13
void ScheduleDetails::SetTime(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Time))
    {
        _field_Time = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"Time"*/]), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :58
void ScheduleDetails::SetTitle(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"Title"*/]), origin);
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
    SetTitle(value, NULL);
}
// }

}}} // ::g::Alive::ExampleApp
