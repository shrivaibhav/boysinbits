// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.Route-a9d98f4f.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Navigation{struct GotoRouteCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class GotoRouteCommand :178
// {
::g::Fuse::Navigation::RouteModificationCommand_type* GotoRouteCommand_typeof();
void GotoRouteCommand__ProcessArguments_fn(GotoRouteCommand* __this, ::g::Fuse::Navigation::RouterRequest* request, uArray* args, bool* __retval);

struct GotoRouteCommand : ::g::Fuse::Navigation::RouteModificationCommand
{
};
// }

}}} // ::g::Fuse::Navigation
