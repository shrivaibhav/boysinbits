// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.Controls.Navigation/1.9.0/CommonNavigationPages.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct CommonNavigationPages;}}}
namespace g{namespace Fuse{namespace Controls{struct CommonNavigationPages__AddedPage;}}}
namespace g{namespace Fuse{namespace Controls{struct CommonNavigationPages__PagesMap;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class CommonNavigationPages :9
// {
uType* CommonNavigationPages_typeof();
void CommonNavigationPages__ctor__fn(CommonNavigationPages* __this);
void CommonNavigationPages__New1_fn(CommonNavigationPages** __retval);
void CommonNavigationPages__OnPagesChanged_fn(CommonNavigationPages* __this);
void CommonNavigationPages__Rooted_fn(CommonNavigationPages* __this, ::g::Fuse::Controls::NavigationControl* parent);
void CommonNavigationPages__Unrooted_fn(CommonNavigationPages* __this);
void CommonNavigationPages__UpdatePages_fn(CommonNavigationPages* __this);

struct CommonNavigationPages : uObject
{
    uStrong<CommonNavigationPages__PagesMap*> _pagesMap;
    uStrong<uObject*> _pages;
    uStrong< ::g::Fuse::Controls::NavigationControl*> _parent;
    uStrong< ::g::Uno::Collections::List*> _addedPages;

    void ctor_();
    void OnPagesChanged();
    void Rooted(::g::Fuse::Controls::NavigationControl* parent);
    void Unrooted();
    void UpdatePages();
    static CommonNavigationPages* New1();
};
// }

}}} // ::g::Fuse::Controls
