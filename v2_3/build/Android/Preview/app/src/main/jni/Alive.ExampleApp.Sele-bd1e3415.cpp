// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.SelectCategoryPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.ExampleApp.Cate-85c9bcae.h>
#include <Alive.ExampleApp.Sele-bd1e3415.h>
#include <Alive.NavBar.h>
#include <Alive.NavBarTitle.h>
#include <Alive.PartialTabPage.h>
#include <Alive.TabPage.h>
#include <Alive.TabPageControl.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
static uString* STRINGS[10];
static uType* TYPES[3];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SelectCategoryPage :4
// {
// static SelectCategoryPage() :11
static void SelectCategoryPage__cctor_5_fn(uType* __type)
{
    SelectCategoryPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
}

static void SelectCategoryPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("Pages/SelectCategoryPage.ux");
    ::STRINGS[2] = uString::Const("\n"
        "\t\texports.pushProgram = function() {\n"
        "\t\t\trouter.push(\"program\");\n"
        "\t\t}\n"
        "\t");
    ::STRINGS[3] = uString::Const("Select category");
    ::STRINGS[4] = uString::Const("Talks");
    ::STRINGS[5] = uString::Const("Music");
    ::STRINGS[6] = uString::Const("Exhibitions");
    ::STRINGS[7] = uString::Const("Workshops");
    ::STRINGS[8] = uString::Const("Comedy");
    ::STRINGS[9] = uString::Const("Meetups");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(127,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SelectCategoryPage, router), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SelectCategoryPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&SelectCategoryPage::__g_static_nametable1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SelectCategoryPage__New6_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* SelectCategoryPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(SelectCategoryPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.SelectCategoryPage", options);
    type->fp_build_ = SelectCategoryPage_build;
    type->fp_cctor_ = SelectCategoryPage__cctor_5_fn;
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

// public SelectCategoryPage(Fuse.Navigation.Router router) :15
void SelectCategoryPage__ctor_9_fn(SelectCategoryPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(router1);
}

// private void InitializeUX() :21
void SelectCategoryPage__InitializeUX1_fn(SelectCategoryPage* __this)
{
    __this->InitializeUX1();
}

// public SelectCategoryPage New(Fuse.Navigation.Router router) :15
void SelectCategoryPage__New6_fn(::g::Fuse::Navigation::Router* router1, SelectCategoryPage** __retval)
{
    *__retval = SelectCategoryPage::New6(router1);
}

uSStrong<uArray*> SelectCategoryPage::__g_static_nametable1_;

// public SelectCategoryPage(Fuse.Navigation.Router router) [instance] :15
void SelectCategoryPage::ctor_9(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("Alive.ExampleApp.SelectCategoryPage", ".ctor(Fuse.Navigation.Router)");
    ctor_8();
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :21
void SelectCategoryPage::InitializeUX1()
{
    uStackFrame __("Alive.ExampleApp.SelectCategoryPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SelectCategoryPage::__g_static_nametable1_);
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Alive::NavBar* temp2 = ::g::Alive::NavBar::New5();
    ::g::Alive::NavBarTitle* temp3 = ::g::Alive::NavBarTitle::New4();
    ::g::Alive::TabPageControl* temp4 = ::g::Alive::TabPageControl::New5();
    ::g::Alive::PartialTabPage* temp5 = ::g::Alive::PartialTabPage::New7();
    ::g::Alive::ExampleApp::CategoryPreviewCard* temp6 = ::g::Alive::ExampleApp::CategoryPreviewCard::New6();
    ::g::Alive::PartialTabPage* temp7 = ::g::Alive::PartialTabPage::New7();
    ::g::Alive::ExampleApp::CategoryPreviewCard* temp8 = ::g::Alive::ExampleApp::CategoryPreviewCard::New6();
    ::g::Alive::PartialTabPage* temp9 = ::g::Alive::PartialTabPage::New7();
    ::g::Alive::ExampleApp::CategoryPreviewCard* temp10 = ::g::Alive::ExampleApp::CategoryPreviewCard::New6();
    ::g::Alive::PartialTabPage* temp11 = ::g::Alive::PartialTabPage::New7();
    ::g::Alive::ExampleApp::CategoryPreviewCard* temp12 = ::g::Alive::ExampleApp::CategoryPreviewCard::New6();
    ::g::Alive::PartialTabPage* temp13 = ::g::Alive::PartialTabPage::New7();
    ::g::Alive::ExampleApp::CategoryPreviewCard* temp14 = ::g::Alive::ExampleApp::CategoryPreviewCard::New6();
    ::g::Alive::PartialTabPage* temp15 = ::g::Alive::PartialTabPage::New7();
    ::g::Alive::ExampleApp::CategoryPreviewCard* temp16 = ::g::Alive::ExampleApp::CategoryPreviewCard::New6();
    SourceLineNumber(1);
    SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp->Code(::STRINGS[2/*"\n\t\texpor...*/]);
    temp->LineNumber(4);
    temp->FileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp->SourceLineNumber(4);
    temp->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp1->SourceLineNumber(22);
    temp1->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp2->SourceLineNumber(23);
    temp2->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp2, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp3->Value(::STRINGS[3/*"Select cate...*/]);
    temp3->Alignment(10);
    temp3->SourceLineNumber(24);
    temp3->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp4->SourceLineNumber(29);
    temp4->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->SubtreeNodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp5->Label(::STRINGS[4/*"Talks"*/]);
    temp5->SourceLineNumber(30);
    temp5->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->SourceLineNumber(31);
    temp6->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp7->Label(::STRINGS[5/*"Music"*/]);
    temp7->SourceLineNumber(34);
    temp7->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->SourceLineNumber(35);
    temp8->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp9->Label(::STRINGS[6/*"Exhibitions"*/]);
    temp9->SourceLineNumber(38);
    temp9->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->SourceLineNumber(39);
    temp10->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp11->Label(::STRINGS[7/*"Workshops"*/]);
    temp11->SourceLineNumber(42);
    temp11->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    temp12->SourceLineNumber(43);
    temp12->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp13->Label(::STRINGS[8/*"Comedy"*/]);
    temp13->SourceLineNumber(46);
    temp13->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp14->SourceLineNumber(47);
    temp14->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    temp15->Label(::STRINGS[9/*"Meetups"*/]);
    temp15->SourceLineNumber(50);
    temp15->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp16->SourceLineNumber(51);
    temp16->SourceFileName(::STRINGS[1/*"Pages/Selec...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public SelectCategoryPage New(Fuse.Navigation.Router router) [static] :15
SelectCategoryPage* SelectCategoryPage::New6(::g::Fuse::Navigation::Router* router1)
{
    SelectCategoryPage* obj1 = (SelectCategoryPage*)uNew(SelectCategoryPage_typeof());
    obj1->ctor_9(router1);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
