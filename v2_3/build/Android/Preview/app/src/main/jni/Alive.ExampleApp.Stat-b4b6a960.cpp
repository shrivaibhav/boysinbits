// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.StatsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-71dcdce3.h>
#include <_root.v2_FuseElements-476826aa.h>
#include <_root.v2_FuseNavigati-25977d84.h>
#include <Alive.ButtonText.h>
#include <Alive.ExampleApp.Stat-b4b6a960.h>
#include <Alive.ExampleApp.StatsPage.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Navigation.Activated.h>
#include <Fuse.Navigation.Enter-a69250fd.h>
#include <Fuse.Navigation.Exiti-99f47629.h>
#include <Fuse.Navigation.Navig-ae9e86c7.h>
#include <Fuse.Navigation.NavigateTo.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Divide.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.PulseTr-e6f97a32.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.Trigger-fd67b2ab.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[8];
static uType* TYPES[6];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class StatsPage.Template :7
// {
// static Template() :22
static void StatsPage__Template__cctor__fn(uType* __type)
{
    StatsPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
    StatsPage__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Opacity"*/]);
    StatsPage__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Scale"*/]);
    StatsPage__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"month"*/]);
    StatsPage__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"monthLabel"*/]);
}

static void StatsPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Opacity");
    ::STRINGS[2] = uString::Const("Scale");
    ::STRINGS[3] = uString::Const("month");
    ::STRINGS[4] = uString::Const("monthLabel");
    ::STRINGS[5] = uString::Const("setCurrentMonth");
    ::STRINGS[6] = uString::Const("");
    ::STRINGS[7] = uString::Const("Pages/StatsPage.ux");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Triggers::PulseTrigger__PulseHandler_typeof()->MakeType(::g::Uno::EventArgs_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::TranslationModes_typeof());
    type->SetFields(2,
        ::g::Alive::ExampleApp::StatsPage_typeof(), offsetof(StatsPage__Template, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::StatsPage_typeof(), offsetof(StatsPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(StatsPage__Template, monthLabel_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(StatsPage__Template, monthLabel_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(StatsPage__Template, temp_Scale_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(StatsPage__Template, temp1_Scale_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(StatsPage__Template, temp_eb7), 0,
        ::g::Alive::ButtonText_typeof(), offsetof(StatsPage__Template, monthLabel), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatsPage__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatsPage__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatsPage__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatsPage__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&StatsPage__Template::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StatsPage__Template__New2_fn, 0, true, type, 2, ::g::Alive::ExampleApp::StatsPage_typeof(), ::g::Alive::ExampleApp::StatsPage_typeof()));
}

::g::Uno::UX::Template_type* StatsPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 15;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StatsPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.StatsPage.Template", options);
    type->fp_build_ = StatsPage__Template_build;
    type->fp_cctor_ = StatsPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))StatsPage__Template__New1_fn;
    return type;
}

// public Template(Alive.ExampleApp.StatsPage parent, Alive.ExampleApp.StatsPage parentInstance) :11
void StatsPage__Template__ctor_1_fn(StatsPage__Template* __this, ::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :25
void StatsPage__Template__New1_fn(StatsPage__Template* __this, uObject** __retval)
{
    uStackFrame __("Alive.ExampleApp.StatsPage.Template", "New()");
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"setCurrentM...*/]);
    __this->monthLabel = ::g::Alive::ButtonText::New4();
    __this->monthLabel_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(__this->monthLabel, StatsPage__Template::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*""*/]);
    __this->monthLabel_Opacity_inst = ::g::v2_FuseElementsElement_Opacity_Property::New1(__this->monthLabel, StatsPage__Template::__selector1_);
    int32_t temp4 = 1;
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(uBox<int32_t>(::g::Uno::Int_typeof(), temp4));
    int32_t temp6 = 3;
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(uBox<int32_t>(::g::Uno::Int_typeof(), temp6));
    ::g::Fuse::Navigation::EnteringAnimation* temp = ::g::Fuse::Navigation::EnteringAnimation::New2();
    __this->temp_Scale_inst = ::g::v2_FuseNavigationNavigationAnimation_Scale_Property::New1(temp, StatsPage__Template::__selector2_);
    ::g::Fuse::Reactive::Divide* temp8 = ::g::Fuse::Reactive::Divide::New1(temp5, temp7);
    int32_t temp9 = 1;
    ::g::Fuse::Reactive::Constant* temp10 = ::g::Fuse::Reactive::Constant::New1(uBox<int32_t>(::g::Uno::Int_typeof(), temp9));
    int32_t temp11 = 3;
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(uBox<int32_t>(::g::Uno::Int_typeof(), temp11));
    ::g::Fuse::Navigation::ExitingAnimation* temp1 = ::g::Fuse::Navigation::ExitingAnimation::New2();
    __this->temp1_Scale_inst = ::g::v2_FuseNavigationNavigationAnimation_Scale_Property::New1(temp1, StatsPage__Template::__selector2_);
    ::g::Fuse::Reactive::Divide* temp13 = ::g::Fuse::Reactive::Divide::New1(temp10, temp12);
    ::g::Fuse::Gestures::Clicked* temp14 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Navigation::NavigateTo* temp15 = ::g::Fuse::Navigation::NavigateTo::New2();
    ::g::Fuse::Navigation::Activated* temp16 = ::g::Fuse::Navigation::Activated::New2();
    __this->temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(__this->monthLabel_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], __this->monthLabel_Opacity_inst);
    ::g::Fuse::Animations::Move* temp19 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Scale_inst, (uObject*)temp8, 3);
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<float>*/], __this->monthLabel_Opacity_inst);
    ::g::Fuse::Animations::Move* temp22 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Scale_inst, (uObject*)temp13, 3);
    __self1->HitTestMode(2);
    __self1->Alignment(2);
    __self1->Name(StatsPage__Template::__selector3_);
    __self1->SourceLineNumber(68);
    __self1->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp14->SourceLineNumber(69);
    temp14->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Actions()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp15);
    temp15->SourceLineNumber(70);
    temp15->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp15->Target(__self1);
    temp16->Bypass(1);
    temp16->SourceLineNumber(72);
    temp16->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp16->add_Handler(uDelegate::New(::TYPES[2/*Fuse.Triggers.PulseTrigger<Uno.EventArgs>.PulseHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp16->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb7);
    temp2->SourceLineNumber(72);
    temp2->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    uPtr(__this->monthLabel)->Alignment(6);
    uPtr(__this->monthLabel)->Margin(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    uPtr(__this->monthLabel)->Name(StatsPage__Template::__selector4_);
    uPtr(__this->monthLabel)->SourceLineNumber(73);
    uPtr(__this->monthLabel)->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->monthLabel)->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp3->SourceLineNumber(73);
    temp3->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp->SourceLineNumber(74);
    temp->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(0.0f));
    temp18->Duration(0.5);
    temp19->X(-1.0f);
    temp19->Duration(1.0);
    temp19->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp8->SourceLineNumber(74);
    temp8->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp5->SourceLineNumber(74);
    temp5->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp7->SourceLineNumber(74);
    temp7->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp1->SourceLineNumber(78);
    temp1->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(0.0f));
    temp21->Duration(0.5);
    temp22->X(1.0f);
    temp22->Duration(1.0);
    temp22->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    temp13->SourceLineNumber(78);
    temp13->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp10->SourceLineNumber(78);
    temp10->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    temp12->SourceLineNumber(78);
    temp12->SourceFileName(::STRINGS[7/*"Pages/Stats...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), __this->monthLabel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template New(Alive.ExampleApp.StatsPage parent, Alive.ExampleApp.StatsPage parentInstance) :11
void StatsPage__Template__New2_fn(::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance, StatsPage__Template** __retval)
{
    *__retval = StatsPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector StatsPage__Template::__selector0_;
::g::Uno::UX::Selector StatsPage__Template::__selector1_;
::g::Uno::UX::Selector StatsPage__Template::__selector2_;
::g::Uno::UX::Selector StatsPage__Template::__selector3_;
::g::Uno::UX::Selector StatsPage__Template::__selector4_;

// public Template(Alive.ExampleApp.StatsPage parent, Alive.ExampleApp.StatsPage parentInstance) [instance] :11
void StatsPage__Template::ctor_1(::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Alive.ExampleApp.StatsPage parent, Alive.ExampleApp.StatsPage parentInstance) [static] :11
StatsPage__Template* StatsPage__Template::New2(::g::Alive::ExampleApp::StatsPage* parent, ::g::Alive::ExampleApp::StatsPage* parentInstance)
{
    StatsPage__Template* obj1 = (StatsPage__Template*)uNew(StatsPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
