// This file was generated based on build/Android/Preview/cache/ux15/Alive.ExampleApp.SchedulePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Alive.Carousel.h>
#include <Alive.DarkTheme.h>
#include <Alive.ExampleApp.Sche-9607b66f.h>
#include <Alive.ExampleApp.SchedulePage.h>
#include <Eliot.CorousalPage.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Controls.Panel.h>
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
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage.Template1 :69
// {
// static Template1() :78
static void SchedulePage__Template1__cctor__fn(uType* __type)
{
    SchedulePage__Template1::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"MediaOverlay"*/]);
}

static void SchedulePage__Template1_build(uType* type)
{
    ::STRINGS[0] = uString::Const("MediaOverlay");
    ::STRINGS[1] = uString::Const("Pages/SchedulePage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template1, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template1, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage__Template1::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SchedulePage__Template1__New2_fn, 0, true, type, 2, ::g::Alive::ExampleApp::SchedulePage_typeof(), ::g::Alive::ExampleApp::SchedulePage_typeof()));
}

::g::Uno::UX::Template_type* SchedulePage__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(SchedulePage__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.SchedulePage.Template1", options);
    type->fp_build_ = SchedulePage__Template1_build;
    type->fp_cctor_ = SchedulePage__Template1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SchedulePage__Template1__New1_fn;
    return type;
}

// public Template1(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :73
void SchedulePage__Template1__ctor_1_fn(SchedulePage__Template1* __this, ::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :81
void SchedulePage__Template1__New1_fn(SchedulePage__Template1* __this, uObject** __retval)
{
    uStackFrame __("Alive.ExampleApp.SchedulePage.Template1", "New()");
    ::g::Fuse::Controls::Panel* __self1 = ::g::Fuse::Controls::Panel::New3();
    ::g::Alive::Carousel* temp = ::g::Alive::Carousel::New5();
    ::g::Alive::DarkTheme* temp1 = ::g::Alive::DarkTheme::New4();
    ::g::Eliot::CorousalPage* temp2 = ::g::Eliot::CorousalPage::New5();
    ::g::Eliot::CorousalPage* temp3 = ::g::Eliot::CorousalPage::New5();
    ::g::Eliot::CorousalPage* temp4 = ::g::Eliot::CorousalPage::New5();
    ::g::Eliot::CorousalPage* temp5 = ::g::Eliot::CorousalPage::New5();
    __self1->Margin(::g::Uno::Float4__New2(0.0f, 80.0f, 0.0f, 0.0f));
    __self1->Name(SchedulePage__Template1::__selector0_);
    __self1->SourceLineNumber(188);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp->SourceLineNumber(189);
    temp->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->SubtreeNodes()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp1->SourceLineNumber(190);
    temp1->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp2->SourceLineNumber(191);
    temp2->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp3->SourceLineNumber(192);
    temp3->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp4->SourceLineNumber(193);
    temp4->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp5->SourceLineNumber(194);
    temp5->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    return *__retval = __self1, void();
}

// public Template1 New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :73
void SchedulePage__Template1__New2_fn(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance, SchedulePage__Template1** __retval)
{
    *__retval = SchedulePage__Template1::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SchedulePage__Template1::__selector0_;

// public Template1(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [instance] :73
void SchedulePage__Template1::ctor_1(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    ctor_(::STRINGS[0/*"MediaOverlay"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template1 New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [static] :73
SchedulePage__Template1* SchedulePage__Template1::New2(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    SchedulePage__Template1* obj1 = (SchedulePage__Template1*)uNew(SchedulePage__Template1_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
