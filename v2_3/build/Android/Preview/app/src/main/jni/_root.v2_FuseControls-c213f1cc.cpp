// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-c213f1cc.h>
#include <Fuse.Controls.Shape.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseControlsShape_StrokeColor_Property :232
// {
static void v2_FuseControlsShape_StrokeColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Shape*/], offsetof(v2_FuseControlsShape_StrokeColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseControlsShape_StrokeColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseControlsShape_StrokeColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseControlsShape_StrokeColor_Property", options);
    type->fp_build_ = v2_FuseControlsShape_StrokeColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseControlsShape_StrokeColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseControlsShape_StrokeColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseControlsShape_StrokeColor_Property__Set1_fn;
    return type;
}

// public v2_FuseControlsShape_StrokeColor_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :235
void v2_FuseControlsShape_StrokeColor_Property__ctor_3_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :237
void v2_FuseControlsShape_StrokeColor_Property__Get1_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("v2_FuseControlsShape_StrokeColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[0/*Fuse.Controls.Shape*/]))->StrokeColor(), void();
}

// public v2_FuseControlsShape_StrokeColor_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :235
void v2_FuseControlsShape_StrokeColor_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsShape_StrokeColor_Property** __retval)
{
    *__retval = v2_FuseControlsShape_StrokeColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :236
void v2_FuseControlsShape_StrokeColor_Property__get_Object_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :238
void v2_FuseControlsShape_StrokeColor_Property__Set1_fn(v2_FuseControlsShape_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("v2_FuseControlsShape_StrokeColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[0/*Fuse.Controls.Shape*/]))->StrokeColor(v_);
}

// public v2_FuseControlsShape_StrokeColor_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :235
void v2_FuseControlsShape_StrokeColor_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseControlsShape_StrokeColor_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :235
v2_FuseControlsShape_StrokeColor_Property* v2_FuseControlsShape_StrokeColor_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseControlsShape_StrokeColor_Property* obj1 = (v2_FuseControlsShape_StrokeColor_Property*)uNew(v2_FuseControlsShape_StrokeColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
