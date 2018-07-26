// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.DetailsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_AliveMediaSc-1ab98145.h>
#include <_root.v2_bundle.h>
#include <_root.v2_FuseControls-95f413c5.h>
#include <Alive.Body.h>
#include <Alive.ExampleApp.Deta-2778ccaa.h>
#include <Alive.ExampleApp.Deta-4e48ba75.h>
#include <Alive.ExampleApp.DetailsPage.h>
#include <Alive.ExampleApp.TitlePanel.h>
#include <Alive.IconLabel.h>
#include <Alive.MediaScroller.h>
#include <Alive.StickingAnimation.h>
#include <Alive.StickyHeader.h>
#include <Alive.TabBar.h>
#include <Alive.TabPage.h>
#include <Alive.WithOpacityFunction.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Navigat-d5b6859a.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Shadow.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.WrapPanel.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Resource.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class DetailsPage :4
// {
// static DetailsPage() :99
static void DetailsPage__cctor_5_fn(uType* __type)
{
    DetailsPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 5, uString::Const("router"), uString::Const("sticky"), uString::Const("tabBar"), uString::Const("tabBarShadow"), uString::Const("pc"));
    DetailsPage::__selector01_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Size"));
    DetailsPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("TopBarColor"));
    DetailsPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("sticky"));
    DetailsPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("tabBar"));
    DetailsPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("tabBarShadow"));
    DetailsPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("pc"));
}

static void DetailsPage_build(uType* type)
{
    type->SetDependencies(
        ::g::v2_bundle_typeof());
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
    type->SetFields(127,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(DetailsPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(DetailsPage, tabBarShadow_Size_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(DetailsPage, temp_TopBarColor_inst), 0,
        ::g::Alive::StickyHeader_typeof(), offsetof(DetailsPage, sticky), 0,
        ::g::Alive::TabBar_typeof(), offsetof(DetailsPage, tabBar), 0,
        ::g::Fuse::Controls::Shadow_typeof(), offsetof(DetailsPage, tabBarShadow), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(DetailsPage, pc), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(DetailsPage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&DetailsPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage::__selector01_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DetailsPage__New6_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* DetailsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::Page_typeof();
    options.FieldCount = 142;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DetailsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.DetailsPage", options);
    type->fp_build_ = DetailsPage_build;
    type->fp_cctor_ = DetailsPage__cctor_5_fn;
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

// public DetailsPage(Fuse.Navigation.Router router) :103
void DetailsPage__ctor_9_fn(DetailsPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :109
void DetailsPage__InitializeUX1_fn(DetailsPage* __this)
{
    __this->InitializeUX1();
}

// public DetailsPage New(Fuse.Navigation.Router router) :103
void DetailsPage__New6_fn(::g::Fuse::Navigation::Router* router1, DetailsPage** __retval)
{
    *__retval = DetailsPage::New6(router1);
}

uSStrong<uArray*> DetailsPage::__g_static_nametable1_;
::g::Uno::UX::Selector DetailsPage::__selector01_;
::g::Uno::UX::Selector DetailsPage::__selector1_;
::g::Uno::UX::Selector DetailsPage::__selector2_;
::g::Uno::UX::Selector DetailsPage::__selector3_;
::g::Uno::UX::Selector DetailsPage::__selector4_;
::g::Uno::UX::Selector DetailsPage::__selector5_;

// public DetailsPage(Fuse.Navigation.Router router) [instance] :103
void DetailsPage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("Alive.ExampleApp.DetailsPage", ".ctor(Fuse.Navigation.Router)");
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :109
void DetailsPage::InitializeUX1()
{
    uStackFrame __("Alive.ExampleApp.DetailsPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, DetailsPage::__g_static_nametable1_);
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    pc = ::g::Fuse::Controls::PageControl::New4();
    tabBar = ::g::Alive::TabBar::New4((uObject*)pc);
    tabBarShadow = ::g::Fuse::Controls::Shadow::New2();
    tabBarShadow_Size_inst = ::g::v2_FuseControlsShadow_Size_Property::New1(tabBarShadow, DetailsPage::__selector01_);
    ::g::Fuse::Reactive::Resource* temp2 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Alive.AccentColor"));
    double temp3 = 0.7;
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(uBox(::g::Uno::Double_typeof(), temp3));
    ::g::Alive::MediaScroller* temp = ::g::Alive::MediaScroller::New5(temp1);
    temp_TopBarColor_inst = ::g::v2_AliveMediaScroller_TopBarColor_Property::New1(temp, DetailsPage::__selector1_);
    ::g::Alive::WithOpacityFunction* temp5 = ::g::Alive::WithOpacityFunction::New1(temp2, temp4);
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    DetailsPage__Template* TopBar = DetailsPage__Template::New2(this, this);
    DetailsPage__Template1* BottomBar = DetailsPage__Template1::New2(this, this);
    ::g::Alive::ExampleApp::TitlePanel* temp7 = ::g::Alive::ExampleApp::TitlePanel::New5();
    sticky = ::g::Alive::StickyHeader::New5(tabBar);
    ::g::Alive::StickingAnimation* temp8 = ::g::Alive::StickingAnimation::New3();
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), tabBarShadow_Size_inst);
    ::g::Alive::TabPage* temp10 = ::g::Alive::TabPage::New6();
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::WrapPanel* temp12 = ::g::Fuse::Controls::WrapPanel::New4();
    ::g::Alive::IconLabel* temp13 = ::g::Alive::IconLabel::New5();
    ::g::Alive::IconLabel* temp14 = ::g::Alive::IconLabel::New5();
    ::g::Alive::Body* temp15 = ::g::Alive::Body::New4();
    ::g::Alive::TabPage* temp16 = ::g::Alive::TabPage::New6();
    ::g::Alive::Body* temp17 = ::g::Alive::Body::New4();
    ::g::Alive::TabPage* temp18 = ::g::Alive::TabPage::New6();
    ::g::Alive::Body* temp19 = ::g::Alive::Body::New4();
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(temp_TopBarColor_inst, (uObject*)temp5, 3);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp6->Code(uString::Const("\n"
        "\t\texports.goBack = function() {\n"
        "\t\t\trouter.goBack();\n"
        "\t\t}\n"
        "\t"));
    temp6->LineNumber(3);
    temp6->FileName(uString::Const("Pages/DetailsPage.ux"));
    temp6->SourceLineNumber(3);
    temp6->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp->SourceLineNumber(8);
    temp->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), sticky);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), TopBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), BottomBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp20);
    temp1->SourceLineNumber(9);
    temp1->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp1->File(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::event6f2123b34()));
    temp7->SourceLineNumber(20);
    temp7->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    uPtr(sticky)->Name(DetailsPage::__selector2_);
    uPtr(sticky)->SourceLineNumber(22);
    uPtr(sticky)->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sticky)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sticky)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), pc);
    temp8->SourceLineNumber(23);
    temp8->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Animators()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL)), temp9);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, uCRef(5.0f));
    uPtr(tabBar)->Name(DetailsPage::__selector3_);
    uPtr(tabBar)->SourceLineNumber(26);
    uPtr(tabBar)->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(tabBar)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), tabBarShadow);
    uPtr(tabBarShadow)->Distance(1.0f);
    uPtr(tabBarShadow)->Size(2.0f);
    uPtr(tabBarShadow)->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.06666667f));
    uPtr(tabBarShadow)->Name(DetailsPage::__selector4_);
    uPtr(tabBarShadow)->SourceLineNumber(27);
    uPtr(tabBarShadow)->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    uPtr(pc)->InactiveState(2);
    uPtr(pc)->Name(DetailsPage::__selector5_);
    uPtr(pc)->SourceLineNumber(29);
    uPtr(pc)->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pc)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pc)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(pc)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp18);
    temp10->Label(uString::Const("Info"));
    temp10->SourceLineNumber(30);
    temp10->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    temp11->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp11->SourceLineNumber(31);
    temp11->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp15);
    temp12->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    temp12->SourceLineNumber(32);
    temp12->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp14);
    temp13->Text(uString::Const("Today - 16:00"));
    temp13->IconSize(14);
    temp13->Icon(uString::Const("\356\262\210"));
    temp13->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 20.0f, 0.0f));
    temp13->SourceLineNumber(33);
    temp13->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp14->Text(uString::Const("Building C1, Room: Root"));
    temp14->IconSize(14);
    temp14->Icon(uString::Const("\356\262\200"));
    temp14->SourceLineNumber(34);
    temp14->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp15->Value(uString::Const("Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n"
        "\n"
        "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n"
        "\n"
        "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus."));
    temp15->SourceLineNumber(36);
    temp15->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp16->Label(uString::Const("Biography"));
    temp16->SourceLineNumber(45);
    temp16->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp17);
    temp17->Value(uString::Const("Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n"
        "\n"
        "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n"
        "\n"
        "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus."));
    temp17->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp17->SourceLineNumber(46);
    temp17->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp18->Label(uString::Const("Map"));
    temp18->SourceLineNumber(54);
    temp18->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp19);
    temp19->Value(uString::Const("Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n"
        "\n"
        "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n"
        "\n"
        "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus."));
    temp19->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp19->SourceLineNumber(55);
    temp19->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp5->SourceLineNumber(8);
    temp5->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp2->SourceLineNumber(8);
    temp2->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    temp4->SourceLineNumber(8);
    temp4->SourceFileName(uString::Const("Pages/DetailsPage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), sticky);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), tabBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), tabBarShadow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), pc);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
}

// public DetailsPage New(Fuse.Navigation.Router router) [static] :103
DetailsPage* DetailsPage::New6(::g::Fuse::Navigation::Router* router1)
{
    DetailsPage* obj1 = (DetailsPage*)uNew(DetailsPage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
