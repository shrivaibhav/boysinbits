// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color;}

namespace g{

// internal sealed class FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color :11
// {
::g::Uno::UX::PropertyAccessor_type* FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color_typeof();
void FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color__ctor_1_fn(FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color* __this);
void FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color__GetAsObject_fn(FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color__get_Name_fn(FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color* __this, ::g::Uno::UX::Selector* __retval);
void FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color__New1_fn(FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color** __retval);
void FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color__get_PropertyType_fn(FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color* __this, uType** __retval);
void FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color__SetAsObject_fn(FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color__get_SupportsOriginSetter_fn(FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color* __this, bool* __retval);

struct FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color_typeof()->Init(), _name_; }

    void ctor_1();
    static FuseUXKitsAlive_accessor_Fuse_Controls_Shape_Color* New1();
};
// }

} // ::g
