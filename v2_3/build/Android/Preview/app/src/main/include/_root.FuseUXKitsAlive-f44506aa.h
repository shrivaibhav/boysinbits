// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Double.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Set;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property :489
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property_typeof();
void FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property__ctor_3_fn(FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property* __this, ::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property__Get1_fn(FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* __retval);
void FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property__New1_fn(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property** __retval);
void FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property__get_Object_fn(FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property__Set1_fn(FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, double* v, uObject* origin);

struct FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Actions::Set*> _obj;

    void ctor_3(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseTriggersActionsSetdouble_Value_Property* New1(::g::Fuse::Triggers::Actions::Set* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
