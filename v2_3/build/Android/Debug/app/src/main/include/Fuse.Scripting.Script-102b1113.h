// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.Scripting/1.9.0/ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMethod.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethodInline;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptMethodInline :74
// {
::g::Fuse::Scripting::ScriptMethod_type* ScriptMethodInline_typeof();
void ScriptMethodInline__ctor_3_fn(ScriptMethodInline* __this, uString* name, uString* code);
void ScriptMethodInline__Call_fn(ScriptMethodInline* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval);
void ScriptMethodInline__New2_fn(uString* name, uString* code, ScriptMethodInline** __retval);

struct ScriptMethodInline : ::g::Fuse::Scripting::ScriptMethod
{
    uStrong<uString*> Code;

    void ctor_3(uString* name, uString* code);
    static ScriptMethodInline* New2(uString* name, uString* code);
};
// }

}}} // ::g::Fuse::Scripting
