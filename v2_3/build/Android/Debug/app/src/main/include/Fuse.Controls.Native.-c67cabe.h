// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.Controls.Native/1.9.0/Android/Slider.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-98938546.h>
#include <Fuse.Controls.Native.-fbe3e9f9.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Slider;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Slider :15
// {
struct Slider_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IRangeView interface2;
};

Slider_type* Slider_typeof();
void Slider__Dispose_fn(Slider* __this);
void Slider__OnSeekBarChanged_fn(Slider* __this, double* rel, bool* fromUser);
void Slider__set_Progress_fn(Slider* __this, double* value);
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress);

struct Slider : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void OnSeekBarChanged(double rel, bool fromUser);
    void Progress(double value);
    static void SetProgress(::g::Java::Object* handle, double progress);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
