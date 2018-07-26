// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_AliveListVie-6a8c5f95.h>
#include <Alive.ListView.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_AliveListView_Items_Property :266
// {
static void v2_AliveListView_Items_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Alive::ListView_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Alive.ListView*/], offsetof(v2_AliveListView_Items_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_AliveListView_Items_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_AliveListView_Items_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_AliveListView_Items_Property", options);
    type->fp_build_ = v2_AliveListView_Items_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_AliveListView_Items_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_AliveListView_Items_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_AliveListView_Items_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_AliveListView_Items_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public v2_AliveListView_Items_Property(Alive.ListView obj, Uno.UX.Selector name) :269
void v2_AliveListView_Items_Property__ctor_3_fn(v2_AliveListView_Items_Property* __this, ::g::Alive::ListView* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed object Get(Uno.UX.PropertyObject obj) :271
void v2_AliveListView_Items_Property__Get1_fn(v2_AliveListView_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("v2_AliveListView_Items_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Alive::ListView*>(obj, ::TYPES[0/*Alive.ListView*/]))->Items(), void();
}

// public v2_AliveListView_Items_Property New(Alive.ListView obj, Uno.UX.Selector name) :269
void v2_AliveListView_Items_Property__New1_fn(::g::Alive::ListView* obj, ::g::Uno::UX::Selector* name, v2_AliveListView_Items_Property** __retval)
{
    *__retval = v2_AliveListView_Items_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :270
void v2_AliveListView_Items_Property__get_Object_fn(v2_AliveListView_Items_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :272
void v2_AliveListView_Items_Property__Set1_fn(v2_AliveListView_Items_Property* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("v2_AliveListView_Items_Property", "Set(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Alive::ListView*>(obj, ::TYPES[0/*Alive.ListView*/]))->SetItems(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :273
void v2_AliveListView_Items_Property__get_SupportsOriginSetter_fn(v2_AliveListView_Items_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public v2_AliveListView_Items_Property(Alive.ListView obj, Uno.UX.Selector name) [instance] :269
void v2_AliveListView_Items_Property::ctor_3(::g::Alive::ListView* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_AliveListView_Items_Property New(Alive.ListView obj, Uno.UX.Selector name) [static] :269
v2_AliveListView_Items_Property* v2_AliveListView_Items_Property::New1(::g::Alive::ListView* obj, ::g::Uno::UX::Selector name)
{
    v2_AliveListView_Items_Property* obj1 = (v2_AliveListView_Items_Property*)uNew(v2_AliveListView_Items_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
