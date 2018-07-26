// This file was generated based on '.uno/ux15/Alive.ExampleApp.SchedulePage.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-108fffa6.h>
#include <_root.v2_FuseControls-71dcdce3.h>
#include <_root.v2_FuseControls-ce0b45cc.h>
#include <Alive.ExampleApp.Sche-9607b670.h>
#include <Alive.ExampleApp.SchedulePage.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Element-bd497d56.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[8];
static uType* TYPES[3];

namespace g{
namespace Alive{
namespace ExampleApp{

// public partial sealed class SchedulePage.Template2 :105
// {
// static Template2() :118
static void SchedulePage__Template2__cctor__fn(uType* __type)
{
    SchedulePage__Template2::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Url"*/]);
    SchedulePage__Template2::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Value"*/]);
    SchedulePage__Template2::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Color"*/]);
}

static void SchedulePage__Template2_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Url");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("Color");
    ::STRINGS[3] = uString::Const("deviceIcon");
    ::STRINGS[4] = uString::Const("deviceClicked");
    ::STRINGS[5] = uString::Const("deviceType");
    ::STRINGS[6] = uString::Const("backCol");
    ::STRINGS[7] = uString::Const("Pages/SchedulePage.ux");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof());
    type->SetFields(2,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template2, __parent1), uFieldFlagsWeak,
        ::g::Alive::ExampleApp::SchedulePage_typeof(), offsetof(SchedulePage__Template2, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SchedulePage__Template2, temp_Url_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SchedulePage__Template2, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(SchedulePage__Template2, temp2_Color_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SchedulePage__Template2, temp_eb10), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage__Template2::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage__Template2::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SchedulePage__Template2::__selector2_, uFieldFlagsStatic);
}

::g::Uno::UX::Template_type* SchedulePage__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 11;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SchedulePage__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Alive.ExampleApp.SchedulePage.Template2", options);
    type->fp_build_ = SchedulePage__Template2_build;
    type->fp_cctor_ = SchedulePage__Template2__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))SchedulePage__Template2__New1_fn;
    return type;
}

// public Template2(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :109
void SchedulePage__Template2__ctor_1_fn(SchedulePage__Template2* __this, ::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :121
void SchedulePage__Template2__New1_fn(SchedulePage__Template2* __this, uObject** __retval)
{
    ::g::Fuse::Controls::DockPanel* __self1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp = ::g::Fuse::Controls::Image::New3();
    __this->temp_Url_inst = ::g::v2_FuseControlsImage_Url_Property::New1(temp, SchedulePage__Template2::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[3/*"deviceIcon"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"deviceClicked"*/]);
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    __this->temp1_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(temp1, SchedulePage__Template2::__selector1_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"deviceType"*/]);
    ::g::Fuse::Controls::Rectangle* temp2 = ::g::Fuse::Controls::Rectangle::New3();
    __this->temp2_Color_inst = ::g::v2_FuseControlsShape_Color_Property::New1(temp2, SchedulePage__Template2::__selector2_);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"backCol"*/]);
    ::g::Fuse::Reactive::DataBinding* temp7 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp_Url_inst, (uObject*)temp3, 3);
    __this->temp_eb10 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Reactive::DataBinding* temp8 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp1_Value_inst, (uObject*)temp5, 3);
    ::g::Fuse::Reactive::DataBinding* temp9 = ::g::Fuse::Reactive::DataBinding::New1(__this->temp2_Color_inst, (uObject*)temp6, 3);
    __self1->Aspect(1.0f);
    __self1->BoxSizing(4);
    __self1->SourceLineNumber(144);
    __self1->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    temp2->CornerRadius(::g::Uno::Float4__New2(25.0f, 25.0f, 25.0f, 25.0f));
    temp2->Width(::g::Uno::UX::Size__New1(110.0f, 1));
    temp2->Height(::g::Uno::UX::Size__New1(110.0f, 1));
    temp2->SourceLineNumber(147);
    temp2->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp9);
    temp->StretchMode(3);
    temp->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp->Layer(1);
    temp->SourceLineNumber(149);
    temp->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp, uDelegate::New(::TYPES[2/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(__this->temp_eb10)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), __this->temp_eb10);
    temp3->SourceLineNumber(149);
    temp3->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    temp4->SourceLineNumber(149);
    temp4->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    temp1->FontSize(12.0f);
    temp1->TextColor(::g::Fuse::Drawing::Colors::White());
    temp1->Alignment(14);
    temp1->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp1->Y(::g::Uno::UX::Size__New1(-4.0f, 1));
    temp1->SourceLineNumber(150);
    temp1->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp8);
    temp5->SourceLineNumber(150);
    temp5->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    temp6->SourceLineNumber(147);
    temp6->SourceFileName(::STRINGS[7/*"Pages/Sched...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    return *__retval = __self1, void();
}

// public Template2 New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) :109
void SchedulePage__Template2__New2_fn(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance, SchedulePage__Template2** __retval)
{
    *__retval = SchedulePage__Template2::New2(parent, parentInstance);
}

::g::Uno::UX::Selector SchedulePage__Template2::__selector0_;
::g::Uno::UX::Selector SchedulePage__Template2::__selector1_;
::g::Uno::UX::Selector SchedulePage__Template2::__selector2_;

// public Template2(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [instance] :109
void SchedulePage__Template2::ctor_1(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template2 New(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance) [static] :109
SchedulePage__Template2* SchedulePage__Template2::New2(::g::Alive::ExampleApp::SchedulePage* parent, ::g::Alive::ExampleApp::SchedulePage* parentInstance)
{
    SchedulePage__Template2* obj1 = (SchedulePage__Template2*)uNew(SchedulePage__Template2_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

}}} // ::g::Alive::ExampleApp
