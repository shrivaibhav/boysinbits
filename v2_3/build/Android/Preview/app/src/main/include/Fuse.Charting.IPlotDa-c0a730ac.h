// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.Charting/1.9.0/PlotDataItem.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Charting{

// internal abstract interface IPlotDataItemListener<T> :23
// {
uInterfaceType* IPlotDataItemListener_typeof();

struct IPlotDataItemListener
{
    void(*fp_OnNewData)(uObject*, void*);
    template<class T>
    static void OnNewData(const uInterface& __this, T entry) { __this.VTable<IPlotDataItemListener>()->fp_OnNewData(__this, uConstrain(__this->__type->GetBase(IPlotDataItemListener_typeof())->T(0), entry)); }
    static void OnNewData_ex(const uInterface& __this, void* entry) { __this.VTable<IPlotDataItemListener>()->fp_OnNewData(__this, entry); }
};
// }

}}} // ::g::Fuse::Charting
