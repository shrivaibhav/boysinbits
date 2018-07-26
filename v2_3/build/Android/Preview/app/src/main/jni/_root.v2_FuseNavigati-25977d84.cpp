// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_FuseNavigati-25977d84.h>
#include <Fuse.Navigation.Navig-ae9e86c7.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_FuseNavigationNavigationAnimation_Scale_Property :362
// {
static void v2_FuseNavigationNavigationAnimation_Scale_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Navigation::NavigationAnimation_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Navigation.NavigationAnimation*/], offsetof(v2_FuseNavigationNavigationAnimation_Scale_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_FuseNavigationNavigationAnimation_Scale_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_FuseNavigationNavigationAnimation_Scale_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_FuseNavigationNavigationAnimation_Scale_Property", options);
    type->fp_build_ = v2_FuseNavigationNavigationAnimation_Scale_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_FuseNavigationNavigationAnimation_Scale_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_FuseNavigationNavigationAnimation_Scale_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_FuseNavigationNavigationAnimation_Scale_Property__Set1_fn;
    return type;
}

// public v2_FuseNavigationNavigationAnimation_Scale_Property(Fuse.Navigation.NavigationAnimation obj, Uno.UX.Selector name) :365
void v2_FuseNavigationNavigationAnimation_Scale_Property__ctor_3_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :367
void v2_FuseNavigationNavigationAnimation_Scale_Property__Get1_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("v2_FuseNavigationNavigationAnimation_Scale_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Navigation::NavigationAnimation*>(obj, ::TYPES[0/*Fuse.Navigation.NavigationAnimation*/]))->Scale(), void();
}

// public v2_FuseNavigationNavigationAnimation_Scale_Property New(Fuse.Navigation.NavigationAnimation obj, Uno.UX.Selector name) :365
void v2_FuseNavigationNavigationAnimation_Scale_Property__New1_fn(::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector* name, v2_FuseNavigationNavigationAnimation_Scale_Property** __retval)
{
    *__retval = v2_FuseNavigationNavigationAnimation_Scale_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :366
void v2_FuseNavigationNavigationAnimation_Scale_Property__get_Object_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :368
void v2_FuseNavigationNavigationAnimation_Scale_Property__Set1_fn(v2_FuseNavigationNavigationAnimation_Scale_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("v2_FuseNavigationNavigationAnimation_Scale_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Navigation::NavigationAnimation*>(obj, ::TYPES[0/*Fuse.Navigation.NavigationAnimation*/]))->Scale(v_);
}

// public v2_FuseNavigationNavigationAnimation_Scale_Property(Fuse.Navigation.NavigationAnimation obj, Uno.UX.Selector name) [instance] :365
void v2_FuseNavigationNavigationAnimation_Scale_Property::ctor_3(::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_FuseNavigationNavigationAnimation_Scale_Property New(Fuse.Navigation.NavigationAnimation obj, Uno.UX.Selector name) [static] :365
v2_FuseNavigationNavigationAnimation_Scale_Property* v2_FuseNavigationNavigationAnimation_Scale_Property::New1(::g::Fuse::Navigation::NavigationAnimation* obj, ::g::Uno::UX::Selector name)
{
    v2_FuseNavigationNavigationAnimation_Scale_Property* obj1 = (v2_FuseNavigationNavigationAnimation_Scale_Property*)uNew(v2_FuseNavigationNavigationAnimation_Scale_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
