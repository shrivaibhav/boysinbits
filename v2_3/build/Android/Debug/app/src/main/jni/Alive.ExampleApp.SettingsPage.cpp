// This file was generated based on '.uno/ux15/Alive.ExampleApp.SettingsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Fus-b69b6d03.h>
#include <_root.v2_FuseControls-24d2ba35.h>
#include <_root.v2_FuseControls-7e09ac16.h>
#include <_root.v2_FuseControls-ce0b45cc.h>
#include <Alive.CallToActionButton.h>
#include <Alive.Card.h>
#include <Alive.CardMedia.h>
#include <Alive.DarkTheme.h>
#include <Alive.ExampleApp.SettingsPage.h>
#include <Alive.SettingsMenuItem.h>
#include <Alive.Slider.h>
#include <Alive.Switch.h>
#include <Alive.ThemedCard.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Reactive.Resource.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[9];
static uType* TYPES[2];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SettingsPage :4
// {
// static SettingsPage() :10
static void SettingsPage__cctor_5_fn(uType* __type)
{
    SettingsPage::__selector01_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
    SettingsPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Color"*/]);
    SettingsPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"slider1"*/]);
}

static void SettingsPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Color");
    ::STRINGS[2] = uString::Const("slider1");
    ::STRINGS[3] = uString::Const("darkThemeEnabled");
    ::STRINGS[4] = uString::Const("Alive.SecondaryBackgroundColor");
    ::STRINGS[5] = uString::Const("Pages/SettingsPage.ux");
    ::STRINGS[6] = uString::Const("Enable dark theme");
    ::STRINGS[7] = uString::Const("1*,1*");
    ::STRINGS[8] = uString::Const("A button");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::v2_accessor_Fuse_Controls_RangeControl_Value_typeof());
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
    type->SetFields(123,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(SettingsPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SettingsPage, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL), offsetof(SettingsPage, temp2_Value_inst), 0,
        ::g::Alive::Slider_typeof(), offsetof(SettingsPage, slider1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SettingsPage::__selector01_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SettingsPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SettingsPage::__selector2_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SettingsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SettingsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.SettingsPage", options);
    type->fp_build_ = SettingsPage_build;
    type->fp_ctor_ = (void*)SettingsPage__New6_fn;
    type->fp_cctor_ = SettingsPage__cctor_5_fn;
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

// public SettingsPage() :14
void SettingsPage__ctor_9_fn(SettingsPage* __this)
{
    __this->ctor_9();
}

// private void InitializeUX() :18
void SettingsPage__InitializeUX1_fn(SettingsPage* __this)
{
    __this->InitializeUX1();
}

// public SettingsPage New() :14
void SettingsPage__New6_fn(SettingsPage** __retval)
{
    *__retval = SettingsPage::New6();
}

::g::Uno::UX::Selector SettingsPage::__selector01_;
::g::Uno::UX::Selector SettingsPage::__selector1_;
::g::Uno::UX::Selector SettingsPage::__selector2_;

// public SettingsPage() [instance] :14
void SettingsPage::ctor_9()
{
    ctor_8();
    InitializeUX1();
}

// private void InitializeUX() [instance] :18
void SettingsPage::InitializeUX1()
{
    ::g::Alive::Switch* temp = ::g::Alive::Switch::New5();
    temp_Value_inst = ::g::v2_FuseControlsToggleControl_Value_Property::New1(temp, SettingsPage::__selector01_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"darkThemeEn...*/]);
    ::g::Alive::CardMedia* temp1 = ::g::Alive::CardMedia::New4();
    temp1_Color_inst = ::g::v2_FuseControlsShape_Color_Property::New1(temp1, SettingsPage::__selector1_);
    ::g::Fuse::Reactive::Resource* temp4 = ::g::Fuse::Reactive::Resource::New1(::STRINGS[4/*"Alive.Secon...*/]);
    slider1 = ::g::Alive::Slider::New5();
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(slider1);
    ::g::Alive::Slider* temp2 = ::g::Alive::Slider::New5();
    temp2_Value_inst = ::g::v2_FuseControlsRangeControl_Value_Property::New1(temp2, SettingsPage::__selector01_);
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::v2_accessor_Fuse_Controls_RangeControl_Value::Singleton());
    ::g::Fuse::Controls::ScrollView* temp7 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp8 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Alive::SettingsMenuItem* temp10 = ::g::Alive::SettingsMenuItem::New6();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::Grid* temp12 = ::g::Fuse::Controls::Grid::New4();
    ::g::Alive::Card* temp13 = ::g::Alive::Card::New5();
    ::g::Fuse::Controls::StackPanel* temp14 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Alive::Switch* temp15 = ::g::Alive::Switch::New5();
    ::g::Alive::Switch* temp16 = ::g::Alive::Switch::New5();
    ::g::Alive::ThemedCard* temp17 = ::g::Alive::ThemedCard::New4();
    ::g::Alive::DarkTheme* temp18 = ::g::Alive::DarkTheme::New4();
    ::g::Fuse::Controls::StackPanel* temp19 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Alive::Switch* temp20 = ::g::Alive::Switch::New5();
    ::g::Alive::Switch* temp21 = ::g::Alive::Switch::New5();
    ::g::Alive::Card* temp22 = ::g::Alive::Card::New5();
    ::g::Fuse::Layouts::StackLayout* temp23 = ::g::Fuse::Layouts::StackLayout::New2();
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Color_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Value_inst, (uObject*)temp6, 3);
    ::g::Alive::CallToActionButton* temp26 = ::g::Alive::CallToActionButton::New4();
    SourceLineNumber(1);
    SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp7->SourceLineNumber(10);
    temp7->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->SourceLineNumber(11);
    temp8->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp9->ItemSpacing(15.0f);
    temp9->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp9->SourceLineNumber(12);
    temp9->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    temp10->Label(::STRINGS[6/*"Enable dark...*/]);
    temp10->SourceLineNumber(13);
    temp10->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->Alignment(10);
    temp->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp->SourceLineNumber(14);
    temp->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    temp3->SourceLineNumber(14);
    temp3->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp12->Columns(::STRINGS[7/*"1*,1*"*/]);
    temp12->CellSpacing(15.0f);
    temp12->SourceLineNumber(17);
    temp12->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    temp13->SourceLineNumber(18);
    temp13->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->ItemSpacing(15.0f);
    temp14->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp14->SourceLineNumber(19);
    temp14->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp15->Value(true);
    temp15->Alignment(10);
    temp15->SourceLineNumber(20);
    temp15->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp16->Alignment(10);
    temp16->SourceLineNumber(21);
    temp16->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp17->SourceLineNumber(25);
    temp17->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    temp18->SourceLineNumber(26);
    temp18->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp19->ItemSpacing(15.0f);
    temp19->Margin(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp19->SourceLineNumber(27);
    temp19->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    temp20->Value(true);
    temp20->Alignment(10);
    temp20->SourceLineNumber(28);
    temp20->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp21->Alignment(10);
    temp21->SourceLineNumber(29);
    temp21->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp22->SourceLineNumber(34);
    temp22->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp22->Layout(temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp22->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp23->SourceLineNumber(35);
    temp23->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp1->SourceLineNumber(36);
    temp1->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), slider1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    uPtr(slider1)->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    uPtr(slider1)->Name(SettingsPage::__selector2_);
    uPtr(slider1)->SourceLineNumber(37);
    uPtr(slider1)->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp4->SourceLineNumber(36);
    temp4->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp2->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    temp2->SourceLineNumber(40);
    temp2->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    temp6->SourceLineNumber(40);
    temp6->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp5->SourceLineNumber(40);
    temp5->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    temp26->Text(::STRINGS[8/*"A button"*/]);
    temp26->Glow(true);
    temp26->SourceLineNumber(43);
    temp26->SourceFileName(::STRINGS[5/*"Pages/Setti...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
}

// public SettingsPage New() [static] :14
SettingsPage* SettingsPage::New6()
{
    SettingsPage* obj1 = (SettingsPage*)uNew(SettingsPage_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
