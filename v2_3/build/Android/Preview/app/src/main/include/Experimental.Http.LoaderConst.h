// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Experimental.Http/1.9.0/BinaryLoader.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Experimental{namespace Http{struct LoaderConst;}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler;}}}}

namespace g{
namespace Experimental{
namespace Http{

// internal static class LoaderConst :9
// {
uClassType* LoaderConst_typeof();

struct LoaderConst : uObject
{
    static uSStrong< ::g::Uno::Net::Http::HttpMessageHandler*> Handler_;
    static uSStrong< ::g::Uno::Net::Http::HttpMessageHandler*>& Handler() { return Handler_; }
};
// }

}}} // ::g::Experimental::Http
