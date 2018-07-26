// This file was generated based on build/Android/Preview/cache/ux15/v2.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Resources{struct FileImageSource;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct v2_FuseResourcesFileImageSource_File_Property;}

namespace g{

// internal sealed class v2_FuseResourcesFileImageSource_File_Property :320
// {
::g::Uno::UX::Property1_type* v2_FuseResourcesFileImageSource_File_Property_typeof();
void v2_FuseResourcesFileImageSource_File_Property__ctor_3_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector* name);
void v2_FuseResourcesFileImageSource_File_Property__Get1_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource** __retval);
void v2_FuseResourcesFileImageSource_File_Property__New1_fn(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector* name, v2_FuseResourcesFileImageSource_File_Property** __retval);
void v2_FuseResourcesFileImageSource_File_Property__get_Object_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void v2_FuseResourcesFileImageSource_File_Property__Set1_fn(v2_FuseResourcesFileImageSource_File_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::FileSource* v, uObject* origin);

struct v2_FuseResourcesFileImageSource_File_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Resources::FileImageSource*> _obj;

    void ctor_3(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector name);
    static v2_FuseResourcesFileImageSource_File_Property* New1(::g::Fuse::Resources::FileImageSource* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
