// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-8e931e13.h>
#include <Fuse.Controls.Control.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseControlsControl_Background_Property :149
// {
static void v2_FuseControlsControl_Background_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Control_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Control*/], offsetof(v2_FuseControlsControl_Background_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseControlsControl_Background_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseControlsControl_Background_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseControlsControl_Background_Property", options);
    type->fp_build_ = v2_FuseControlsControl_Background_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseControlsControl_Background_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseControlsControl_Background_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseControlsControl_Background_Property__Set1_fn;
    return type;
}

// public v2_FuseControlsControl_Background_Property(Fuse.Controls.Control obj, Uno.UX.Selector name) :152
void v2_FuseControlsControl_Background_Property__ctor_3_fn(v2_FuseControlsControl_Background_Property* __this, ::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :154
void v2_FuseControlsControl_Background_Property__Get1_fn(v2_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Control*>(obj, ::TYPES[0/*Fuse.Controls.Control*/]))->Background(), void();
}

// public v2_FuseControlsControl_Background_Property New(Fuse.Controls.Control obj, Uno.UX.Selector name) :152
void v2_FuseControlsControl_Background_Property__New1_fn(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsControl_Background_Property** __retval)
{
    *__retval = v2_FuseControlsControl_Background_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :153
void v2_FuseControlsControl_Background_Property__get_Object_fn(v2_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :155
void v2_FuseControlsControl_Background_Property__Set1_fn(v2_FuseControlsControl_Background_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Control*>(obj, ::TYPES[0/*Fuse.Controls.Control*/]))->Background(v);
}

// public v2_FuseControlsControl_Background_Property(Fuse.Controls.Control obj, Uno.UX.Selector name) [instance] :152
void v2_FuseControlsControl_Background_Property::ctor_3(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseControlsControl_Background_Property New(Fuse.Controls.Control obj, Uno.UX.Selector name) [static] :152
v2_FuseControlsControl_Background_Property* v2_FuseControlsControl_Background_Property::New1(::g::Fuse::Controls::Control* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseControlsControl_Background_Property* obj1 = (v2_FuseControlsControl_Background_Property*)uNew(v2_FuseControlsControl_Background_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
