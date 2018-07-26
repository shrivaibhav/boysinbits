// This file was generated based on '.uno/ux15/vaibhav.myDrawer.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <vaibhav.myDrawer.h>
static uString* STRINGS[12];
static uType* TYPES[1];

namespace g{
namespace vaibhav{

// public partial sealed class myDrawer :4
// {
// static myDrawer() :44
static void myDrawer__cctor_4_fn(uType* __type)
{
    myDrawer::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[0/*"Menu"*/], ::STRINGS[1/*"navPanel"*/], ::STRINGS[2/*"shadow"*/], ::STRINGS[3/*"menuBtn"*/], ::STRINGS[4/*"temp_eb5"*/], ::STRINGS[5/*"temp_eb6"*/]);
    myDrawer::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"HideButton"*/]);
    myDrawer::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"Opacity"*/]);
    myDrawer::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"Value"*/]);
    myDrawer::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"Distance"*/]);
    myDrawer::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Size"*/]);
    myDrawer::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[11/*"Color"*/]);
    myDrawer::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"navPanel"*/]);
    myDrawer::__selector7_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"shadow"*/]);
    myDrawer::__selector8_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"menuBtn"*/]);
}

static void myDrawer_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Menu");
    ::STRINGS[1] = uString::Const("navPanel");
    ::STRINGS[2] = uString::Const("shadow");
    ::STRINGS[3] = uString::Const("menuBtn");
    ::STRINGS[4] = uString::Const("temp_eb5");
    ::STRINGS[5] = uString::Const("temp_eb6");
    ::STRINGS[6] = uString::Const("HideButton");
    ::STRINGS[7] = uString::Const("Opacity");
    ::STRINGS[8] = uString::Const("Value");
    ::STRINGS[9] = uString::Const("Distance");
    ::STRINGS[10] = uString::Const("Size");
    ::STRINGS[11] = uString::Const("Color");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
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
    type->SetFields(118,
        ::g::Uno::Bool_typeof(), offsetof(myDrawer, _field_HideButton), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&myDrawer::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&myDrawer::__selector8_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* myDrawer_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Container_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(myDrawer);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("vaibhav.myDrawer", options);
    type->fp_build_ = myDrawer_build;
    type->fp_cctor_ = myDrawer__cctor_4_fn;
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

// public bool get_HideButton() :10
void myDrawer__get_HideButton_fn(myDrawer* __this, bool* __retval)
{
    *__retval = __this->HideButton();
}

// public void set_HideButton(bool value) :11
void myDrawer__set_HideButton_fn(myDrawer* __this, bool* value)
{
    __this->HideButton(*value);
}

// public void SetHideButton(bool value, Uno.UX.IPropertyListener origin) :13
void myDrawer__SetHideButton_fn(myDrawer* __this, bool* value, uObject* origin)
{
    __this->SetHideButton(*value, origin);
}

uSStrong<uArray*> myDrawer::__g_static_nametable1_;
::g::Uno::UX::Selector myDrawer::__selector0_;
::g::Uno::UX::Selector myDrawer::__selector1_;
::g::Uno::UX::Selector myDrawer::__selector2_;
::g::Uno::UX::Selector myDrawer::__selector3_;
::g::Uno::UX::Selector myDrawer::__selector4_;
::g::Uno::UX::Selector myDrawer::__selector5_;
::g::Uno::UX::Selector myDrawer::__selector6_;
::g::Uno::UX::Selector myDrawer::__selector7_;
::g::Uno::UX::Selector myDrawer::__selector8_;

// public bool get_HideButton() [instance] :10
bool myDrawer::HideButton()
{
    return _field_HideButton;
}

// public void set_HideButton(bool value) [instance] :11
void myDrawer::HideButton(bool value)
{
    SetHideButton(value, NULL);
}

// public void SetHideButton(bool value, Uno.UX.IPropertyListener origin) [instance] :13
void myDrawer::SetHideButton(bool value, uObject* origin)
{
    if (value != _field_HideButton)
    {
        _field_HideButton = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"HideButton"*/]), origin);
    }
}
// }

}} // ::g::vaibhav
