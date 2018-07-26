// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/UXFunctions/ColorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Alive{struct TransparentizeFunction;}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Alive{

// public sealed class TransparentizeFunction :68
// {
::g::Fuse::Reactive::BinaryOperator_type* TransparentizeFunction_typeof();
void TransparentizeFunction__ctor_4_fn(TransparentizeFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* transparency);
void TransparentizeFunction__Compute_fn(TransparentizeFunction* __this, uObject* color, uObject* transparency, uObject** __retval);
void TransparentizeFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* transparency, TransparentizeFunction** __retval);
void TransparentizeFunction__ToString_fn(TransparentizeFunction* __this, uString** __retval);

struct TransparentizeFunction : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* transparency);
    static TransparentizeFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* transparency);
};
// }

}} // ::g::Alive
