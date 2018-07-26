// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.ProgramPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseUXKitsAlive-c03cf3e5.h>
#include <_root.v2_AliveListVie-6a8c5f95.h>
#include <_root.v2_bundle.h>
#include <_root.v2_FuseControls-44fab341.h>
#include <Alive.DarkTheme.h>
#include <Alive.ExampleApp.Prog-8717c37c.h>
#include <Alive.ExampleApp.Prog-aac72047.h>
#include <Alive.ExampleApp.ProgramPage.h>
#include <Alive.IconLabel.h>
#include <Alive.ListView.h>
#include <Alive.MediaScroller.h>
#include <Alive.StickyHeader.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Resource.h>
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

// public partial sealed class ProgramPage :4
// {
// static ProgramPage() :168
static void ProgramPage__cctor_5_fn(uType* __type)
{
    ProgramPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 1, uString::Const("router"));
    ProgramPage::__selector01_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
    ProgramPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
}

static void ProgramPage_build(uType* type)
{
    type->SetDependencies(
        ::g::FuseUXKitsAlive_ColorPalette_res_typeof(),
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
    type->SetFields(123,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(ProgramPage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ProgramPage, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(ProgramPage, temp1_Items_inst), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ProgramPage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&ProgramPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage::__selector01_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* ProgramPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ProgramPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.ProgramPage", options);
    type->fp_build_ = ProgramPage_build;
    type->fp_cctor_ = ProgramPage__cctor_5_fn;
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

// public ProgramPage(Fuse.Navigation.Router router) :172
void ProgramPage__ctor_9_fn(ProgramPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :178
void ProgramPage__InitializeUX1_fn(ProgramPage* __this)
{
    __this->InitializeUX1();
}

// public ProgramPage New(Fuse.Navigation.Router router) :172
void ProgramPage__New6_fn(::g::Fuse::Navigation::Router* router1, ProgramPage** __retval)
{
    *__retval = ProgramPage::New6(router1);
}

uSStrong<uArray*> ProgramPage::__g_static_nametable1_;
::g::Uno::UX::Selector ProgramPage::__selector01_;
::g::Uno::UX::Selector ProgramPage::__selector1_;

// public ProgramPage(Fuse.Navigation.Router router) [instance] :172
void ProgramPage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :178
void ProgramPage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ProgramPage::__g_static_nametable1_);
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp = ::g::Fuse::Controls::Panel::New3();
    temp_Color_inst = ::g::v2_FuseControlsPanel_Color_Property::New1(temp, ProgramPage::__selector01_);
    ::g::Fuse::Reactive::Resource* temp3 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Alive.AccentColor"));
    ::g::Alive::ListView* temp1 = ::g::Alive::ListView::New5();
    temp1_Items_inst = ::g::v2_AliveListView_Items_Property::New1(temp1, ProgramPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(uString::Const("items"));
    ::g::Fuse::Reactive::JavaScript* temp5 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Alive::MediaScroller* temp6 = ::g::Alive::MediaScroller::New5(temp2);
    ProgramPage__Template* TopBar = ProgramPage__Template::New2(this, this);
    ::g::Alive::StickyHeader* temp7 = ::g::Alive::StickyHeader::New5(temp);
    ::g::Alive::DarkTheme* temp8 = ::g::Alive::DarkTheme::New4();
    ::g::Fuse::Controls::DockPanel* temp9 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Alive::IconLabel* temp10 = ::g::Alive::IconLabel::New5();
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::StackPanel* temp12 = ::g::Fuse::Controls::StackPanel::New4();
    ProgramPage__Template1* item = ProgramPage__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp4, 3);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    temp5->Code(uString::Const("\n"
        "\t\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\t\tvar events = Observable(\n"
        "\t\t\t{\n"
        "\t\t\t\timage: \"Assets/event1.jpg\",\n"
        "\t\t\t\tcategoryColor: \"Alive.Red\",\n"
        "\t\t\t\ttime: \"Today - 09:00\",\n"
        "\t\t\t\tperson: \"Bernard Guber\",\n"
        "\t\t\t\ttitle: \"Design better with less distractions\",\n"
        "\t\t\t\tattending: Observable(false)\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\timage: \"Assets/event2.jpg\",\n"
        "\t\t\t\tcategoryColor: \"Alive.Yellow\",\n"
        "\t\t\t\ttime: \"Today - 09:00\",\n"
        "\t\t\t\tperson: \"Serena Hitcher\",\n"
        "\t\t\t\ttitle: \"Why AI is working and I'm not!\",\n"
        "\t\t\t\tattending: Observable(false)\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\timage: \"Assets/event3.jpg\",\n"
        "\t\t\t\tcategoryColor: \"Alive.Yellow\",\n"
        "\t\t\t\ttime: \"Today - 09:00\",\n"
        "\t\t\t\tperson: \"Mark Spencer\",\n"
        "\t\t\t\ttitle: \"Upwards and onwards\",\n"
        "\t\t\t\tattending: Observable(false)\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\timage: \"Assets/event4.jpg\",\n"
        "\t\t\t\tcategoryColor: \"Alive.Red\",\n"
        "\t\t\t\ttime: \"Today - 10:00\",\n"
        "\t\t\t\tperson: \"Lydia\tManning\",\n"
        "\t\t\t\ttitle: \"Why women are taking over important positions in society\",\n"
        "\t\t\t\tattending: Observable(false)\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\timage: \"Assets/event5.jpg\",\n"
        "\t\t\t\tcategoryColor: \"Alive.Red\",\n"
        "\t\t\t\ttime: \"Today - 10:00\",\n"
        "\t\t\t\tperson: \"Jenny Hook\",\n"
        "\t\t\t\ttitle: \"Why I used to be stupid\",\n"
        "\t\t\t\tattending: Observable(false)\n"
        "\t\t\t}\n"
        "\t\t);\n"
        "\n"
        "\t\tfunction attendEvent(args) {\n"
        "\t\t\targs.data.attending.value = true;\n"
        "\t\t}\n"
        "\t\n"
        "\t\tfunction pushDetails() {\n"
        "\t\t\trouter.push(\"details\");\n"
        "\t\t}\n"
        "\t\t\n"
        "\t\tfunction goBack(){\n"
        "\t\t\trouter.push(\"schedule\");\n"
        "\t\t}\n"
        "\t\t\n"
        "\t\tmodule.exports = {\n"
        "\t\t\titems: events,\n"
        "\t\t\tattendEvent: attendEvent,\n"
        "\t\t\tpushDetails: pushDetails,\n"
        "\t\t\tgoBack : goBack\n"
        "\t\t}\n"
        "\t"));
    temp5->LineNumber(4);
    temp5->FileName(uString::Const("Pages/ProgramPage.ux"));
    temp5->SourceLineNumber(4);
    temp5->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    temp6->TopBarColor(::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkPrimaryBackgroundColor());
    temp6->SourceLineNumber(70);
    temp6->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->SubtreeNodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), TopBar);
    temp2->StretchMode(6);
    temp2->SourceLineNumber(78);
    temp2->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::event482692597()));
    temp7->SourceLineNumber(80);
    temp7->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    temp->SourceLineNumber(81);
    temp->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp11);
    temp8->SourceLineNumber(82);
    temp8->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    temp9->Margin(::g::Uno::Float4__New2(25.0f, 20.0f, 25.0f, 20.0f));
    temp9->SourceLineNumber(83);
    temp9->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    temp10->Text(uString::Const("Devices"));
    temp10->Icon(uString::Const("\356\251\206"));
    temp10->Alignment(1);
    temp10->SourceLineNumber(84);
    temp10->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    temp3->SourceLineNumber(81);
    temp3->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    temp12->SourceLineNumber(94);
    temp12->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp1->SourceLineNumber(95);
    temp1->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), item);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp13);
    temp4->SourceLineNumber(95);
    temp4->SourceFileName(uString::Const("Pages/ProgramPage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
}

// public ProgramPage New(Fuse.Navigation.Router router) [static] :172
ProgramPage* ProgramPage::New6(::g::Fuse::Navigation::Router* router1)
{
    ProgramPage* obj1 = (ProgramPage*)uNew(ProgramPage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
