// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_accessor_Ali-1cec6cef.h>
#include <Alive.ExampleApp.ProgramItem.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor :31
// {
// static generated v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor() :31
static void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__cctor__fn(uType* __type)
{
    v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::Singleton_ = v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::New1();
    v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"CategoryColor"*/]);
}

static void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("CategoryColor");
    ::TYPES[0] = ::g::Alive::ExampleApp::ProgramItem_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor", options);
    type->fp_build_ = v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor_build;
    type->fp_ctor_ = (void*)v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__New1_fn;
    type->fp_cctor_ = v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor() :31
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__ctor_1_fn(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :37
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__GetAsObject_fn(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->CategoryColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :34
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__get_Name_fn(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::_name_, void();
}

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor New() :31
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__New1_fn(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor** __retval)
{
    *__retval = v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :36
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__get_PropertyType_fn(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :38
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__SetAsObject_fn(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->SetCategoryColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :39
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor__get_SupportsOriginSetter_fn(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::Singleton_;
::g::Uno::UX::Selector v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::_name_;

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor() [instance] :31
void v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::ctor_1()
{
    ctor_();
}

// public generated v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor New() [static] :31
v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor::New1()
{
    v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor* obj1 = (v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor*)uNew(v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
