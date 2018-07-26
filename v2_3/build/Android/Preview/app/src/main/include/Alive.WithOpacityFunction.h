// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/UXFunctions/ColorFunctions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.BinaryOperator.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Alive{struct WithOpacityFunction;}}
namespace g{namespace Fuse{namespace Reactive{struct Expression;}}}

namespace g{
namespace Alive{

// public sealed class WithOpacityFunction :48
// {
::g::Fuse::Reactive::BinaryOperator_type* WithOpacityFunction_typeof();
void WithOpacityFunction__ctor_4_fn(WithOpacityFunction* __this, ::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* opacity);
void WithOpacityFunction__Compute_fn(WithOpacityFunction* __this, uObject* color, uObject* opacity, uObject** __retval);
void WithOpacityFunction__New1_fn(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* opacity, WithOpacityFunction** __retval);
void WithOpacityFunction__ToString_fn(WithOpacityFunction* __this, uString** __retval);

struct WithOpacityFunction : ::g::Fuse::Reactive::BinaryOperator
{
    void ctor_4(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* opacity);
    static WithOpacityFunction* New1(::g::Fuse::Reactive::Expression* color, ::g::Fuse::Reactive::Expression* opacity);
};
// }

}} // ::g::Alive
