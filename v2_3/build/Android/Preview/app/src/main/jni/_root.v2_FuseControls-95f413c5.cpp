// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-95f413c5.h>
#include <Fuse.Controls.Shadow.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseControlsShadow_Size_Property :249
// {
static void v2_FuseControlsShadow_Size_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Shadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Shadow*/], offsetof(v2_FuseControlsShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseControlsShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseControlsShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseControlsShadow_Size_Property", options);
    type->fp_build_ = v2_FuseControlsShadow_Size_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseControlsShadow_Size_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseControlsShadow_Size_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseControlsShadow_Size_Property__Set1_fn;
    return type;
}

// public v2_FuseControlsShadow_Size_Property(Fuse.Controls.Shadow obj, Uno.UX.Selector name) :252
void v2_FuseControlsShadow_Size_Property__ctor_3_fn(v2_FuseControlsShadow_Size_Property* __this, ::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :254
void v2_FuseControlsShadow_Size_Property__Get1_fn(v2_FuseControlsShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("v2_FuseControlsShadow_Size_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shadow*>(obj, ::TYPES[0/*Fuse.Controls.Shadow*/]))->Size(), void();
}

// public v2_FuseControlsShadow_Size_Property New(Fuse.Controls.Shadow obj, Uno.UX.Selector name) :252
void v2_FuseControlsShadow_Size_Property__New1_fn(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsShadow_Size_Property** __retval)
{
    *__retval = v2_FuseControlsShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :253
void v2_FuseControlsShadow_Size_Property__get_Object_fn(v2_FuseControlsShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :255
void v2_FuseControlsShadow_Size_Property__Set1_fn(v2_FuseControlsShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("v2_FuseControlsShadow_Size_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shadow*>(obj, ::TYPES[0/*Fuse.Controls.Shadow*/]))->Size(v_);
}

// public v2_FuseControlsShadow_Size_Property(Fuse.Controls.Shadow obj, Uno.UX.Selector name) [instance] :252
void v2_FuseControlsShadow_Size_Property::ctor_3(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseControlsShadow_Size_Property New(Fuse.Controls.Shadow obj, Uno.UX.Selector name) [static] :252
v2_FuseControlsShadow_Size_Property* v2_FuseControlsShadow_Size_Property::New1(::g::Fuse::Controls::Shadow* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseControlsShadow_Size_Property* obj1 = (v2_FuseControlsShadow_Size_Property*)uNew(v2_FuseControlsShadow_Size_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
