// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.9.0/JSCallback.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct JSCallback__ActionClosure;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// private sealed class JSCallback.ActionClosure :37
// {
uType* JSCallback__ActionClosure_typeof();
void JSCallback__ActionClosure__ctor__fn(JSCallback__ActionClosure* __this, uDelegate* action);
void JSCallback__ActionClosure__New1_fn(uDelegate* action, JSCallback__ActionClosure** __retval);
void JSCallback__ActionClosure__Run_fn(JSCallback__ActionClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);

struct JSCallback__ActionClosure : uObject
{
    uStrong<uDelegate*> _action;

    void ctor_(uDelegate* action);
    uObject* Run(::g::Fuse::Scripting::Context* context, uArray* args);
    static JSCallback__ActionClosure* New1(uDelegate* action);
};
// }

}}} // ::g::Fuse::Scripting
