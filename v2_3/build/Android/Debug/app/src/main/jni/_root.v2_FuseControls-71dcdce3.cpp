// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-71dcdce3.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseControlsTextControl_Value_Property :166
// {
static void v2_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextControl*/], offsetof(v2_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = v2_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public v2_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :169
void v2_FuseControlsTextControl_Value_Property__ctor_3_fn(v2_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :171
void v2_FuseControlsTextControl_Value_Property__Get1_fn(v2_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public v2_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :169
void v2_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = v2_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :170
void v2_FuseControlsTextControl_Value_Property__get_Object_fn(v2_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :172
void v2_FuseControlsTextControl_Value_Property__Set1_fn(v2_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :173
void v2_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(v2_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public v2_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :169
void v2_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :169
v2_FuseControlsTextControl_Value_Property* v2_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseControlsTextControl_Value_Property* obj1 = (v2_FuseControlsTextControl_Value_Property*)uNew(v2_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
