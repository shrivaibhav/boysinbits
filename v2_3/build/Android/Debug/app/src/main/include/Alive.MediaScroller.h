// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.UXKits.Alive/1.9.0/Docs/MediaScroller.ux.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Container.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Size.h>
namespace g{namespace Alive{struct MediaScroller;}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Motion{struct ScrollViewMotion;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Alive{

// public partial sealed class MediaScroller :75
// {
::g::Fuse::Controls::Panel_type* MediaScroller_typeof();
void MediaScroller__ctor_8_fn(MediaScroller* __this, ::g::Fuse::Elements::Element* Media1);
void MediaScroller__InitializeUX_fn(MediaScroller* __this);
void MediaScroller__New5_fn(::g::Fuse::Elements::Element* Media1, MediaScroller** __retval);
void MediaScroller__SetTopBarColor_fn(MediaScroller* __this, ::g::Uno::Float4* value, uObject* origin);
void MediaScroller__get_TopBarColor_fn(MediaScroller* __this, ::g::Uno::Float4* __retval);
void MediaScroller__set_TopBarColor_fn(MediaScroller* __this, ::g::Uno::Float4* value);

struct MediaScroller : ::g::Fuse::Controls::Container
{
    ::g::Uno::Float4 _field_TopBarColor;
    uStrong< ::g::Fuse::Elements::Element*> Media;
    uStrong< ::g::Uno::UX::Property1*> fadeOverlay_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Height_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Height_inst;
    uStrong< ::g::Uno::UX::Property1*> fadeOverlay_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_To_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Y_inst;
    uStrong< ::g::Uno::UX::Property1*> temp4_Factor_inst;
    uStrong< ::g::Fuse::Controls::Panel*> topPanel;
    uStrong< ::g::Fuse::Controls::Panel*> topBarPanel;
    uStrong< ::g::Fuse::Controls::Panel*> mediaAndOverlay;
    uStrong< ::g::Fuse::Controls::Panel*> bottomBar;
    uStrong< ::g::Fuse::Controls::Rectangle*> fadeOverlay;
    uStrong< ::g::Fuse::Controls::Panel*> mediaOverlay;
    uStrong< ::g::Fuse::Controls::Panel*> mediaPanel;
    uStrong< ::g::Fuse::Controls::ScrollView*> scrollView;
    uStrong< ::g::Fuse::Motion::ScrollViewMotion*> scrollViewMotion;
    uStrong< ::g::Fuse::Controls::StackPanel*> content;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MediaScroller_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MediaScroller_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MediaScroller_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MediaScroller_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MediaScroller_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MediaScroller_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MediaScroller_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MediaScroller_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MediaScroller_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MediaScroller_typeof()->Init(), __selector9_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MediaScroller_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MediaScroller_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MediaScroller_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MediaScroller_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MediaScroller_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MediaScroller_typeof()->Init(), __selector15_; }

    void ctor_8(::g::Fuse::Elements::Element* Media1);
    void InitializeUX();
    void SetTopBarColor(::g::Uno::Float4 value, uObject* origin);
    ::g::Uno::Float4 TopBarColor();
    void TopBarColor(::g::Uno::Float4 value);
    static MediaScroller* New5(::g::Fuse::Elements::Element* Media1);
};
// }

}} // ::g::Alive
