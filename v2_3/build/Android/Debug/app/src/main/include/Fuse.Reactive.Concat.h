// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.Reactive.Expressions/1.9.0/Operators.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.InfixOperator.h>
namespace g{namespace Fuse{namespace Reactive{struct Concat;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Concat :26
// {
::g::Fuse::Reactive::BinaryOperator_type* Concat_typeof();
void Concat__TryCompute1_fn(Concat* __this, uObject* left, uObject* right, uObject** result, bool* __retval);
void Concat__TryComputeImpl_fn(uObject* left, uObject* right, uObject** result, bool* __retval);

struct Concat : ::g::Fuse::Reactive::InfixOperator
{
    static bool TryComputeImpl(uObject* left, uObject* right, uObject** result);
};
// }

}}} // ::g::Fuse::Reactive
