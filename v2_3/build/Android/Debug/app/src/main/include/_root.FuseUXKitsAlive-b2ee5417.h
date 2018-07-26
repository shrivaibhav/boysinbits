// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Alive{struct Drawer;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_AliveDrawer_HideButton_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_AliveDrawer_HideButton_Property :547
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_AliveDrawer_HideButton_Property_typeof();
void FuseUXKitsAlive_AliveDrawer_HideButton_Property__ctor_3_fn(FuseUXKitsAlive_AliveDrawer_HideButton_Property* __this, ::g::Alive::Drawer* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_AliveDrawer_HideButton_Property__Get1_fn(FuseUXKitsAlive_AliveDrawer_HideButton_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void FuseUXKitsAlive_AliveDrawer_HideButton_Property__New1_fn(::g::Alive::Drawer* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_AliveDrawer_HideButton_Property** __retval);
void FuseUXKitsAlive_AliveDrawer_HideButton_Property__get_Object_fn(FuseUXKitsAlive_AliveDrawer_HideButton_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_AliveDrawer_HideButton_Property__Set1_fn(FuseUXKitsAlive_AliveDrawer_HideButton_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);
void FuseUXKitsAlive_AliveDrawer_HideButton_Property__get_SupportsOriginSetter_fn(FuseUXKitsAlive_AliveDrawer_HideButton_Property* __this, bool* __retval);

struct FuseUXKitsAlive_AliveDrawer_HideButton_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Alive::Drawer*> _obj;

    void ctor_3(::g::Alive::Drawer* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_AliveDrawer_HideButton_Property* New1(::g::Alive::Drawer* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
