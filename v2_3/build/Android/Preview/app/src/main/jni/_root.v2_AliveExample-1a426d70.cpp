// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_AliveExample-1a426d70.h>
#include <Alive.ExampleApp.ProgramItem.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_AliveExampleAppProgramItem_IsAttending_Property :284
// {
static void v2_AliveExampleAppProgramItem_IsAttending_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Alive::ExampleApp::ProgramItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Alive.ExampleApp.ProgramItem*/], offsetof(v2_AliveExampleAppProgramItem_IsAttending_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_AliveExampleAppProgramItem_IsAttending_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_AliveExampleAppProgramItem_IsAttending_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_AliveExampleAppProgramItem_IsAttending_Property", options);
    type->fp_build_ = v2_AliveExampleAppProgramItem_IsAttending_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_AliveExampleAppProgramItem_IsAttending_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_AliveExampleAppProgramItem_IsAttending_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_AliveExampleAppProgramItem_IsAttending_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_AliveExampleAppProgramItem_IsAttending_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public v2_AliveExampleAppProgramItem_IsAttending_Property(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) :287
void v2_AliveExampleAppProgramItem_IsAttending_Property__ctor_3_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :289
void v2_AliveExampleAppProgramItem_IsAttending_Property__Get1_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("v2_AliveExampleAppProgramItem_IsAttending_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->IsAttending(), void();
}

// public v2_AliveExampleAppProgramItem_IsAttending_Property New(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) :287
void v2_AliveExampleAppProgramItem_IsAttending_Property__New1_fn(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector* name, v2_AliveExampleAppProgramItem_IsAttending_Property** __retval)
{
    *__retval = v2_AliveExampleAppProgramItem_IsAttending_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :288
void v2_AliveExampleAppProgramItem_IsAttending_Property__get_Object_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :290
void v2_AliveExampleAppProgramItem_IsAttending_Property__Set1_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("v2_AliveExampleAppProgramItem_IsAttending_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->SetIsAttending(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :291
void v2_AliveExampleAppProgramItem_IsAttending_Property__get_SupportsOriginSetter_fn(v2_AliveExampleAppProgramItem_IsAttending_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public v2_AliveExampleAppProgramItem_IsAttending_Property(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) [instance] :287
void v2_AliveExampleAppProgramItem_IsAttending_Property::ctor_3(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_AliveExampleAppProgramItem_IsAttending_Property New(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) [static] :287
v2_AliveExampleAppProgramItem_IsAttending_Property* v2_AliveExampleAppProgramItem_IsAttending_Property::New1(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector name)
{
    v2_AliveExampleAppProgramItem_IsAttending_Property* obj1 = (v2_AliveExampleAppProgramItem_IsAttending_Property*)uNew(v2_AliveExampleAppProgramItem_IsAttending_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
