// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-89b09788.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseControlsImage_Source_Property :188
// {
static void v2_FuseControlsImage_Source_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(v2_FuseControlsImage_Source_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseControlsImage_Source_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseControlsImage_Source_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseControlsImage_Source_Property", options);
    type->fp_build_ = v2_FuseControlsImage_Source_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseControlsImage_Source_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseControlsImage_Source_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseControlsImage_Source_Property__Set1_fn;
    return type;
}

// public v2_FuseControlsImage_Source_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :191
void v2_FuseControlsImage_Source_Property__ctor_3_fn(v2_FuseControlsImage_Source_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Resources.ImageSource Get(Uno.UX.PropertyObject obj) :193
void v2_FuseControlsImage_Source_Property__Get1_fn(v2_FuseControlsImage_Source_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Resources::ImageSource** __retval)
{
    uStackFrame __("v2_FuseControlsImage_Source_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Source(), void();
}

// public v2_FuseControlsImage_Source_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :191
void v2_FuseControlsImage_Source_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, v2_FuseControlsImage_Source_Property** __retval)
{
    *__retval = v2_FuseControlsImage_Source_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :192
void v2_FuseControlsImage_Source_Property__get_Object_fn(v2_FuseControlsImage_Source_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Resources.ImageSource v, Uno.UX.IPropertyListener origin) :194
void v2_FuseControlsImage_Source_Property__Set1_fn(v2_FuseControlsImage_Source_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Resources::ImageSource* v, uObject* origin)
{
    uStackFrame __("v2_FuseControlsImage_Source_Property", "Set(Uno.UX.PropertyObject,Fuse.Resources.ImageSource,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Source(v);
}

// public v2_FuseControlsImage_Source_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :191
void v2_FuseControlsImage_Source_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseControlsImage_Source_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :191
v2_FuseControlsImage_Source_Property* v2_FuseControlsImage_Source_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseControlsImage_Source_Property* obj1 = (v2_FuseControlsImage_Source_Property*)uNew(v2_FuseControlsImage_Source_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
