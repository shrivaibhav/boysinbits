// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.Marshal/1.9.0/Computer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{struct ComputeException;}}

namespace g{
namespace Fuse{

// public sealed class ComputeException :7
// {
::g::Uno::Exception_type* ComputeException_typeof();
void ComputeException__ctor_3_fn(ComputeException* __this, uString* op, uObject* a, uObject* b);
void ComputeException__New4_fn(uString* op, uObject* a, uObject* b, ComputeException** __retval);

struct ComputeException : ::g::Uno::Exception
{
    void ctor_3(uString* op, uObject* a, uObject* b);
    static ComputeException* New4(uString* op, uObject* a, uObject* b);
};
// }

}} // ::g::Fuse
