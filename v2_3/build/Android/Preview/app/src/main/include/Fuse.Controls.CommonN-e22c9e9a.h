// This file was generated based on 'C:/Users/hp laptop/AppData/Local/Fusetools/Packages/Fuse.Controls.Navigation/1.9.0/CommonNavigationPages.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.CommonN-13b1724b.h>
#include <Fuse.Reactive.IObserver.h>
#include <Fuse.Reactive.ObserverMap-1.h>
namespace g{namespace Fuse{namespace Controls{struct CommonNavigationPages;}}}
namespace g{namespace Fuse{namespace Controls{struct CommonNavigationPages__PagesMap;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private sealed class CommonNavigationPages.PagesMap :12
// {
::g::Fuse::Reactive::ObserverMap_type* CommonNavigationPages__PagesMap_typeof();
void CommonNavigationPages__PagesMap__ctor_1_fn(CommonNavigationPages__PagesMap* __this);
void CommonNavigationPages__PagesMap__Attach1_fn(CommonNavigationPages__PagesMap* __this, ::g::Fuse::Controls::CommonNavigationPages* pageControl, uObject* obs);
void CommonNavigationPages__PagesMap__Detach1_fn(CommonNavigationPages__PagesMap* __this);
void CommonNavigationPages__PagesMap__Map_fn(CommonNavigationPages__PagesMap* __this, uObject* v, ::g::Fuse::Controls::CommonNavigationPages__AddedPage** __retval);
void CommonNavigationPages__PagesMap__New1_fn(CommonNavigationPages__PagesMap** __retval);
void CommonNavigationPages__PagesMap__OnUpdated_fn(CommonNavigationPages__PagesMap* __this);
void CommonNavigationPages__PagesMap__Unmap_fn(CommonNavigationPages__PagesMap* __this, ::g::Fuse::Controls::CommonNavigationPages__AddedPage* mv, uObject** __retval);

struct CommonNavigationPages__PagesMap : ::g::Fuse::Reactive::ObserverMap
{
    uStrong< ::g::Fuse::Controls::CommonNavigationPages*> PageControl;

    void ctor_1();
    void Attach1(::g::Fuse::Controls::CommonNavigationPages* pageControl, uObject* obs);
    void Detach1();
    static CommonNavigationPages__PagesMap* New1();
};
// }

}}} // ::g::Fuse::Controls
