// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Ali-15ca235e.h>
#include <Alive.ExampleApp.ScheduleItem.h>
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

// internal sealed class v2_accessor_Alive_ExampleApp_ScheduleItem_Time :91
// {
// static generated v2_accessor_Alive_ExampleApp_ScheduleItem_Time() :91
static void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__cctor__fn(uType* __type)
{
    v2_accessor_Alive_ExampleApp_ScheduleItem_Time::Singleton_ = v2_accessor_Alive_ExampleApp_ScheduleItem_Time::New1();
    v2_accessor_Alive_ExampleApp_ScheduleItem_Time::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Time"*/]);
}

static void v2_accessor_Alive_ExampleApp_ScheduleItem_Time_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Time");
    ::TYPES[0] = ::g::Alive::ExampleApp::ScheduleItem_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ScheduleItem_Time::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ScheduleItem_Time::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* v2_accessor_Alive_ExampleApp_ScheduleItem_Time_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_accessor_Alive_ExampleApp_ScheduleItem_Time);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("v2_accessor_Alive_ExampleApp_ScheduleItem_Time", options);
    type->fp_build_ = v2_accessor_Alive_ExampleApp_ScheduleItem_Time_build;
    type->fp_ctor_ = (void*)v2_accessor_Alive_ExampleApp_ScheduleItem_Time__New1_fn;
    type->fp_cctor_ = v2_accessor_Alive_ExampleApp_ScheduleItem_Time__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))v2_accessor_Alive_ExampleApp_ScheduleItem_Time__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))v2_accessor_Alive_ExampleApp_ScheduleItem_Time__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))v2_accessor_Alive_ExampleApp_ScheduleItem_Time__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))v2_accessor_Alive_ExampleApp_ScheduleItem_Time__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_accessor_Alive_ExampleApp_ScheduleItem_Time__get_SupportsOriginSetter_fn;
    return type;
}

// public generated v2_accessor_Alive_ExampleApp_ScheduleItem_Time() :91
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__ctor_1_fn(v2_accessor_Alive_ExampleApp_ScheduleItem_Time* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :97
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__GetAsObject_fn(v2_accessor_Alive_ExampleApp_ScheduleItem_Time* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Alive::ExampleApp::ScheduleItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ScheduleItem*/]))->Time(), void();
}

// public override sealed Uno.UX.Selector get_Name() :94
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__get_Name_fn(v2_accessor_Alive_ExampleApp_ScheduleItem_Time* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = v2_accessor_Alive_ExampleApp_ScheduleItem_Time::_name_, void();
}

// public generated v2_accessor_Alive_ExampleApp_ScheduleItem_Time New() :91
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__New1_fn(v2_accessor_Alive_ExampleApp_ScheduleItem_Time** __retval)
{
    *__retval = v2_accessor_Alive_ExampleApp_ScheduleItem_Time::New1();
}

// public override sealed Uno.Type get_PropertyType() :96
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__get_PropertyType_fn(v2_accessor_Alive_ExampleApp_ScheduleItem_Time* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :98
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__SetAsObject_fn(v2_accessor_Alive_ExampleApp_ScheduleItem_Time* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Alive::ExampleApp::ScheduleItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ScheduleItem*/]))->SetTime(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :99
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time__get_SupportsOriginSetter_fn(v2_accessor_Alive_ExampleApp_ScheduleItem_Time* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> v2_accessor_Alive_ExampleApp_ScheduleItem_Time::Singleton_;
::g::Uno::UX::Selector v2_accessor_Alive_ExampleApp_ScheduleItem_Time::_name_;

// public generated v2_accessor_Alive_ExampleApp_ScheduleItem_Time() [instance] :91
void v2_accessor_Alive_ExampleApp_ScheduleItem_Time::ctor_1()
{
    ctor_();
}

// public generated v2_accessor_Alive_ExampleApp_ScheduleItem_Time New() [static] :91
v2_accessor_Alive_ExampleApp_ScheduleItem_Time* v2_accessor_Alive_ExampleApp_ScheduleItem_Time::New1()
{
    v2_accessor_Alive_ExampleApp_ScheduleItem_Time* obj1 = (v2_accessor_Alive_ExampleApp_ScheduleItem_Time*)uNew(v2_accessor_Alive_ExampleApp_ScheduleItem_Time_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
