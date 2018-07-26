// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-24d2ba35.h>
#include <Fuse.Controls.RangeControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseControlsRangeControl_Value_Property :337
// {
static void v2_FuseControlsRangeControl_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::RangeControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Double_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.RangeControl*/], offsetof(v2_FuseControlsRangeControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseControlsRangeControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseControlsRangeControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseControlsRangeControl_Value_Property", options);
    type->fp_build_ = v2_FuseControlsRangeControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseControlsRangeControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseControlsRangeControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseControlsRangeControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_FuseControlsRangeControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public v2_FuseControlsRangeControl_Value_Property(Fuse.Controls.RangeControl obj, Uno.UX.Selector name) :340
void v2_FuseControlsRangeControl_Value_Property__ctor_3_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed double Get(Uno.UX.PropertyObject obj) :342
void v2_FuseControlsRangeControl_Value_Property__Get1_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval)
{
    uStackFrame __("v2_FuseControlsRangeControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::RangeControl*>(obj, ::TYPES[0/*Fuse.Controls.RangeControl*/]))->Value(), void();
}

// public v2_FuseControlsRangeControl_Value_Property New(Fuse.Controls.RangeControl obj, Uno.UX.Selector name) :340
void v2_FuseControlsRangeControl_Value_Property__New1_fn(::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsRangeControl_Value_Property** __retval)
{
    *__retval = v2_FuseControlsRangeControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :341
void v2_FuseControlsRangeControl_Value_Property__get_Object_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, double v, Uno.UX.IPropertyListener origin) :343
void v2_FuseControlsRangeControl_Value_Property__Set1_fn(v2_FuseControlsRangeControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin)
{
    uStackFrame __("v2_FuseControlsRangeControl_Value_Property", "Set(Uno.UX.PropertyObject,double,Uno.UX.IPropertyListener)");
    double v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::RangeControl*>(obj, ::TYPES[0/*Fuse.Controls.RangeControl*/]))->SetValue(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :344
void v2_FuseControlsRangeControl_Value_Property__get_SupportsOriginSetter_fn(v2_FuseControlsRangeControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public v2_FuseControlsRangeControl_Value_Property(Fuse.Controls.RangeControl obj, Uno.UX.Selector name) [instance] :340
void v2_FuseControlsRangeControl_Value_Property::ctor_3(::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseControlsRangeControl_Value_Property New(Fuse.Controls.RangeControl obj, Uno.UX.Selector name) [static] :340
v2_FuseControlsRangeControl_Value_Property* v2_FuseControlsRangeControl_Value_Property::New1(::g::Fuse::Controls::RangeControl* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseControlsRangeControl_Value_Property* obj1 = (v2_FuseControlsRangeControl_Value_Property*)uNew(v2_FuseControlsRangeControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
