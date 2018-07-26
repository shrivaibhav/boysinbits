// This file was generated based on '.uno/ux15/Alive.ExampleApp.SchedulePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_bundle.h>
#include <Alive.ExampleApp.Sche-acbacbde.h>
#include <Alive.ExampleApp.SchedulePage.h>
#include <Alive.ImageFill.h>
#include <Alive.Title.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusB-d3f2d898.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Font.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Node.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage.Template :8
// {
// static Template() :17
static void SchedulePage__Template__cctor__fn(uType* __type)
{
    SchedulePage__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"TopBar"*/]);
}

static void SchedulePage__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TopBar");
    ::STRINGS[1] = uString::Const("Pages/SchedulePage.ux");
    ::STRINGS[2] = uString::Const("MY HOME");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::Alive::ExampleApp::SchedulePage_typeof(),
        ::g::v2_bundle_typeof());
    type->SetFields(2,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage__Template::__selector0_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* SchedulePage__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(SchedulePage__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.SchedulePage.Template", options);
    type->fp_build_ = SchedulePage__Template_build;
    type->fp_cctor_ = SchedulePage__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SchedulePage__Template__New1_fn;
    return type;
}

// public Template(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :12
void SchedulePage__Template__ctor_1_fn(SchedulePage__Template* __this, ::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :20
void SchedulePage__Template__New1_fn(SchedulePage__Template* __this, uObject** __retval)
{
    ::g::Fuse::Controls::StackPanel* __self1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::StatusBarBackground* temp = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::StackPanel* temp1 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Alive::Title* temp2 = ::g::Alive::Title::New4();
    ::g::Fuse::Controls::Rectangle* temp3 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Alive::ImageFill* temp4 = ::g::Alive::ImageFill::New3();
    __self1->Name(SchedulePage__Template::__selector0_);
    __self1->SourceLineNumber(119);
    __self1->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp->SourceLineNumber(120);
    temp->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp1->Orientation(0);
    temp1->SourceLineNumber(121);
    temp1->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp2->Value(::STRINGS[2/*"MY HOME"*/]);
    temp2->FontSize(25.0f);
    temp2->TextAlignment(1);
    temp2->Color(::g::Fuse::Drawing::Colors::Black());
    temp2->Alignment(8);
    temp2->Margin(::g::Uno::Float4__New2(80.0f, 0.0f, 0.0f, 0.0f));
    temp2->SourceLineNumber(123);
    temp2->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    temp2->Font(::g::Alive::ExampleApp::SchedulePage::oswald());
    temp3->CornerRadius(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp3->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp3->Height(::g::Uno::UX::Size__New1(44.0f, 1));
    temp3->Alignment(3);
    temp3->Margin(::g::Uno::Float4__New2(70.0f, 10.0f, 10.0f, 0.0f));
    temp3->X(::g::Uno::UX::Size__New1(38.0f, 1));
    temp3->SourceLineNumber(124);
    temp3->SourceFileName(::STRINGS[1/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Fills()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp4);
    temp4->File(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::profile96d3f017()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    return *__retval = __self1, void();
}

// public Template New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :12
void SchedulePage__Template__New2_fn(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance, SchedulePage__Template** __retval)
{
    *__retval = SchedulePage__Template::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SchedulePage__Template::__selector0_;

// public Template(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [instance] :12
void SchedulePage__Template::ctor_1(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    ctor_(::STRINGS[0/*"TopBar"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [static] :12
SchedulePage__Template* SchedulePage__Template::New2(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    SchedulePage__Template* obj1 = (SchedulePage__Template*)uNew(SchedulePage__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
