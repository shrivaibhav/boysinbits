// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/UnoCore/1.9.0/Source/Uno/IO/FileStream.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <cstdio>
#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace IO{

// internal extern struct FILEPtr :9
// {
uStructType* FILEPtr_typeof();
void FILEPtr__OpenOrThrow_fn(uString* filename, uString* mode, FILE** __retval);
void FILEPtr__Throw_fn(uString* filename);

struct FILEPtr
{
    static FILE* OpenOrThrow(uString* filename, uString* mode);
    static void Throw(uString* filename);
};
// }

}}} // ::g::Uno::IO
