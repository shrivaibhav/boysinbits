// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.StatsPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseCharting-29102331.h>
#include <_root.v2_FuseReactive-8336d018.h>
#include <Alive.DrawerButtonBackground.h>
#include <Alive.ExampleApp.Stat-b4b6a960.h>
#include <Alive.ExampleApp.StatsPage.h>
#include <Alive.RadarPlot.h>
#include <Fuse.Charting.DataSeries.h>
#include <Fuse.Charting.Plot.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Navigat-340a5907.h>
#include <Fuse.Controls.Navigat-70e90308.h>
#include <Fuse.Controls.Navigat-d5b6859a.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.IArray.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Bool.h>
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

// public partial sealed class StatsPage :4
// {
// static StatsPage() :134
static void StatsPage__cctor_5_fn(uType* __type)
{
    StatsPage::__g_static_nametable1_ = uArray::Init<uString*>(::g::Uno::String_typeof()->Array(), 0);
    StatsPage::__selector01_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Data"));
    StatsPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(uString::Const("Items"));
}

static void StatsPage_build(uType* type)
{
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::IArray_typeof(), NULL), offsetof(StatsPage, temp_Data_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(StatsPage, temp1_Items_inst), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(StatsPage, __g_nametable1), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&StatsPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatsPage::__selector01_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatsPage::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* StatsPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::Page_typeof();
    options.FieldCount = 129;
    options.InterfaceCount = 19;
    options.ObjectSize = sizeof(StatsPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Alive.ExampleApp.StatsPage", options);
    type->fp_build_ = StatsPage_build;
    type->fp_ctor_ = (void*)StatsPage__New6_fn;
    type->fp_cctor_ = StatsPage__cctor_5_fn;
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

// public StatsPage() :138
void StatsPage__ctor_9_fn(StatsPage* __this)
{
    __this->ctor_9();
}

// private void InitializeUX() :142
void StatsPage__InitializeUX1_fn(StatsPage* __this)
{
    __this->InitializeUX1();
}

// public StatsPage New() :138
void StatsPage__New6_fn(StatsPage** __retval)
{
    *__retval = StatsPage::New6();
}

uSStrong<uArray*> StatsPage::__g_static_nametable1_;
::g::Uno::UX::Selector StatsPage::__selector01_;
::g::Uno::UX::Selector StatsPage::__selector1_;

// public StatsPage() [instance] :138
void StatsPage::ctor_9()
{
    ctor_8();
    InitializeUX1();
}

// private void InitializeUX() [instance] :142
void StatsPage::InitializeUX1()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, StatsPage::__g_static_nametable1_);
    ::g::Fuse::Charting::DataSeries* temp = ::g::Fuse::Charting::DataSeries::New2();
    temp_Data_inst = ::g::v2_FuseChartingDataSeries_Data_Property::New1(temp, StatsPage::__selector01_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(uString::Const("history"));
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::v2_FuseReactiveEach_Items_Property::New1(temp1, StatsPage::__selector1_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(uString::Const("months"));
    ::g::Fuse::Reactive::JavaScript* temp4 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp5 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp6 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Alive::RadarPlot* temp7 = ::g::Alive::RadarPlot::New5();
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(temp_Data_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::PageControl* temp10 = ::g::Fuse::Controls::PageControl::New4();
    StatsPage__Template* month = StatsPage__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp3, 3);
    ::g::Alive::DrawerButtonBackground* temp12 = ::g::Alive::DrawerButtonBackground::New4();
    SourceLineNumber(1);
    SourceFileName(uString::Const("Pages/StatsPage.ux"));
    temp4->Code(uString::Const("\n"
        "\t\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\t\tfunction Stat(category, value) {\n"
        "\t\t\tthis.label = category;\n"
        "\t\t\tthis.y = value;\n"
        "\t\t}\n"
        "\n"
        "\t\tvar statsByMonth = {\n"
        "\t\t\t\"January\": [\n"
        "\t\t\t\tnew Stat(\"Talks\", 1),\n"
        "\t\t\t\tnew Stat(\"Exhibitions\", 2),\n"
        "\t\t\t\tnew Stat(\"Music\", 7),\n"
        "\t\t\t\tnew Stat(\"Workshops\", 4),\n"
        "\t\t\t\tnew Stat(\"Comedy\", 5),\n"
        "\t\t\t\tnew Stat(\"Meetups\", 6)\n"
        "\t\t\t],\n"
        "\t\t\t\"February\": [\n"
        "\t\t\t\tnew Stat(\"Talks\", 2),\n"
        "\t\t\t\tnew Stat(\"Exhibitions\", 5),\n"
        "\t\t\t\tnew Stat(\"Music\", 4),\n"
        "\t\t\t\tnew Stat(\"Workshops\", 10),\n"
        "\t\t\t\tnew Stat(\"Comedy\", 6),\n"
        "\t\t\t\tnew Stat(\"Meetups\", 4)\n"
        "\t\t\t],\n"
        "\t\t\t\"March\": [\n"
        "\t\t\t\tnew Stat(\"Talks\", 8),\n"
        "\t\t\t\tnew Stat(\"Exhibitions\", 3),\n"
        "\t\t\t\tnew Stat(\"Music\", 8),\n"
        "\t\t\t\tnew Stat(\"Workshops\", 6),\n"
        "\t\t\t\tnew Stat(\"Comedy\", 1),\n"
        "\t\t\t\tnew Stat(\"Meetups\", 2)\n"
        "\t\t\t]\n"
        "\t\t};\n"
        "\n"
        "\t\tvar months = Observable(Object.keys(statsByMonth)).expand();\n"
        "\t\tvar currentMonth = Observable(\"March\");\n"
        "\n"
        "\t\tvar history = Observable();\n"
        "\n"
        "\t\tcurrentMonth.onValueChanged(module, function(month) {\n"
        "\t\t\thistory.replaceAll(statsByMonth[month]);\n"
        "\t\t});\n"
        "\n"
        "\t\tfunction setCurrentMonth(arg) {\n"
        "\t\t\tcurrentMonth.value = arg.data;\n"
        "\t\t}\n"
        "\n"
        "\t\tmodule.exports = {\n"
        "\t\t\tmonths: months,\n"
        "\t\t\tcurrentMonth: currentMonth,\n"
        "\t\t\thistory: history,\n"
        "\t\t\tsetCurrentMonth: setCurrentMonth\n"
        "\t\t};\n"
        "\t"));
    temp4->LineNumber(2);
    temp4->FileName(uString::Const("Pages/StatsPage.ux"));
    temp4->SourceLineNumber(2);
    temp4->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    temp5->SourceLineNumber(58);
    temp5->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp9);
    temp6->SourceLineNumber(59);
    temp6->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 2);
    temp7->Alignment(8);
    temp7->SourceLineNumber(61);
    temp7->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Series()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Charting::DataSeries_typeof(), NULL)), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp8);
    temp2->SourceLineNumber(62);
    temp2->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    temp9->SourceLineNumber(65);
    temp9->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp12);
    temp10->InactiveState(2);
    temp10->Transition(1);
    temp10->IsRouterOutlet(false);
    temp10->SourceLineNumber(66);
    temp10->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp1);
    temp1->SourceLineNumber(67);
    temp1->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL)), month);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL)), temp11);
    temp3->SourceLineNumber(67);
    temp3->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    temp12->SourceLineNumber(85);
    temp12->SourceFileName(uString::Const("Pages/StatsPage.ux"));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL)), temp5);
}

// public StatsPage New() [static] :138
StatsPage* StatsPage::New6()
{
    StatsPage* obj1 = (StatsPage*)uNew(StatsPage_typeof());
    obj1->ctor_9();
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
