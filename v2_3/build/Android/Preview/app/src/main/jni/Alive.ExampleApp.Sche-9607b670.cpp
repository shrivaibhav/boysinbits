// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.SchedulePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.ExampleApp.Sche-9607b670.h>
#include <Alive.ExampleApp.SchedulePage.h>
#include <Eliot.GridElement.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage.Template2 :117
// {
// static Template2() :126
static void SchedulePage__Template2__cctor__fn(uType* __type)
{
}

static void SchedulePage__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Pages/SchedulePage.ux");
    type->SetFields(2,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template2, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template2, __parentInstance1), uFieldFlagsWeak);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SchedulePage__Template2__New2_fn, 0, true, type, 2, ::g::Alive::ExampleApp::SchedulePage_typeof(), ::g::Alive::ExampleApp::SchedulePage_typeof()));
}

::g::Uno::UX::Template_type* SchedulePage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(SchedulePage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.SchedulePage.Template2", options);
    type->fp_build_ = SchedulePage__Template2_build;
    type->fp_cctor_ = SchedulePage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SchedulePage__Template2__New1_fn;
    return type;
}

// public Template2(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :121
void SchedulePage__Template2__ctor_1_fn(SchedulePage__Template2* __this, ::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :129
void SchedulePage__Template2__New1_fn(SchedulePage__Template2* __this, uObject** __retval)
{
    ::g::Eliot::GridElement* __self1 = ::g::Eliot::GridElement::New4();
    __self1->SourceLineNumber(199);
    __self1->SourceFileName(::STRINGS[0/*"Pages/Sched...*/]);
    return *__retval = __self1, void();
}

// public Template2 New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :121
void SchedulePage__Template2__New2_fn(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance, SchedulePage__Template2** __retval)
{
    *__retval = SchedulePage__Template2::New2(parent, parentInstance);
}

// public Template2(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [instance] :121
void SchedulePage__Template2::ctor_1(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [static] :121
SchedulePage__Template2* SchedulePage__Template2::New2(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    SchedulePage__Template2* obj1 = (SchedulePage__Template2*)uNew(SchedulePage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
