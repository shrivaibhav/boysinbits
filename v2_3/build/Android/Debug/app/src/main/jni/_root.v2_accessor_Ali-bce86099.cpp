// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Ali-bce86099.h>
#include <Alive.ExampleApp.Sche-71f472d9.h>
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

// internal sealed class v2_accessor_Alive_ExampleApp_ScheduleDetails_Time :111
// {
// static generated v2_accessor_Alive_ExampleApp_ScheduleDetails_Time() :111
static void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__cctor__fn(uType* __type)
{
    v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::Singleton_ = v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::New1();
    v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Time"*/]);
}

static void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Time");
    ::TYPES[0] = ::g::Alive::ExampleApp::ScheduleDetails_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* v2_accessor_Alive_ExampleApp_ScheduleDetails_Time_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("v2_accessor_Alive_ExampleApp_ScheduleDetails_Time", options);
    type->fp_build_ = v2_accessor_Alive_ExampleApp_ScheduleDetails_Time_build;
    type->fp_ctor_ = (void*)v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__New1_fn;
    type->fp_cctor_ = v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__get_SupportsOriginSetter_fn;
    return type;
}

// public generated v2_accessor_Alive_ExampleApp_ScheduleDetails_Time() :111
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__ctor_1_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :117
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__GetAsObject_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Alive::ExampleApp::ScheduleDetails*>(obj, ::TYPES[0/*Alive.ExampleApp.ScheduleDetails*/]))->Time(), void();
}

// public override sealed Uno.UX.Selector get_Name() :114
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__get_Name_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::_name_, void();
}

// public generated v2_accessor_Alive_ExampleApp_ScheduleDetails_Time New() :111
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__New1_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time** __retval)
{
    *__retval = v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::New1();
}

// public override sealed Uno.Type get_PropertyType() :116
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__get_PropertyType_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :118
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__SetAsObject_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Alive::ExampleApp::ScheduleDetails*>(obj, ::TYPES[0/*Alive.ExampleApp.ScheduleDetails*/]))->SetTime(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :119
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time__get_SupportsOriginSetter_fn(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::Singleton_;
::g::Uno::UX::Selector v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::_name_;

// public generated v2_accessor_Alive_ExampleApp_ScheduleDetails_Time() [instance] :111
void v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::ctor_1()
{
    ctor_();
}

// public generated v2_accessor_Alive_ExampleApp_ScheduleDetails_Time New() [static] :111
v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* v2_accessor_Alive_ExampleApp_ScheduleDetails_Time::New1()
{
    v2_accessor_Alive_ExampleApp_ScheduleDetails_Time* obj1 = (v2_accessor_Alive_ExampleApp_ScheduleDetails_Time*)uNew(v2_accessor_Alive_ExampleApp_ScheduleDetails_Time_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
