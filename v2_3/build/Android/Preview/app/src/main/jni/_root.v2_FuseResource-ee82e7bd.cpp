// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseResource-ee82e7bd.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseResourcesFileImageSource_File_Property :320
// {
static void v2_FuseResourcesFileImageSource_File_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Resources::FileImageSource_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Resources.FileImageSource*/], offsetof(v2_FuseResourcesFileImageSource_File_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseResourcesFileImageSource_File_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseResourcesFileImageSource_File_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseResourcesFileImageSource_File_Property", options);
    type->fp_build_ = v2_FuseResourcesFileImageSource_File_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseResourcesFileImageSource_File_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseResourcesFileImageSource_File_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseResourcesFileImageSource_File_Property__Set1_fn;
    return type;
}

// public v2_FuseResourcesFileImageSource_File_Property(Fuse.Resources.FileImageSource obj, Uno.UX.Selector name) :323
void v2_FuseResourcesFileImageSource_File_Property__ctor_3_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Uno.UX.FileSource Get(Uno.UX.PropertyObject obj) :325
void v2_FuseResourcesFileImageSource_File_Property__Get1_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval)
{
    uStackFrame __("v2_FuseResourcesFileImageSource_File_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Resources::FileImageSource*>(obj, ::TYPES[0/*Fuse.Resources.FileImageSource*/]))->File(), void();
}

// public v2_FuseResourcesFileImageSource_File_Property New(Fuse.Resources.FileImageSource obj, Uno.UX.Selector name) :323
void v2_FuseResourcesFileImageSource_File_Property__New1_fn(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector* name, v2_FuseResourcesFileImageSource_File_Property** __retval)
{
    *__retval = v2_FuseResourcesFileImageSource_File_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :324
void v2_FuseResourcesFileImageSource_File_Property__get_Object_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Uno.UX.FileSource v, Uno.UX.IPropertyListener origin) :326
void v2_FuseResourcesFileImageSource_File_Property__Set1_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin)
{
    uStackFrame __("v2_FuseResourcesFileImageSource_File_Property", "Set(Uno.UX.PropertyObject,Uno.UX.FileSource,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Resources::FileImageSource*>(obj, ::TYPES[0/*Fuse.Resources.FileImageSource*/]))->File(v);
}

// public v2_FuseResourcesFileImageSource_File_Property(Fuse.Resources.FileImageSource obj, Uno.UX.Selector name) [instance] :323
void v2_FuseResourcesFileImageSource_File_Property::ctor_3(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseResourcesFileImageSource_File_Property New(Fuse.Resources.FileImageSource obj, Uno.UX.Selector name) [static] :323
v2_FuseResourcesFileImageSource_File_Property* v2_FuseResourcesFileImageSource_File_Property::New1(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseResourcesFileImageSource_File_Property* obj1 = (v2_FuseResourcesFileImageSource_File_Property*)uNew(v2_FuseResourcesFileImageSource_File_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
