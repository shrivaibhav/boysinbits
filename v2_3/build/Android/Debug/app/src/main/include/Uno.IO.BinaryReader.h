// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/UnoCore/1.9.0/Source/Uno/IO/BinaryReader.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace IO{struct BinaryReader;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class BinaryReader :7
// {
struct BinaryReader_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BinaryReader_type* BinaryReader_typeof();
void BinaryReader__ctor__fn(BinaryReader* __this, ::g::Uno::IO::Stream* stream);
void BinaryReader__Dispose_fn(BinaryReader* __this);
void BinaryReader__get_LittleEndian_fn(BinaryReader* __this, bool* __retval);
void BinaryReader__set_LittleEndian_fn(BinaryReader* __this, bool* value);
void BinaryReader__New1_fn(::g::Uno::IO::Stream* stream, BinaryReader** __retval);
void BinaryReader__ReadBytes_fn(BinaryReader* __this, int32_t* byteCount, uArray** __retval);

struct BinaryReader : uObject
{
    uStrong< ::g::Uno::IO::Stream*> _stream;
    uStrong<uArray*> _buffer;
    bool _LittleEndian;

    void ctor_(::g::Uno::IO::Stream* stream);
    void Dispose();
    bool LittleEndian();
    void LittleEndian(bool value);
    uArray* ReadBytes(int32_t byteCount);
    static BinaryReader* New1(::g::Uno::IO::Stream* stream);
};
// }

}}} // ::g::Uno::IO
