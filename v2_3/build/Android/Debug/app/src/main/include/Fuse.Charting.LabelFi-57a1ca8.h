// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.Charting/1.9.0/PlotAxis.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Charting.FilterObservable.h>
#include <Fuse.IArray.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Reactive.IObserver.h>
namespace g{namespace Fuse{namespace Charting{struct AxisFilter;}}}
namespace g{namespace Fuse{namespace Charting{struct LabelFilterObservable;}}}

namespace g{
namespace Fuse{
namespace Charting{

// internal sealed class LabelFilterObservable :270
// {
::g::Fuse::Charting::FilterObservable_type* LabelFilterObservable_typeof();
void LabelFilterObservable__Accept_fn(LabelFilterObservable* __this, uObject* value, int32_t* axisIndex, int32_t* axisCount, bool* __retval);

struct LabelFilterObservable : ::g::Fuse::Charting::FilterObservable
{
    uStrong< ::g::Fuse::Charting::AxisFilter*> Filter;
};
// }

}}} // ::g::Fuse::Charting
