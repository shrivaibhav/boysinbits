// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/.uno/ux15/Fuse.UXKits.Alive.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct FuseUXKitsAlive_FuseControlsPanel_Color_Property;}

namespace g{

// internal sealed class FuseUXKitsAlive_FuseControlsPanel_Color_Property :334
// {
::g::Uno::UX::Property1_type* FuseUXKitsAlive_FuseControlsPanel_Color_Property_typeof();
void FuseUXKitsAlive_FuseControlsPanel_Color_Property__ctor_3_fn(FuseUXKitsAlive_FuseControlsPanel_Color_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name);
void FuseUXKitsAlive_FuseControlsPanel_Color_Property__Get1_fn(FuseUXKitsAlive_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void FuseUXKitsAlive_FuseControlsPanel_Color_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, FuseUXKitsAlive_FuseControlsPanel_Color_Property** __retval);
void FuseUXKitsAlive_FuseControlsPanel_Color_Property__get_Object_fn(FuseUXKitsAlive_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void FuseUXKitsAlive_FuseControlsPanel_Color_Property__Set1_fn(FuseUXKitsAlive_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void FuseUXKitsAlive_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn(FuseUXKitsAlive_FuseControlsPanel_Color_Property* __this, bool* __retval);

struct FuseUXKitsAlive_FuseControlsPanel_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Panel*> _obj;

    void ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
    static FuseUXKitsAlive_FuseControlsPanel_Color_Property* New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
