// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Fus-b69b6d03.h>
#include <Fuse.Controls.RangeControl.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class v2_accessor_Fuse_Controls_RangeControl_Value :161
// {
// static generated v2_accessor_Fuse_Controls_RangeControl_Value() :161
static void v2_accessor_Fuse_Controls_RangeControl_Value__cctor__fn(uType* __type)
{
    v2_accessor_Fuse_Controls_RangeControl_Value::Singleton_ = v2_accessor_Fuse_Controls_RangeControl_Value::New1();
    v2_accessor_Fuse_Controls_RangeControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void v2_accessor_Fuse_Controls_RangeControl_Value_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::TYPES[0] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&v2_accessor_Fuse_Controls_RangeControl_Value::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&v2_accessor_Fuse_Controls_RangeControl_Value::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* v2_accessor_Fuse_Controls_RangeControl_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_accessor_Fuse_Controls_RangeControl_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("v2_accessor_Fuse_Controls_RangeControl_Value", options);
    type->fp_build_ = v2_accessor_Fuse_Controls_RangeControl_Value_build;
    type->fp_ctor_ = (void*)v2_accessor_Fuse_Controls_RangeControl_Value__New1_fn;
    type->fp_cctor_ = v2_accessor_Fuse_Controls_RangeControl_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))v2_accessor_Fuse_Controls_RangeControl_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))v2_accessor_Fuse_Controls_RangeControl_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))v2_accessor_Fuse_Controls_RangeControl_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))v2_accessor_Fuse_Controls_RangeControl_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_accessor_Fuse_Controls_RangeControl_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated v2_accessor_Fuse_Controls_RangeControl_Value() :161
void v2_accessor_Fuse_Controls_RangeControl_Value__ctor_1_fn(v2_accessor_Fuse_Controls_RangeControl_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :167
void v2_accessor_Fuse_Controls_RangeControl_Value__GetAsObject_fn(v2_accessor_Fuse_Controls_RangeControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("v2_accessor_Fuse_Controls_RangeControl_Value", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Double_typeof(), uPtr(uCast< ::g::Fuse::Controls::RangeControl*>(obj, ::TYPES[0/*Fuse.Controls.RangeControl*/]))->Value()), void();
}

// public override sealed Uno.UX.Selector get_Name() :164
void v2_accessor_Fuse_Controls_RangeControl_Value__get_Name_fn(v2_accessor_Fuse_Controls_RangeControl_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = v2_accessor_Fuse_Controls_RangeControl_Value::_name_, void();
}

// public generated v2_accessor_Fuse_Controls_RangeControl_Value New() :161
void v2_accessor_Fuse_Controls_RangeControl_Value__New1_fn(v2_accessor_Fuse_Controls_RangeControl_Value** __retval)
{
    *__retval = v2_accessor_Fuse_Controls_RangeControl_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :166
void v2_accessor_Fuse_Controls_RangeControl_Value__get_PropertyType_fn(v2_accessor_Fuse_Controls_RangeControl_Value* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Double_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :168
void v2_accessor_Fuse_Controls_RangeControl_Value__SetAsObject_fn(v2_accessor_Fuse_Controls_RangeControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("v2_accessor_Fuse_Controls_RangeControl_Value", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::RangeControl*>(obj, ::TYPES[0/*Fuse.Controls.RangeControl*/]))->SetValue(uUnbox<double>(::g::Uno::Double_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :169
void v2_accessor_Fuse_Controls_RangeControl_Value__get_SupportsOriginSetter_fn(v2_accessor_Fuse_Controls_RangeControl_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> v2_accessor_Fuse_Controls_RangeControl_Value::Singleton_;
::g::Uno::UX::Selector v2_accessor_Fuse_Controls_RangeControl_Value::_name_;

// public generated v2_accessor_Fuse_Controls_RangeControl_Value() [instance] :161
void v2_accessor_Fuse_Controls_RangeControl_Value::ctor_1()
{
    ctor_();
}

// public generated v2_accessor_Fuse_Controls_RangeControl_Value New() [static] :161
v2_accessor_Fuse_Controls_RangeControl_Value* v2_accessor_Fuse_Controls_RangeControl_Value::New1()
{
    v2_accessor_Fuse_Controls_RangeControl_Value* obj1 = (v2_accessor_Fuse_Controls_RangeControl_Value*)uNew(v2_accessor_Fuse_Controls_RangeControl_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
