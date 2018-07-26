// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseControls-89b09788.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseControlsImage_Source_Property :184
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

// public override sealed Fuse.Resources.ImageSource Get(Uno.UX.PropertyObject obj) :189
void v2_FuseControlsImage_Source_Property__Get1_fn(v2_FuseControlsImage_Source_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Resources::ImageSource** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Source(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :188
void v2_FuseControlsImage_Source_Property__get_Object_fn(v2_FuseControlsImage_Source_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Resources.ImageSource v, Uno.UX.IPropertyListener origin) :190
void v2_FuseControlsImage_Source_Property__Set1_fn(v2_FuseControlsImage_Source_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Resources::ImageSource* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Source(v);
}
// }

} // ::g
