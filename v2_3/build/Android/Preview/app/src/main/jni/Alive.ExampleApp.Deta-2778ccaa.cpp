// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.DetailsPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.ActionButton.h>
#include <Alive.ExampleApp.Deta-2778ccaa.h>
#include <Alive.ExampleApp.DetailsPage.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[2];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class DetailsPage.Template1 :59
// {
// static Template1() :68
static void DetailsPage__Template1__cctor__fn(uType* __type)
{
    DetailsPage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"BottomBar"*/]);
}

static void DetailsPage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("BottomBar");
    ::STRINGS[1] = uString::Const("Pages/DetailsPage.ux");
    type->SetFields(2,
        ::g::Alive::ExampleApp::DetailsPage_typeof(), offsetof(DetailsPage__Template1, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::DetailsPage_typeof(), offsetof(DetailsPage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DetailsPage__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DetailsPage__Template1__New2_fn, 0, true, type, 2, ::g::Alive::ExampleApp::DetailsPage_typeof(), ::g::Alive::ExampleApp::DetailsPage_typeof()));
}

::g::Uno::UX::Template_type* DetailsPage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DetailsPage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.DetailsPage.Template1", options);
    type->fp_build_ = DetailsPage__Template1_build;
    type->fp_cctor_ = DetailsPage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))DetailsPage__Template1__New1_fn;
    return type;
}

// public Template1(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) :63
void DetailsPage__Template1__ctor_1_fn(DetailsPage__Template1* __this, ::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :71
void DetailsPage__Template1__New1_fn(DetailsPage__Template1* __this, uObject** __retval)
{
    uStackFrame __("Alive.ExampleApp.DetailsPage.Template1", "New()");
    ::g::Alive::ActionButton* __self1 = ::g::Alive::ActionButton::New4();
    __self1->Alignment(15);
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 30.0f, 0.0f));
    __self1->Anchor(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(100.0f, 4), ::g::Uno::UX::Size__New1(50.0f, 4)));
    __self1->Name(DetailsPage__Template1::__selector0_);
    __self1->SourceLineNumber(18);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Detai...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(__self1, 1);
    return *__retval = __self1, void();
}

// public Template1 New(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) :63
void DetailsPage__Template1__New2_fn(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance, DetailsPage__Template1** __retval)
{
    *__retval = DetailsPage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector DetailsPage__Template1::__selector0_;

// public Template1(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) [instance] :63
void DetailsPage__Template1::ctor_1(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance)
{
    ctor_(::STRINGS[0/*"BottomBar"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance) [static] :63
DetailsPage__Template1* DetailsPage__Template1::New2(::g::Alive::ExampleApp::DetailsPage* parent, ::g::Alive::ExampleApp::DetailsPage* parentInstance)
{
    DetailsPage__Template1* obj1 = (DetailsPage__Template1*)uNew(DetailsPage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
