// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_AliveExample-75cea4a5.h>
#include <Alive.ExampleApp.ProgramItem.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class v2_AliveExampleAppProgramItem_CategoryColor_Property :275
// {
static void v2_AliveExampleAppProgramItem_CategoryColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Alive::ExampleApp::ProgramItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Alive.ExampleApp.ProgramItem*/], offsetof(v2_AliveExampleAppProgramItem_CategoryColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* v2_AliveExampleAppProgramItem_CategoryColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(v2_AliveExampleAppProgramItem_CategoryColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("v2_AliveExampleAppProgramItem_CategoryColor_Property", options);
    type->fp_build_ = v2_AliveExampleAppProgramItem_CategoryColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))v2_AliveExampleAppProgramItem_CategoryColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))v2_AliveExampleAppProgramItem_CategoryColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))v2_AliveExampleAppProgramItem_CategoryColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))v2_AliveExampleAppProgramItem_CategoryColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public v2_AliveExampleAppProgramItem_CategoryColor_Property(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) :278
void v2_AliveExampleAppProgramItem_CategoryColor_Property__ctor_3_fn(v2_AliveExampleAppProgramItem_CategoryColor_Property* __this, ::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :280
void v2_AliveExampleAppProgramItem_CategoryColor_Property__Get1_fn(v2_AliveExampleAppProgramItem_CategoryColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("v2_AliveExampleAppProgramItem_CategoryColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->CategoryColor(), void();
}

// public v2_AliveExampleAppProgramItem_CategoryColor_Property New(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) :278
void v2_AliveExampleAppProgramItem_CategoryColor_Property__New1_fn(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector* name, v2_AliveExampleAppProgramItem_CategoryColor_Property** __retval)
{
    *__retval = v2_AliveExampleAppProgramItem_CategoryColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :279
void v2_AliveExampleAppProgramItem_CategoryColor_Property__get_Object_fn(v2_AliveExampleAppProgramItem_CategoryColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :281
void v2_AliveExampleAppProgramItem_CategoryColor_Property__Set1_fn(v2_AliveExampleAppProgramItem_CategoryColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("v2_AliveExampleAppProgramItem_CategoryColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Alive::ExampleApp::ProgramItem*>(obj, ::TYPES[0/*Alive.ExampleApp.ProgramItem*/]))->SetCategoryColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :282
void v2_AliveExampleAppProgramItem_CategoryColor_Property__get_SupportsOriginSetter_fn(v2_AliveExampleAppProgramItem_CategoryColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public v2_AliveExampleAppProgramItem_CategoryColor_Property(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) [instance] :278
void v2_AliveExampleAppProgramItem_CategoryColor_Property::ctor_3(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public v2_AliveExampleAppProgramItem_CategoryColor_Property New(Alive.ExampleApp.ProgramItem obj, Uno.UX.Selector name) [static] :278
v2_AliveExampleAppProgramItem_CategoryColor_Property* v2_AliveExampleAppProgramItem_CategoryColor_Property::New1(::g::Alive::ExampleApp::ProgramItem* obj, ::g::Uno::UX::Selector name)
{
    v2_AliveExampleAppProgramItem_CategoryColor_Property* obj1 = (v2_AliveExampleAppProgramItem_CategoryColor_Property*)uNew(v2_AliveExampleAppProgramItem_CategoryColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
