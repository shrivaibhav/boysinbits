// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.ProgramPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.BodyBold.h>
#include <Alive.DarkTheme.h>
#include <Alive.ExampleApp.Prog-aac72047.h>
#include <Alive.ExampleApp.ProgramPage.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Node.h>
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
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class ProgramPage.Template :8
// {
// static Template() :17
static void ProgramPage__Template__cctor__fn(uType* __type)
{
    ProgramPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TopBar"*/]);
}

static void ProgramPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TopBar");
    ::STRINGS[1] = uString::Const("Pages/ProgramPage.ux");
    ::STRINGS[2] = uString::Const("Talks");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Alive::ExampleApp::ProgramPage_typeof(), offsetof(ProgramPage__Template, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::ProgramPage_typeof(), offsetof(ProgramPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ProgramPage__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ProgramPage__Template__New2_fn, 0, true, type, 2, ::g::Alive::ExampleApp::ProgramPage_typeof(), ::g::Alive::ExampleApp::ProgramPage_typeof()));
}

::g::Uno::UX::Template_type* ProgramPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
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

// public override sealed object New() :20
void ProgramPage__Template__New1_fn(ProgramPage__Template* __this, uObject** __retval)
{
    uStackFrame __("Alive.ExampleApp.ProgramPage.Template", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Alive::DarkTheme* temp = ::g::Alive::DarkTheme::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp1 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Alive::BodyBold* temp2 = ::g::Alive::BodyBold::New4();
    __self1->Name(ProgramPage__Template::__selector0_);
    __self1->SourceLineNumber(82);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Progr...*/]);
    temp->SourceLineNumber(83);
    temp->SourceFileName(::STRINGS[1/*"Pages/Progr...*/]);
    temp1->SourceLineNumber(84);
    temp1->SourceFileName(::STRINGS[1/*"Pages/Progr...*/]);
    temp2->Value(::STRINGS[2/*"Talks"*/]);
    temp2->Alignment(10);
    temp2->Margin(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    temp2->SourceLineNumber(85);
    temp2->SourceFileName(::STRINGS[1/*"Pages/Progr...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
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
