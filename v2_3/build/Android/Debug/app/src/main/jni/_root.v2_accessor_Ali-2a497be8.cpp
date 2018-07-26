// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Ali-2a497be8.h>
#include <Alive.ExampleApp.ProgramItem.h>
#include <Fuse.Resources.ImageSource.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource :21
// {
// static generated v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource() :21
static void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__cctor__fn(uType* __type)
{
    v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::Singleton_ = v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::New1();
    v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"ImageSource"*/]);
}

static void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ImageSource");
    ::TYPES[0] = ::g::Alive::ExampleApp::ProgramItem_typeof();
    ::TYPES[1] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource", options);
    type->fp_build_ = v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_build;
    type->fp_ctor_ = (void*)v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__New1_fn;
    type->fp_cctor_ = v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_SupportsOriginSetter_fn;
    return type;
}

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource() :21
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__ctor_1_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :27
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__GetAsObject_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->ImageSource(), void();
}

// public override sealed Uno.UX.Selector get_Name() :24
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_Name_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::_name_, void();
}

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource New() :21
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__New1_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource** __retval)
{
    *__retval = v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::New1();
}

// public override sealed Uno.Type get_PropertyType() :26
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_PropertyType_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*Fuse.Resources.ImageSource*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :28
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__SetAsObject_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->SetImageSource(uCast< ::g::Fuse::Resources::ImageSource*>(v, ::TYPES[1/*Fuse.Resources.ImageSource*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :29
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource__get_SupportsOriginSetter_fn(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::Singleton_;
::g::Uno::UX::Selector v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::_name_;

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource() [instance] :21
void v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::ctor_1()
{
    ctor_();
}

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource New() [static] :21
v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource::New1()
{
    v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource* obj1 = (v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource*)uNew(v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
