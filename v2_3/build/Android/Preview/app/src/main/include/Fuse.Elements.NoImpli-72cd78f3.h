// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.Elements/1.9.0/BoxSizing.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.Standar-ab3ec62c.h>
namespace g{namespace Fuse{namespace Elements{struct NoImplicitMaxBoxSizing;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class NoImplicitMaxBoxSizing :416
// {
::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof();
void NoImplicitMaxBoxSizing__ctor_2_fn(NoImplicitMaxBoxSizing* __this);
void NoImplicitMaxBoxSizing__New2_fn(NoImplicitMaxBoxSizing** __retval);

struct NoImplicitMaxBoxSizing : ::g::Fuse::Elements::StandardBoxSizing
{
    static uSStrong<NoImplicitMaxBoxSizing*> Singleton1_;
    static uSStrong<NoImplicitMaxBoxSizing*>& Singleton1() { return NoImplicitMaxBoxSizing_typeof()->Init(), Singleton1_; }

    void ctor_2();
    static NoImplicitMaxBoxSizing* New2();
};
// }

}}} // ::g::Fuse::Elements
