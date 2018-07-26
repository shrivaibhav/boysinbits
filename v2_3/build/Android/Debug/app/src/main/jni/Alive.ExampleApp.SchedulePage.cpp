// This file was generated based on '.uno/ux15/Alive.ExampleApp.SchedulePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseUXKitsAlive-c03cf3e5.h>
#include <_root.v2_bundle.h>
#include <_root.v2_FuseReactive-8336d018.h>
#include <Alive.DarkTheme.h>
#include <Alive.Drawer.h>
#include <Alive.ExampleApp.DrawerItem.h>
#include <Alive.ExampleApp.Sche-9607b66f.h>
#include <Alive.ExampleApp.Sche-9607b670.h>
#include <Alive.ExampleApp.Sche-acbacbde.h>
#include <Alive.ExampleApp.SchedulePage.h>
#include <Alive.MediaScroller.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage :4
// {
// static SchedulePage() :195
static void SchedulePage__cctor_5_fn(uType* __type)
{
    ::g::v2_bundle_typeof()->Init();
    ::g::Uno::UX::Resource_typeof()->Init();
    SchedulePage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 5, uString::Const("router"), uString::Const("drawer"), uString::Const("temp_eb7"), uString::Const("temp_eb8"), uString::Const("temp_eb9"));
    SchedulePage::__selector01_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
    SchedulePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("drawer"));
    SchedulePage::oswald_ = ::g::Fuse::Font::New2(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::OswaldMedium386db168()));
    ::g::Uno::UX::Resource::SetGlobalKey(SchedulePage::oswald_, uString::Const("oswald"));
}

static void SchedulePage_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::FuseUXKitsAlive_ColorPalette_res_typeof());
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
    type->SetFields(123,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SchedulePage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(SchedulePage, temp_Items_inst), 0,
        ::g::Alive::Drawer_typeof(), offsetof(SchedulePage, drawer), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SchedulePage, temp_eb7), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SchedulePage, temp_eb8), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SchedulePage, temp_eb9), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SchedulePage, __g_nametable1), 0,
        ::g::Fuse::Font_typeof(), (uintptr_t)&SchedulePage::oswald_, uFieldFlagsStatic,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&SchedulePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage::__selector01_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SchedulePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::Page_typeof();
    options.FieldCount = 134;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SchedulePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.SchedulePage", options);
    type->fp_build_ = SchedulePage_build;
    type->fp_cctor_ = SchedulePage__cctor_5_fn;
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

// public SchedulePage(Fuse.Navigation.Router router) :201
void SchedulePage__ctor_9_fn(SchedulePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :207
void SchedulePage__InitializeUX1_fn(SchedulePage* __this)
{
    __this->InitializeUX1();
}

// public SchedulePage New(Fuse.Navigation.Router router) :201
void SchedulePage__New6_fn(::g::Fuse::Navigation::Router* router1, SchedulePage** __retval)
{
    *__retval = SchedulePage::New6(router1);
}

uSStrong< ::g::Fuse::Font*> SchedulePage::oswald_;
uSStrong<uArray*> SchedulePage::__g_static_nametable1_;
::g::Uno::UX::Selector SchedulePage::__selector01_;
::g::Uno::UX::Selector SchedulePage::__selector1_;

// public SchedulePage(Fuse.Navigation.Router router) [instance] :201
void SchedulePage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :207
void SchedulePage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SchedulePage::__g_static_nametable1_);
    ::g::Fuse::Controls::StackPanel* temp1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToSchedule"));
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToSettings"));
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("goToLogout"));
    ::g::Fuse::Controls::StackPanel* temp5 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::v2_FuseReactiveEach_Items_Property::New1(temp, SchedulePage::__selector01_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(uString::Const("installedAppliances"));
    ::g::Fuse::Reactive::JavaScript* temp7 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    drawer = ::g::Alive::Drawer::New5(temp1);
    ::g::Alive::ExampleApp::DrawerItem* temp8 = ::g::Alive::ExampleApp::DrawerItem::New4();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Alive::ExampleApp::DrawerItem* temp9 = ::g::Alive::ExampleApp::DrawerItem::New4();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Alive::ExampleApp::DrawerItem* temp10 = ::g::Alive::ExampleApp::DrawerItem::New4();
    temp_eb9 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Alive::MediaScroller* temp11 = ::g::Alive::MediaScroller::New5(temp5);
    SchedulePage__Template* TopBar = SchedulePage__Template::New2(this, this);
    ::g::Alive::DarkTheme* temp12 = ::g::Alive::DarkTheme::New4();
    SchedulePage__Template1* MediaOverlay = SchedulePage__Template1::New2(this, this);
    ::g::Fuse::Controls::Grid* temp13 = ::g::Fuse::Controls::Grid::New4();
    SchedulePage__Template2* temp14 = SchedulePage__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp6, 3);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp7->Code(uString::Const("\n"
        "\tvar Observable = require('FuseJS/Observable');\n"
        "\n"
        "\texports.pushDetails = function() {\n"
        "\t\trouter.push(\"details\");\n"
        "\t}\n"
        "\t\n"
        "\n"
        "\texports.logoutClicked = function(){\n"
        "\t\trouter.push(\"SignIn\");\n"
        "\t}\n"
        "\t\n"
        "\n"
        "\t////////////////////////////////\n"
        "\tvar installedAppliances=Observable();\n"
        "\tfetch(\"https://api.mlab.com/api/1/databases/hardware/collections/V2Devices?apiKey=Qd1BYa9Hpu9HUixPA76rEmmHyFuVqvop\")\n"
        "\t\t.then(function(result){\n"
        "\t\t\tresult.json().then(function(data){\n"
        "\n"
        "\t\t\t\tvar k=data.length;\n"
        "\t\t\t\tconsole.log(k);\n"
        "\t\t\t\tfor(var i=0; i<=k; i++){\n"
        "\t\t\t\t\tif(data[i].clientID==\"987766\"){\n"
        "\t\t\t\t\t\tconsole.log(data[i].deviceType);\n"
        "\t\t\t\t\t\tvar item=data[i];\n"
        "\t\t\t\t\t\tinstalledAppliances.add(item);\n"
        "\t\t\t\t\n"
        "\t\t\t\t\t}\n"
        "\t\t\t\t\t\n"
        "\t\t\t\t}\n"
        "\n"
        "\t\t\t\t\n"
        "\t\t\t})\n"
        "\t\t})\n"
        "\t//////////////////////////////////////\n"
        "\tvar deviceType=Observable();\n"
        "\tfunction deviceClicked(e){\n"
        "\t\tdeviceType.value=e.data.deviceType;\n"
        "\t\tvar id=deviceType.value\n"
        "\t\t//console.log(id);\n"
        "\t\t\n"
        "\t\trouter.goto(\"Device\", {selectedDevice:id})\n"
        "\n"
        "\t}\n"
        "\tmodule.exports={\n"
        "\t\tinstalledAppliances:installedAppliances,\n"
        "\t\tdeviceClicked:deviceClicked\n"
        "\t}\n"
        "\t//////////////////////////////////\n"
        "\n"
        "\n"
        "\n"
        "\t"));
    temp7->LineNumber(5);
    temp7->FileName(uString::Const("Pages/SchedulePage.ux"));
    temp7->SourceLineNumber(5);
    temp7->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    uPtr(drawer)->Alignment(0);
    uPtr(drawer)->Name(SchedulePage::__selector1_);
    uPtr(drawer)->SourceLineNumber(58);
    uPtr(drawer)->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(drawer)->SubtreeNodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp11);
    temp1->SourceLineNumber(59);
    temp1->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp8->Text(uString::Const("My Home"));
    temp8->SourceLineNumber(60);
    temp8->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp8, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb7);
    temp2->SourceLineNumber(60);
    temp2->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp9->Text(uString::Const("Settings"));
    temp9->SourceLineNumber(61);
    temp9->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp9, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb8);
    temp3->SourceLineNumber(61);
    temp3->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp10->Text(uString::Const("Logout"));
    temp10->SourceLineNumber(62);
    temp10->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp10, uDelegate::New(::g::Fuse::Gestures::ClickedHandler_typeof(), (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb9)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp_eb9);
    temp4->SourceLineNumber(62);
    temp4->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp11->TopBarColor(::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkPrimaryBackgroundColor());
    temp11->SourceLineNumber(118);
    temp11->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->SubtreeNodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), TopBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), MediaOverlay);
    temp5->Color(::g::Fuse::Drawing::Colors::Black());
    temp5->SourceLineNumber(130);
    temp5->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    temp12->SourceLineNumber(131);
    temp12->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp13->RowCount(3);
    temp13->ColumnCount(3);
    temp13->Color(::g::Fuse::Drawing::Colors::Black());
    temp13->SourceLineNumber(142);
    temp13->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp);
    temp->SourceLineNumber(143);
    temp->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp15);
    temp6->SourceLineNumber(143);
    temp6->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), drawer);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), temp_eb9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), drawer);
}

// public SchedulePage New(Fuse.Navigation.Router router) [static] :201
SchedulePage* SchedulePage::New6(::g::Fuse::Navigation::Router* router1)
{
    SchedulePage* obj1 = (SchedulePage*)uNew(SchedulePage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
