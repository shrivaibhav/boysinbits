// This file was generated based on '.uno/ux15/v2.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_AliveMediaSc-1ab98145.h>
#include <Alive.MediaScroller.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_AliveMediaScroller_TopBarColor_Property :218
// {
static void v2_AliveMediaScroller_TopBarColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Alive::MediaScroller_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Alive.MediaScroller*/], offsetof(v2_AliveMediaScroller_TopBarColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_AliveMediaScroller_TopBarColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_AliveMediaScroller_TopBarColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_AliveMediaScroller_TopBarColor_Property", options);
    type->fp_build_ = v2_AliveMediaScroller_TopBarColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_AliveMediaScroller_TopBarColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_AliveMediaScroller_TopBarColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_AliveMediaScroller_TopBarColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_AliveMediaScroller_TopBarColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :223
void v2_AliveMediaScroller_TopBarColor_Property__Get1_fn(v2_AliveMediaScroller_TopBarColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Alive::MediaScroller*>(obj, ::TYPES[0/*Alive.MediaScroller*/]))->TopBarColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object() :222
void v2_AliveMediaScroller_TopBarColor_Property__get_Object_fn(v2_AliveMediaScroller_TopBarColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :224
void v2_AliveMediaScroller_TopBarColor_Property__Set1_fn(v2_AliveMediaScroller_TopBarColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Alive::MediaScroller*>(obj, ::TYPES[0/*Alive.MediaScroller*/]))->SetTopBarColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :225
void v2_AliveMediaScroller_TopBarColor_Property__get_SupportsOriginSetter_fn(v2_AliveMediaScroller_TopBarColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

} // ::g