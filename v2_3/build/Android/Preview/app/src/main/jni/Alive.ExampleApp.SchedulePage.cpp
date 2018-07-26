// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.SchedulePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseUXKitsAlive-c03cf3e5.h>
#include <_root.v2_FuseControls-44fab341.h>
#include <Alive.DarkTheme.h>
#include <Alive.Drawer.h>
#include <Alive.ExampleApp.Sche-9607b66f.h>
#include <Alive.ExampleApp.Sche-9607b670.h>
#include <Alive.ExampleApp.Sche-acbacbde.h>
#include <Alive.ExampleApp.SchedulePage.h>
#include <Alive.MediaScroller.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Resource.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage :4
// {
// static SchedulePage() :143
static void SchedulePage__cctor_5_fn(uType* __type)
{
    SchedulePage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 2, uString::Const("drawer"), uString::Const("router"));
    SchedulePage::__selector01_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Color"));
}

static void SchedulePage_build(uType* type)
{
    type->SetDependencies(
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
    type->SetFields(127,
        ::g::Alive::Drawer_typeof(), offsetof(SchedulePage, drawer), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SchedulePage, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SchedulePage, temp_Color_inst), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SchedulePage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&SchedulePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage::__selector01_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SchedulePage__New6_fn, 0, true, type, 2, ::g::Alive::Drawer_typeof(), ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* SchedulePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::Page_typeof();
    options.FieldCount = 133;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
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

// public SchedulePage(Alive.Drawer drawer, Fuse.Navigation.Router router) :147
void SchedulePage__ctor_9_fn(SchedulePage* __this, ::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_9(drawer1, router1);
}

// private void InitializeUX() :155
void SchedulePage__InitializeUX1_fn(SchedulePage* __this)
{
    __this->InitializeUX1();
}

// public SchedulePage New(Alive.Drawer drawer, Fuse.Navigation.Router router) :147
void SchedulePage__New6_fn(::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1, SchedulePage** __retval)
{
    *__retval = SchedulePage::New6(drawer1, router1);
}

uSStrong<uArray*> SchedulePage::__g_static_nametable1_;
::g::Uno::UX::Selector SchedulePage::__selector01_;

// public SchedulePage(Alive.Drawer drawer, Fuse.Navigation.Router router) [instance] :147
void SchedulePage::ctor_9(::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("Alive.ExampleApp.SchedulePage", ".ctor(Alive.Drawer,Fuse.Navigation.Router)");
    ctor_8();
    drawer = drawer1;
    router = router1;
    InitializeUX1();
}

// private void InitializeUX() [instance] :155
void SchedulePage::InitializeUX1()
{
    uStackFrame __("Alive.ExampleApp.SchedulePage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SchedulePage::__g_static_nametable1_);
    ::g::Fuse::Controls::StackPanel* temp = ::g::Fuse::Controls::StackPanel::New4();
    temp_Color_inst = ::g::v2_FuseControlsPanel_Color_Property::New1(temp, SchedulePage::__selector01_);
    ::g::Fuse::Reactive::Resource* temp1 = ::g::Fuse::Reactive::Resource::New1(uString::Const("Alive.PrimaryBackgroundColor"));
    ::g::Fuse::Reactive::JavaScript* temp2 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Alive::MediaScroller* temp3 = ::g::Alive::MediaScroller::New5(temp);
    SchedulePage__Template* TopBar = SchedulePage__Template::New2(this, this);
    ::g::Alive::DarkTheme* temp4 = ::g::Alive::DarkTheme::New4();
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp1, 3);
    SchedulePage__Template1* MediaOverlay = SchedulePage__Template1::New2(this, this);
    ::g::Fuse::Controls::Grid* temp6 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Each* temp7 = ::g::Fuse::Reactive::Each::New4();
    SchedulePage__Template2* temp8 = SchedulePage__Template2::New2(this, this);
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp2->Code(uString::Const("\n"
        "\tvar Observable = require('FuseJS/Observable');\n"
        "\n"
        "\tfunction ScheduleDay(day, color, items) {\n"
        "\t\tvar self = this;\n"
        "\n"
        "\t\tself.day = day;\n"
        "\t\tself.color = color;\n"
        "\t\tself.items = Observable(items).expand();\n"
        "\t\tself.removeScheduleItem = function(arg) {\n"
        "\t\t\tself.items.remove(arg.data);\n"
        "\t\t}\n"
        "\t}\n"
        "\n"
        "\texports.pushDetails = function() {\n"
        "\t\trouter.push(\"details\");\n"
        "\t}\n"
        "\texports.pushProgram = function() {\n"
        "\t\trouter.push(\"program\");\n"
        "\t}\n"
        "\n"
        "\texports.schedulesByDay = Observable(\n"
        "\t\tnew ScheduleDay(\"Today\", \"Alive.Red\", [\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n"
        "\t\t\t\tday: \"Friday\",\n"
        "\t\t\t\ttime: '19:00',\n"
        "\t\t\t\tcategory: 'Meetup',\n"
        "\t\t\t\tcategoryColor: 'Alive.Red'\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Katakombe, Scene blue\",\n"
        "\t\t\t\tday: \"Tomorrow\",\n"
        "\t\t\t\ttime: '22:00',\n"
        "\t\t\t\tcategory: 'Concert',\n"
        "\t\t\t\tcategoryColor: 'Alive.Blue'\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n"
        "\t\t\t\tday: \"Friday\",\n"
        "\t\t\t\ttime: '14:00',\n"
        "\t\t\t\tcategory: 'Talk',\n"
        "\t\t\t\tcategoryColor: 'Alive.Orange'\n"
        "\t\t\t},\n"
        "\t\t]),\n"
        "\t\tnew ScheduleDay(\"Tomorrow\", \"Alive.Orange\", [\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Katakombe, Scene blue\",\n"
        "\t\t\t\tday: \"Tomorrow\",\n"
        "\t\t\t\ttime: '22:00',\n"
        "\t\t\t\tcategory: 'Concert',\n"
        "\t\t\t\tcategoryColor: 'Alive.Blue'\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n"
        "\t\t\t\tday: \"Friday\",\n"
        "\t\t\t\ttime: '14:00',\n"
        "\t\t\t\tcategory: 'Talk',\n"
        "\t\t\t\tcategoryColor: 'Alive.Orange'\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n"
        "\t\t\t\tday: \"Friday\",\n"
        "\t\t\t\ttime: '19:00',\n"
        "\t\t\t\tcategory: 'Meetup',\n"
        "\t\t\t\tcategoryColor: 'Alive.Red'\n"
        "\t\t\t},\n"
        "\t\t]),\n"
        "\t\tnew ScheduleDay(\"Friday\", \"Alive.Blue\", [\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n"
        "\t\t\t\tday: \"Friday\",\n"
        "\t\t\t\ttime: '14:00',\n"
        "\t\t\t\tcategory: 'Talk',\n"
        "\t\t\t\tcategoryColor: 'Alive.Orange'\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n"
        "\t\t\t\tday: \"Friday\",\n"
        "\t\t\t\ttime: '14:00',\n"
        "\t\t\t\tcategory: 'Talk',\n"
        "\t\t\t\tcategoryColor: 'Alive.Orange'\n"
        "\t\t\t},\n"
        "\t\t\t{\n"
        "\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n"
        "\t\t\t\tday: \"Friday\",\n"
        "\t\t\t\ttime: '19:00',\n"
        "\t\t\t\tcategory: 'Meetup',\n"
        "\t\t\t\tcategoryColor: 'Alive.Red'\n"
        "\t\t\t},\n"
        "\t\t])\n"
        "\t);\n"
        "\t\t"));
    temp2->LineNumber(5);
    temp2->FileName(uString::Const("Pages/SchedulePage.ux"));
    temp2->SourceLineNumber(5);
    temp2->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp3->TopBarColor(::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkPrimaryBackgroundColor());
    temp3->SourceLineNumber(174);
    temp3->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->SubtreeNodes()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), TopBar);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), MediaOverlay);
    temp->SourceLineNumber(185);
    temp->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp5);
    temp4->SourceLineNumber(186);
    temp4->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp1->SourceLineNumber(185);
    temp1->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    temp6->RowCount(3);
    temp6->ColumnCount(3);
    temp6->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveDarkPrimaryBackgroundColor());
    temp6->SourceLineNumber(197);
    temp6->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    temp7->Count(9);
    temp7->SourceLineNumber(198);
    temp7->SourceFileName(uString::Const("Pages/SchedulePage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), temp8);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), drawer);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL)), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp3);
}

// public SchedulePage New(Alive.Drawer drawer, Fuse.Navigation.Router router) [static] :147
SchedulePage* SchedulePage::New6(::g::Alive::Drawer* drawer1, ::g::Fuse::Navigation::Router* router1)
{
    SchedulePage* obj1 = (SchedulePage*)uNew(SchedulePage_typeof());
    obj1->ctor_9(drawer1, router1);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
