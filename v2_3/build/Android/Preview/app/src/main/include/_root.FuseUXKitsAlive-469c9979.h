// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_accessor_Fuse_Node_Parent;}

namespace g{

// internal sealed class FuseUXKitsAlive_accessor_Fuse_Node_Parent :121
// {
::g::Uno::UX::PropertyAccessor_type* FuseUXKitsAlive_accessor_Fuse_Node_Parent_typeof();
void FuseUXKitsAlive_accessor_Fuse_Node_Parent__ctor_1_fn(FuseUXKitsAlive_accessor_Fuse_Node_Parent* __this);
void FuseUXKitsAlive_accessor_Fuse_Node_Parent__GetAsObject_fn(FuseUXKitsAlive_accessor_Fuse_Node_Parent* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FuseUXKitsAlive_accessor_Fuse_Node_Parent__get_Name_fn(FuseUXKitsAlive_accessor_Fuse_Node_Parent* __this, ::g::Uno::UX::Selector* __retval);
void FuseUXKitsAlive_accessor_Fuse_Node_Parent__New1_fn(FuseUXKitsAlive_accessor_Fuse_Node_Parent** __retval);
void FuseUXKitsAlive_accessor_Fuse_Node_Parent__get_PropertyType_fn(FuseUXKitsAlive_accessor_Fuse_Node_Parent* __this, uType** __retval);

struct FuseUXKitsAlive_accessor_Fuse_Node_Parent : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return FuseUXKitsAlive_accessor_Fuse_Node_Parent_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return FuseUXKitsAlive_accessor_Fuse_Node_Parent_typeof()->Init(), _name_; }

    void ctor_1();
    static FuseUXKitsAlive_accessor_Fuse_Node_Parent* New1();
};
// }

} // ::g
