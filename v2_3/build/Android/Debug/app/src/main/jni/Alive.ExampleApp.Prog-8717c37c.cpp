// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.ProgramPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseUXKitsAlive-c03cf3e5.h>
#include <_root.v2_AliveExample-1a426d70.h>
#include <_root.v2_AliveExample-75cea4a5.h>
#include <_root.v2_AliveExample-98434239.h>
#include <_root.v2_AliveExample-b3b7d201.h>
#include <_root.v2_AliveExample-cd7bed0a.h>
#include <_root.v2_FuseResource-ee82e7bd.h>
#include <Alive.ExampleApp.Prog-8717c37c.h>
#include <Alive.ExampleApp.ProgramItem.h>
#include <Alive.ExampleApp.ProgramPage.h>
#include <Alive.SwipeActionConfirmed.h>
#include <Alive.SwipeActionPanel.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.DataToResource.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Triggers.OnUserEvent.h>
#include <Fuse.UserEventHandler.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[19];
static uType* TYPES[4];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ProgramPage.Template1 :61
// {
// static Template1() :78
static void ProgramPage__Template1__cctor__fn(uType* __type)
{
    ProgramPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"CategoryColor"*/]);
    ProgramPage__Template1::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"IsAttending"*/]);
    ProgramPage__Template1::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Time"*/]);
    ProgramPage__Template1::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Person"*/]);
    ProgramPage__Template1::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Title"*/]);
    ProgramPage__Template1::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"File"*/]);
    ProgramPage__Template1::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[6/*"item"*/]);
}

static void ProgramPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("CategoryColor");
    ::STRINGS[1] = uString::Const("IsAttending");
    ::STRINGS[2] = uString::Const("Time");
    ::STRINGS[3] = uString::Const("Person");
    ::STRINGS[4] = uString::Const("Title");
    ::STRINGS[5] = uString::Const("File");
    ::STRINGS[6] = uString::Const("item");
    ::STRINGS[7] = uString::Const("Item");
    ::STRINGS[8] = uString::Const("attendEvent");
    ::STRINGS[9] = uString::Const("categoryColor");
    ::STRINGS[10] = uString::Const("attending");
    ::STRINGS[11] = uString::Const("time");
    ::STRINGS[12] = uString::Const("person");
    ::STRINGS[13] = uString::Const("title");
    ::STRINGS[14] = uString::Const("pushDetails");
    ::STRINGS[15] = uString::Const("image");
    ::STRINGS[16] = uString::Const("Attend this event");
    ::STRINGS[17] = uString::Const("Attending!");
    ::STRINGS[18] = uString::Const("Pages/ProgramPage.ux");
    ::TYPES[0] = ::g::Fuse::UserEventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::FuseUXKitsAlive_ColorPalette_res_typeof());
    type->SetFields(2,
        ::g::Alive::ExampleApp::ProgramPage_typeof(), offsetof(ProgramPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::ProgramPage_typeof(), offsetof(ProgramPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(ProgramPage__Template1, temp_CategoryColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(ProgramPage__Template1, temp_IsAttending_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProgramPage__Template1, temp_Time_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProgramPage__Template1, temp_Person_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(ProgramPage__Template1, temp_Title_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL), offsetof(ProgramPage__Template1, temp1_File_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ProgramPage__Template1, temp_eb5), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ProgramPage__Template1, temp_eb6), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template1::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template1::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template1::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template1::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template1::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template1::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template1::__selector6_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ProgramPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ProgramPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.ProgramPage.Template1", options);
    type->fp_build_ = ProgramPage__Template1_build;
    type->fp_cctor_ = ProgramPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ProgramPage__Template1__New1_fn;
    return type;
}

// public Template1(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) :65
void ProgramPage__Template1__ctor_1_fn(ProgramPage__Template1* __this, ::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :81
void ProgramPage__Template1__New1_fn(ProgramPage__Template1* __this, uObject** __retval)
{
    ::g::Alive::SwipeActionPanel* __self1 = ::g::Alive::SwipeActionPanel::New5();
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"attendEvent"*/]);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"categoryColor"*/]);
    ::g::Alive::ExampleApp::ProgramItem* temp = ::g::Alive::ExampleApp::ProgramItem::New5();
    __this->temp_CategoryColor_inst = ::g::v2_AliveExampleAppProgramItem_CategoryColor_Property::New1(temp, ProgramPage__Template1::__selector0_);
    ::g::Fuse::Reactive::DataToResource* temp4 = ::g::Fuse::Reactive::DataToResource::New1(temp3);
    __this->temp_IsAttending_inst = ::g::v2_AliveExampleAppProgramItem_IsAttending_Property::New1(temp, ProgramPage__Template1::__selector1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[10/*"attending"*/]);
    __this->temp_Time_inst = ::g::v2_AliveExampleAppProgramItem_Time_Property::New1(temp, ProgramPage__Template1::__selector2_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"time"*/]);
    __this->temp_Person_inst = ::g::v2_AliveExampleAppProgramItem_Person_Property::New1(temp, ProgramPage__Template1::__selector3_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"person"*/]);
    __this->temp_Title_inst = ::g::v2_AliveExampleAppProgramItem_Title_Property::New1(temp, ProgramPage__Template1::__selector4_);
    ::g::Fuse::Reactive::Data* temp8 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"title"*/]);
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"pushDetails"*/]);
    ::g::Fuse::Resources::FileImageSource* temp1 = ::g::Fuse::Resources::FileImageSource::New2();
    __this->temp1_File_inst = ::g::v2_FuseResourcesFileImageSource_File_Property::New1(temp1, ProgramPage__Template1::__selector5_);
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"image"*/]);
    ::g::Alive::SwipeActionConfirmed* temp11 = ::g::Alive::SwipeActionConfirmed::New3();
    __this->temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_CategoryColor_inst, (uObject*)temp4, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_IsAttending_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Time_inst, (uObject*)temp6, 3);
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Person_inst, (uObject*)temp7, 3);
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Title_inst, (uObject*)temp8, 3);
    __this->temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp9);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_File_inst, (uObject*)temp10, 3);
    __self1->ButtonText(::STRINGS[16/*"Attend this...*/]);
    __self1->ConfirmationText(::STRINGS[17/*"Attending!"*/]);
    __self1->GradientStartColor(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient2StartColor());
    __self1->GradientEndColor(::g::FuseUXKitsAlive_ColorPalette_res::AliveGradient2EndColor());
    __self1->Name(ProgramPage__Template1::__selector6_);
    __self1->SourceLineNumber(96);
    __self1->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp11->SourceLineNumber(98);
    temp11->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp11->add_Handler(uDelegate::New(::TYPES[0/*Fuse.UserEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb5)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb5);
    temp2->SourceLineNumber(98);
    temp2->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp->SourceLineNumber(99);
    temp->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb6)));
    temp->ImageSource(temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp10->SourceLineNumber(100);
    temp10->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp4->SourceLineNumber(99);
    temp4->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp3->SourceLineNumber(99);
    temp3->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp5->SourceLineNumber(99);
    temp5->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp6->SourceLineNumber(99);
    temp6->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp7->SourceLineNumber(99);
    temp7->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp8->SourceLineNumber(99);
    temp8->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    temp9->SourceLineNumber(99);
    temp9->SourceFileName(::STRINGS[18/*"Pages/Progr...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->SubtreeNodes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->SubtreeNodes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template1 New(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) :65
void ProgramPage__Template1__New2_fn(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance, ProgramPage__Template1** __retval)
{
    *__retval = ProgramPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ProgramPage__Template1::__selector0_;
::g::Uno::UX::Selector ProgramPage__Template1::__selector1_;
::g::Uno::UX::Selector ProgramPage__Template1::__selector2_;
::g::Uno::UX::Selector ProgramPage__Template1::__selector3_;
::g::Uno::UX::Selector ProgramPage__Template1::__selector4_;
::g::Uno::UX::Selector ProgramPage__Template1::__selector5_;
::g::Uno::UX::Selector ProgramPage__Template1::__selector6_;

// public Template1(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) [instance] :65
void ProgramPage__Template1::ctor_1(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance)
{
    ctor_(::STRINGS[7/*"Item"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) [static] :65
ProgramPage__Template1* ProgramPage__Template1::New2(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance)
{
    ProgramPage__Template1* obj1 = (ProgramPage__Template1*)uNew(ProgramPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
