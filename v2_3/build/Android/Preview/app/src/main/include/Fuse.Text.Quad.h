// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.Text/1.9.0/Renderer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
namespace g{namespace Fuse{namespace Text{struct Quad;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal struct Quad :50
// {
uStructType* Quad_typeof();
void Quad__ctor__fn(Quad* __this, ::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale);
void Quad__New1_fn(::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale, Quad* __retval);

struct Quad
{
    ::g::Uno::Float2 Position;
    ::g::Uno::Recti TexCoords;
    float Scale;
    ::g::Uno::Rect Rect;

    void ctor_(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale);
};

Quad Quad__New1(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale);
// }

}}} // ::g::Fuse::Text
