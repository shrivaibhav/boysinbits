// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Uno.Net.Sockets/1.9.0/Socket.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Sockets{

// public sealed class Socket :263
// {
struct Socket_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Socket_type* Socket_typeof();
void Socket__Dispose_fn(Socket* __this);
void Socket__Dispose1_fn(Socket* __this, bool* disposing);
void Socket__Receive1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval);
void Socket__Send1_fn(Socket* __this, uArray* buffer, int32_t* offset, int32_t* length, int32_t* flags, int32_t* __retval);

struct Socket : uObject
{
    int _handle;

    void Dispose();
    void Dispose1(bool disposing);
    int32_t Receive1(uArray* buffer, int32_t offset, int32_t length, int32_t flags);
    int32_t Send1(uArray* buffer, int32_t offset, int32_t length, int32_t flags);
};
// }

}}}} // ::g::Uno::Net::Sockets
