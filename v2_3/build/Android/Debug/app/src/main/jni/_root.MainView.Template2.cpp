// This file was generated based on '.uno/ux15/MainView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MainView.h>
#include <_root.MainView.Template2.h>
#include <Alive.ExampleApp.SchedulePage.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];

namespace g{

// public partial sealed class MainView.Template2 :51
// {
// static Template2() :60
static void MainView__Template2__cctor__fn(uType* __type)
{
    MainView__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"schedule"*/]);
}

static void MainView__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("schedule");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template2, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template2::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* MainView__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template2", options);
    type->fp_build_ = MainView__Template2_build;
    type->fp_cctor_ = MainView__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template2__New1_fn;
    return type;
}

// public Template2(MainView parent, MainView parentInstance) :55
void MainView__Template2__ctor_1_fn(MainView__Template2* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :63
void MainView__Template2__New1_fn(MainView__Template2* __this, uObject** __retval)
{
    ::g::Alive::ExampleApp::SchedulePage* __self1 = ::g::Alive::ExampleApp::SchedulePage::New6(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template2::__selector0_);
    __self1->SourceLineNumber(51);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template2 New(MainView parent, MainView parentInstance) :55
void MainView__Template2__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template2** __retval)
{
    *__retval = MainView__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template2::__selector0_;

// public Template2(MainView parent, MainView parentInstance) [instance] :55
void MainView__Template2::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"schedule"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(MainView parent, MainView parentInstance) [static] :55
MainView__Template2* MainView__Template2::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template2* obj1 = (MainView__Template2*)uNew(MainView__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
