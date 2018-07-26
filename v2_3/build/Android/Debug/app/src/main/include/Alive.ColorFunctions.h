// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/UXFunctions/ColorFunctions.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Alive{struct ColorFunctions;}}

namespace g{
namespace Alive{

// internal static class ColorFunctions :8
// {
uClassType* ColorFunctions_typeof();
void ColorFunctions__Mix_fn(uObject* left, uObject* right, uObject* weight, uObject** __retval);
void ColorFunctions__WithOpacity_fn(uObject* value, uObject* opacity, uObject** __retval);

struct ColorFunctions : uObject
{
    static uObject* Mix(uObject* left, uObject* right, uObject* weight);
    static uObject* WithOpacity(uObject* value, uObject* opacity);
};
// }

}} // ::g::Alive
