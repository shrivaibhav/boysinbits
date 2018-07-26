// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Animations{struct Move;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseAnimationsMove_Y_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseAnimationsMove_Y_Property :417
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseAnimationsMove_Y_Property_typeof();
void FuseUXKitsAlive_FuseAnimationsMove_Y_Property__ctor_3_fn(FuseUXKitsAlive_FuseAnimationsMove_Y_Property* __this, ::g::Fuse::Animations::Move* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseAnimationsMove_Y_Property__Get1_fn(FuseUXKitsAlive_FuseAnimationsMove_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void FuseUXKitsAlive_FuseAnimationsMove_Y_Property__New1_fn(::g::Fuse::Animations::Move* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseAnimationsMove_Y_Property** __retval);
void FuseUXKitsAlive_FuseAnimationsMove_Y_Property__get_Object_fn(FuseUXKitsAlive_FuseAnimationsMove_Y_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseAnimationsMove_Y_Property__Set1_fn(FuseUXKitsAlive_FuseAnimationsMove_Y_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct FuseUXKitsAlive_FuseAnimationsMove_Y_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Animations::Move*> _obj;

    void ctor_3(::g::Fuse::Animations::Move* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseAnimationsMove_Y_Property* New1(::g::Fuse::Animations::Move* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
