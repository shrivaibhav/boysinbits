// This file was generated based on 'C:/Users/Chetanya Gupta/Desktop/v2/.uno/ux15/Alive.ExampleApp.ProgramPage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.BackButton.h>
#include <Alive.BodyBold.h>
#include <Alive.DarkTheme.h>
#include <Alive.ExampleApp.Prog-aac72047.h>
#include <Alive.ExampleApp.ProgramPage.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ProgramPage.Template :8
// {
// static Template() :18
static void ProgramPage__Template__cctor__fn(uType* __type)
{
    ProgramPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TopBar"*/]);
}

static void ProgramPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TopBar");
    ::STRINGS[1] = uString::Const("goBack");
    ::STRINGS[2] = uString::Const("Pages/ProgramPage.ux");
    ::STRINGS[3] = uString::Const("Talks");
    ::TYPES[0] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Alive::ExampleApp::ProgramPage_typeof(), offsetof(ProgramPage__Template, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::ProgramPage_typeof(), offsetof(ProgramPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ProgramPage__Template, temp_eb4), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* ProgramPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(ProgramPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.ProgramPage.Template", options);
    type->fp_build_ = ProgramPage__Template_build;
    type->fp_cctor_ = ProgramPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))ProgramPage__Template__New1_fn;
    return type;
}

// public Template(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) :12
void ProgramPage__Template__ctor_1_fn(ProgramPage__Template* __this, ::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :21
void ProgramPage__Template__New1_fn(ProgramPage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"goBack"*/]);
    ::g::Alive::DarkTheme* temp1 = ::g::Alive::DarkTheme::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp2 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Alive::BackButton* temp3 = ::g::Alive::BackButton::New4();
    __this->temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Alive::BodyBold* temp4 = ::g::Alive::BodyBold::New4();
    __self1->Name(ProgramPage__Template::__selector0_);
    __self1->SourceLineNumber(71);
    __self1->SourceFileName(::STRINGS[2/*"Pages/Progr...*/]);
    temp1->SourceLineNumber(72);
    temp1->SourceFileName(::STRINGS[2/*"Pages/Progr...*/]);
    temp2->SourceLineNumber(73);
    temp2->SourceFileName(::STRINGS[2/*"Pages/Progr...*/]);
    temp3->Alignment(1);
    temp3->X(::g::Uno::UX::Size__New1(25.0f, 1));
    temp3->Y(::g::Uno::UX::Size__New1(25.0f, 1));
    temp3->SourceLineNumber(74);
    temp3->SourceFileName(::STRINGS[2/*"Pages/Progr...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::TYPES[0/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb4);
    temp->SourceLineNumber(74);
    temp->SourceFileName(::STRINGS[2/*"Pages/Progr...*/]);
    temp4->Value(::STRINGS[3/*"Talks"*/]);
    temp4->Alignment(10);
    temp4->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp4->SourceLineNumber(75);
    temp4->SourceFileName(::STRINGS[2/*"Pages/Progr...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    return *__retval = __self1, void();
}

// public Template New(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) :12
void ProgramPage__Template__New2_fn(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance, ProgramPage__Template** __retval)
{
    *__retval = ProgramPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector ProgramPage__Template::__selector0_;

// public Template(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) [instance] :12
void ProgramPage__Template::ctor_1(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance)
{
    ctor_(::STRINGS[0/*"TopBar"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance) [static] :12
ProgramPage__Template* ProgramPage__Template::New2(::g::Alive::ExampleApp::ProgramPage* parent, ::g::Alive::ExampleApp::ProgramPage* parentInstance)
{
    ProgramPage__Template* obj1 = (ProgramPage__Template*)uNew(ProgramPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
