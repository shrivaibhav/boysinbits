// This file was generated based on '.uno/ux15/Alive.ExampleApp.ProgramItem.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.ExampleApp.ProgramItem.h>
#include <Fuse.Resources.ImageSource.h>
#include <Uno.Bool.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[12];

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
    ::STRINGS[6] = uString::Const("CategoryColor");
    ::STRINGS[7] = uString::Const("ImageSource");
    ::STRINGS[8] = uString::Const("IsAttending");
    ::STRINGS[9] = uString::Const("Person");
    ::STRINGS[10] = uString::Const("Time");
    ::STRINGS[11] = uString::Const("Title");
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
    type->SetFields(117,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProgramItem, _field_ImageSource), 0,
        ::g::Uno::Float4_typeof(), offsetof(ProgramItem, _field_CategoryColor), 0,
        ::g::Uno::String_typeof(), offsetof(ProgramItem, _field_Time), 0,
        ::g::Uno::String_typeof(), offsetof(ProgramItem, _field_Person), 0,
        ::g::Uno::String_typeof(), offsetof(ProgramItem, _field_Title), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProgramItem, _field_IsAttending), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramItem::__selector5_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ProgramItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::DockPanel_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(ProgramItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.ProgramItem", options);
    type->fp_build_ = ProgramItem_build;
    type->fp_cctor_ = ProgramItem__cctor_4_fn;
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

// public float4 get_CategoryColor() [instance] :25
::g::Uno::Float4 ProgramItem::CategoryColor()
{
    return _field_CategoryColor;
}

// public void set_CategoryColor(float4 value) [instance] :26
void ProgramItem::CategoryColor(::g::Uno::Float4 value)
{
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
    SetImageSource(value, NULL);
}

// public bool get_IsAttending() [instance] :85
bool ProgramItem::IsAttending()
{
    return _field_IsAttending;
}

// public void set_IsAttending(bool value) [instance] :86
void ProgramItem::IsAttending(bool value)
{
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
    SetPerson(value, NULL);
}

// public void SetCategoryColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :28
void ProgramItem::SetCategoryColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_CategoryColor))
    {
        _field_CategoryColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"CategoryColor"*/]), origin);
    }
}

// public void SetImageSource(Fuse.Resources.ImageSource value, Uno.UX.IPropertyListener origin) [instance] :13
void ProgramItem::SetImageSource(::g::Fuse::Resources::ImageSource* value, uObject* origin)
{
    if (value != _field_ImageSource)
    {
        _field_ImageSource = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"ImageSource"*/]), origin);
    }
}

// public void SetIsAttending(bool value, Uno.UX.IPropertyListener origin) [instance] :88
void ProgramItem::SetIsAttending(bool value, uObject* origin)
{
    if (value != _field_IsAttending)
    {
        _field_IsAttending = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"IsAttending"*/]), origin);
    }
}

// public void SetPerson(string value, Uno.UX.IPropertyListener origin) [instance] :58
void ProgramItem::SetPerson(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Person))
    {
        _field_Person = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"Person"*/]), origin);
    }
}

// public void SetTime(string value, Uno.UX.IPropertyListener origin) [instance] :43
void ProgramItem::SetTime(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Time))
    {
        _field_Time = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Time"*/]), origin);
    }
}

// public void SetTitle(string value, Uno.UX.IPropertyListener origin) [instance] :73
void ProgramItem::SetTitle(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Title))
    {
        _field_Title = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"Title"*/]), origin);
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
    SetTitle(value, NULL);
}
// }

}}} // ::g::Alive::ExampleApp
