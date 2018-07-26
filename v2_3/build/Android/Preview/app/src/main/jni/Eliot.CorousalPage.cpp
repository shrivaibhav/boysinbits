// This file was generated based on build/Android/Preview/cache/ux15/Eliot.CorousalPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseUXKitsAlive-c03cf3e5.h>
#include <Alive.Body.h>
#include <Alive.Bubble.h>
#include <Alive.Bubbles.h>
#include <Alive.DarkTheme.h>
#include <Alive.ThemedCard.h>
#include <Eliot.Bubble.h>
#include <Eliot.CorousalPage.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[5];

namespace g{
namespace Eliot{

// public partial sealed class CorousalPage :4
// {
// static CorousalPage() :7
static void CorousalPage__cctor_5_fn(uType* __type)
{
}

static void CorousalPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("pushProgram");
    ::STRINGS[1] = uString::Const("Pages/SchedulePage.ux");
    ::STRINGS[2] = uString::Const("ROOM 1");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetDependencies(
        ::g::FuseUXKitsAlive_ColorPalette_res_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(122,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(CorousalPage, temp_eb5), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CorousalPage__New5_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* CorousalPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Alive::CarouselPage_typeof();
    options.FieldCount = 123;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CorousalPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Eliot.CorousalPage", options);
    type->fp_build_ = CorousalPage_build;
    type->fp_ctor_ = (void*)CorousalPage__New5_fn;
    type->fp_cctor_ = CorousalPage__cctor_5_fn;
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

// public CorousalPage() :11
void CorousalPage__ctor_8_fn(CorousalPage* __this)
{
    __this->ctor_8();
}

// private void InitializeUX() :15
void CorousalPage__InitializeUX1_fn(CorousalPage* __this)
{
    __this->InitializeUX1();
}

// public CorousalPage New() :11
void CorousalPage__New5_fn(CorousalPage** __retval)
{
    *__retval = CorousalPage::New5();
}

// public CorousalPage() [instance] :11
void CorousalPage::ctor_8()
{
    uStackFrame __("Eliot.CorousalPage", ".ctor()");
    ctor_7();
    InitializeUX1();
}

// private void InitializeUX() [instance] :15
void CorousalPage::InitializeUX1()
{
    uStackFrame __("Eliot.CorousalPage", "InitializeUX()");
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[0/*"pushProgram"*/]);
    ::g::Alive::ThemedCard* temp1 = ::g::Alive::ThemedCard::New4();
    ::g::Alive::DarkTheme* temp2 = ::g::Alive::DarkTheme::New4();
    ::g::Fuse::Controls::StackPanel* temp3 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp4 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp5 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::LinearGradient* temp6 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp7 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp8 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp9 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Alive::Body* temp10 = ::g::Alive::Body::New4();
    ::g::Alive::Bubbles* temp11 = ::g::Alive::Bubbles::New5();
    ::g::Eliot::Bubble* temp12 = ::g::Eliot::Bubble::New4();
    ::g::Fuse::Drawing::LinearGradient* temp13 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp14 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp15 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Eliot::Bubble* temp16 = ::g::Eliot::Bubble::New4();
    ::g::Fuse::Drawing::LinearGradient* temp17 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp18 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp19 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Eliot::Bubble* temp20 = ::g::Eliot::Bubble::New4();
    ::g::Fuse::Drawing::LinearGradient* temp21 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp22 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp23 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Eliot::Bubble* temp24 = ::g::Eliot::Bubble::New4();
    ::g::Fuse::Drawing::LinearGradient* temp25 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp26 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp27 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Alive::Bubble* temp28 = ::g::Alive::Bubble::New4();
    ::g::Fuse::Drawing::LinearGradient* temp29 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp30 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp31 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Controls::StackPanel* temp32 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Eliot::Bubble* temp33 = ::g::Eliot::Bubble::New4();
    ::g::Fuse::Drawing::LinearGradient* temp34 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp35 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp36 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Eliot::Bubble* temp37 = ::g::Eliot::Bubble::New4();
    ::g::Fuse::Drawing::LinearGradient* temp38 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp39 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp40 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::LinearGradient* temp41 = ::g::Fuse::Drawing::LinearGradient::New2();
    ::g::Fuse::Drawing::GradientStop* temp42 = ::g::Fuse::Drawing::GradientStop::New2();
    ::g::Fuse::Drawing::GradientStop* temp43 = ::g::Fuse::Drawing::GradientStop::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    SourceLineNumber(105);
    SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(this, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp1->SourceLineNumber(106);
    temp1->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp2->SourceLineNumber(107);
    temp2->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp3->ItemSpacing(30.0f);
    temp3->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp3->Alignment(9);
    temp3->SourceLineNumber(108);
    temp3->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    temp4->Orientation(0);
    temp4->Y(::g::Uno::UX::Size__New1(20.0f, 1));
    temp4->SourceLineNumber(109);
    temp4->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp5->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp5->Width(::g::Uno::UX::Size__New1(50.0f, 1));
    temp5->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp5->Alignment(5);
    temp5->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp5->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp5->X(::g::Uno::UX::Size__New1(12.0f, 1));
    temp5->SourceLineNumber(110);
    temp5->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp9);
    temp7->Offset(0.0f);
    temp7->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp8->Offset(0.01f);
    temp8->Color(::g::Uno::Float4__New2(0.2784314f, 0.4666667f, 0.9529412f, 1.0f));
    temp9->Offset(1.0f);
    temp9->Color(::g::Uno::Float4__New2(0.08627451f, 0.3372549f, 0.9843137f, 1.0f));
    temp10->Value(::STRINGS[2/*"ROOM 1"*/]);
    temp10->TextWrapping(1);
    temp10->TextAlignment(1);
    temp10->Alignment(11);
    temp10->Margin(::g::Uno::Float4__New2(20.0f, 0.0f, 0.0f, 0.0f));
    temp10->SourceLineNumber(117);
    temp10->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp11->ItemSpacing(-20.0f);
    temp11->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp11->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    temp11->SourceLineNumber(121);
    temp11->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp12->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp12->SourceLineNumber(122);
    temp12->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp15);
    temp14->Offset(0.0f);
    temp14->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3StartColor());
    temp15->Offset(1.0f);
    temp15->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3EndColor());
    temp16->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp16->SourceLineNumber(128);
    temp16->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp19);
    temp18->Offset(0.0f);
    temp18->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3StartColor());
    temp19->Offset(1.0f);
    temp19->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3EndColor());
    temp20->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp20->SourceLineNumber(134);
    temp20->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp21->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp23);
    temp22->Offset(0.0f);
    temp22->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3StartColor());
    temp23->Offset(1.0f);
    temp23->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3EndColor());
    temp24->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp24->SourceLineNumber(140);
    temp24->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp27);
    temp26->Offset(0.0f);
    temp26->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3StartColor());
    temp27->Offset(1.0f);
    temp27->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3EndColor());
    temp28->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    temp28->SourceLineNumber(146);
    temp28->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp31);
    temp30->Offset(0.0f);
    temp30->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3StartColor());
    temp31->Offset(1.0f);
    temp31->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3EndColor());
    temp32->Orientation(0);
    temp32->Y(::g::Uno::UX::Size__New1(-15.0f, 1));
    temp32->SourceLineNumber(153);
    temp32->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp32->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp37);
    temp33->Height(::g::Uno::UX::Size__New1(25.0f, 1));
    temp33->Alignment(13);
    temp33->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp33->SourceLineNumber(154);
    temp33->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp36);
    temp35->Offset(0.0f);
    temp35->Color(::g::Uno::Float4__New2(0.007843138f, 0.8705882f, 0.7137255f, 1.0f));
    temp36->Offset(1.0f);
    temp36->Color(::g::Uno::Float4__New2(0.2862745f, 0.8588235f, 0.2705882f, 1.0f));
    temp37->Height(::g::Uno::UX::Size__New1(35.0f, 1));
    temp37->Alignment(15);
    temp37->Margin(::g::Uno::Float4__New2(230.0f, 0.0f, 0.0f, 0.0f));
    temp37->SourceLineNumber(160);
    temp37->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp37->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp40);
    temp39->Offset(0.0f);
    temp39->Color(::g::Uno::Float4__New2(1.0f, 0.8196079f, 0.1647059f, 1.0f));
    temp40->Offset(1.0f);
    temp40->Color(::g::Uno::Float4__New2(1.0f, 0.8196079f, 0.1647059f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp41->Stops()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/]), temp43);
    temp42->Offset(0.0f);
    temp42->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3StartColor());
    temp43->Offset(1.0f);
    temp43->Color(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient3EndColor());
    temp->SourceLineNumber(105);
    temp->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Bindings()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
}

// public CorousalPage New() [static] :11
CorousalPage* CorousalPage::New5()
{
    CorousalPage* obj1 = (CorousalPage*)uNew(CorousalPage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

}} // ::g::Eliot
