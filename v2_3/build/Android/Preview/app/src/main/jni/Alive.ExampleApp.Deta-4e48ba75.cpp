// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.DetailsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.BackButton.h>
#include <Alive.ExampleApp.Deta-4e48ba75.h>
#include <Alive.ExampleApp.DetailsPage.h>
#include <Alive.IconLabel.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
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
static uString* STRINGS[5];
static uType* TYPES[3];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class DetailsPage.Template :8
// {
// static Template() :18
static void DetailsPage__Template__cctor__fn(uType* __type)
{
    DetailsPage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TopBar"*/]);
}

static void DetailsPage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TopBar");
    ::STRINGS[1] = uString::Const("goBack");
    ::STRINGS[2] = uString::Const("Pages/DetailsPage.ux");
    ::STRINGS[3] = uString::Const("Talk");
    ::STRINGS[4] = uString::Const("\356\253\270");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Alive::ExampleApp::DetailsPage_typeof(), offsetof(DetailsPage__Template, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::DetailsPage_typeof(), offsetof(DetailsPage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(DetailsPage__Template, temp_eb2), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage__Template::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DetailsPage__Template__New2_fn, 0, true, type, 2, ::g::Alive::ExampleApp::DetailsPage_typeof(), ::g::Alive::ExampleApp::DetailsPage_typeof()));
}

::g::Uno::UX::Template_type* DetailsPage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(DetailsPage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.DetailsPage.Template", options);
    type->fp_build_ = DetailsPage__Template_build;
    type->fp_cctor_ = DetailsPage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))DetailsPage__Template__New1_fn;
    return type;
}

// public Template(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) :12
void DetailsPage__Template__ctor_1_fn(DetailsPage__Template* __this, ::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :21
void DetailsPage__Template__New1_fn(DetailsPage__Template* __this, uObject** __retval)
{
    uStackFrame __("Alive.ExampleApp.DetailsPage.Template", "New()");
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"goBack"*/]);
    ::g::Fuse::Controls::StatusBarBackground* temp1 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::DockPanel* temp2 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Alive::BackButton* temp3 = ::g::Alive::BackButton::New4();
    __this->temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Alive::IconLabel* temp4 = ::g::Alive::IconLabel::New5();
    __self1->Name(DetailsPage__Template::__selector0_);
    __self1->SourceLineNumber(10);
    __self1->SourceFileName(::STRINGS[2/*"Pages/Detai...*/]);
    temp1->SourceLineNumber(11);
    temp1->SourceFileName(::STRINGS[2/*"Pages/Detai...*/]);
    temp2->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp2->SourceLineNumber(12);
    temp2->SourceFileName(::STRINGS[2/*"Pages/Detai...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp3->SourceLineNumber(13);
    temp3->SourceFileName(::STRINGS[2/*"Pages/Detai...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp3, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb2);
    temp->SourceLineNumber(13);
    temp->SourceFileName(::STRINGS[2/*"Pages/Detai...*/]);
    temp4->Text(::STRINGS[3/*"Talk"*/]);
    temp4->Icon(::STRINGS[4/*"\uEAF8"*/]);
    temp4->SourceLineNumber(14);
    temp4->SourceFileName(::STRINGS[2/*"Pages/Detai...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    return *__retval = __self1, void();
}

// public Template New(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) :12
void DetailsPage__Template__New2_fn(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance, DetailsPage__Template** __retval)
{
    *__retval = DetailsPage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector DetailsPage__Template::__selector0_;

// public Template(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) [instance] :12
void DetailsPage__Template::ctor_1(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance)
{
    ctor_(::STRINGS[0/*"TopBar"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) [static] :12
DetailsPage__Template* DetailsPage__Template::New2(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance)
{
    DetailsPage__Template* obj1 = (DetailsPage__Template*)uNew(DetailsPage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
