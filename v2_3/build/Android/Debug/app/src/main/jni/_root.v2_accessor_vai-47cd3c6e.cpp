// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_vai-47cd3c6e.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <vaibhav.myDrawer.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class v2_accessor_vaibhav_myDrawer_HideButton :161
// {
// static generated v2_accessor_vaibhav_myDrawer_HideButton() :161
static void v2_accessor_vaibhav_myDrawer_HideButton__cctor__fn(uType* __type)
{
    v2_accessor_vaibhav_myDrawer_HideButton::Singleton_ = v2_accessor_vaibhav_myDrawer_HideButton::New1();
    v2_accessor_vaibhav_myDrawer_HideButton::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"HideButton"*/]);
}

static void v2_accessor_vaibhav_myDrawer_HideButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("HideButton");
    ::TYPES[0] = ::g::vaibhav::myDrawer_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&v2_accessor_vaibhav_myDrawer_HideButton::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&v2_accessor_vaibhav_myDrawer_HideButton::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* v2_accessor_vaibhav_myDrawer_HideButton_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_accessor_vaibhav_myDrawer_HideButton);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("v2_accessor_vaibhav_myDrawer_HideButton", options);
    type->fp_build_ = v2_accessor_vaibhav_myDrawer_HideButton_build;
    type->fp_ctor_ = (void*)v2_accessor_vaibhav_myDrawer_HideButton__New1_fn;
    type->fp_cctor_ = v2_accessor_vaibhav_myDrawer_HideButton__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))v2_accessor_vaibhav_myDrawer_HideButton__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))v2_accessor_vaibhav_myDrawer_HideButton__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))v2_accessor_vaibhav_myDrawer_HideButton__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))v2_accessor_vaibhav_myDrawer_HideButton__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_accessor_vaibhav_myDrawer_HideButton__get_SupportsOriginSetter_fn;
    return type;
}

// public generated v2_accessor_vaibhav_myDrawer_HideButton() :161
void v2_accessor_vaibhav_myDrawer_HideButton__ctor_1_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :167
void v2_accessor_vaibhav_myDrawer_HideButton__GetAsObject_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::vaibhav::myDrawer*>(obj, ::TYPES[0/*vaibhav.myDrawer*/]))->HideButton()), void();
}

// public override sealed Uno.UX.Selector get_Name() :164
void v2_accessor_vaibhav_myDrawer_HideButton__get_Name_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = v2_accessor_vaibhav_myDrawer_HideButton::_name_, void();
}

// public generated v2_accessor_vaibhav_myDrawer_HideButton New() :161
void v2_accessor_vaibhav_myDrawer_HideButton__New1_fn(v2_accessor_vaibhav_myDrawer_HideButton** __retval)
{
    *__retval = v2_accessor_vaibhav_myDrawer_HideButton::New1();
}

// public override sealed Uno.Type get_PropertyType() :166
void v2_accessor_vaibhav_myDrawer_HideButton__get_PropertyType_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :168
void v2_accessor_vaibhav_myDrawer_HideButton__SetAsObject_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::vaibhav::myDrawer*>(obj, ::TYPES[0/*vaibhav.myDrawer*/]))->SetHideButton(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :169
void v2_accessor_vaibhav_myDrawer_HideButton__get_SupportsOriginSetter_fn(v2_accessor_vaibhav_myDrawer_HideButton* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> v2_accessor_vaibhav_myDrawer_HideButton::Singleton_;
::g::Uno::UX::Selector v2_accessor_vaibhav_myDrawer_HideButton::_name_;

// public generated v2_accessor_vaibhav_myDrawer_HideButton() [instance] :161
void v2_accessor_vaibhav_myDrawer_HideButton::ctor_1()
{
    ctor_();
}

// public generated v2_accessor_vaibhav_myDrawer_HideButton New() [static] :161
v2_accessor_vaibhav_myDrawer_HideButton* v2_accessor_vaibhav_myDrawer_HideButton::New1()
{
    v2_accessor_vaibhav_myDrawer_HideButton* obj1 = (v2_accessor_vaibhav_myDrawer_HideButton*)uNew(v2_accessor_vaibhav_myDrawer_HideButton_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
