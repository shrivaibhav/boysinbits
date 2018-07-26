// This file was generated based on C:/Users/Vaibhav/AppData/Local/Fusetools/Packages/Fuse.Elements/1.9.0/Drawing/ImageFill.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFil-1398d2ef.h>
#include <Fuse.ILoading.h>
#include <Fuse.Internal.IImageC-c450902.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Internal{struct ImageContainer;}}}
namespace g{namespace Fuse{namespace Internal{struct SizingContainer;}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource;}}}
namespace g{namespace Fuse{namespace Resources{struct MemoryPolicy;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{

// public class ImageFill :26
// {
struct ImageFill_type : ::g::Fuse::Drawing::Brush_type
{
    ::g::Fuse::ILoading interface0;
    ::g::Fuse::Internal::IImageContainerOwner interface1;
    ::g::Fuse::Resources::IMemoryResource interface2;
};

ImageFill_type* ImageFill_typeof();
void ImageFill__ctor_3_fn(ImageFill* __this);
void ImageFill__CleanTempTexture_fn(ImageFill* __this);
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval);
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value);
void ImageFill__get_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource** __retval);
void ImageFill__set_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource* value);
void ImageFill__FuseILoadingget_IsLoading_fn(ImageFill* __this, bool* __retval);
void ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn(ImageFill* __this);
void ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn(ImageFill* __this);
void ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn(ImageFill* __this);
void ImageFill__FuseResourcesIMemoryResourceget_IsPinned_fn(ImageFill* __this, bool* __retval);
void ImageFill__FuseResourcesIMemoryResourceget_LastUsed_fn(ImageFill* __this, double* __retval);
void ImageFill__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy** __retval);
void ImageFill__FuseResourcesIMemoryResourceSoftDispose_fn(ImageFill* __this);
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval);
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval);
void ImageFill__LoadNow_fn(ImageFill* __this);
void ImageFill__New2_fn(ImageFill** __retval);
void ImageFill__OnPinned_fn(ImageFill* __this);
void ImageFill__OnPrepare_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize);
void ImageFill__OnUnpinned_fn(ImageFill* __this);
void ImageFill__get_SizingContainer_fn(ImageFill* __this, ::g::Fuse::Internal::SizingContainer** __retval);
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval);
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value);
void ImageFill__get_StretchMode_fn(ImageFill* __this, int32_t* __retval);
void ImageFill__set_StretchMode_fn(ImageFill* __this, int32_t* value);
void ImageFill__get_WrapMode_fn(ImageFill* __this, int32_t* __retval);
void ImageFill__set_WrapMode_fn(ImageFill* __this, int32_t* value);

struct ImageFill : ::g::Fuse::Drawing::DynamicBrush
{
    static ::g::Uno::UX::Selector _sourceName_;
    static ::g::Uno::UX::Selector& _sourceName() { return ImageFill_typeof()->Init(), _sourceName_; }
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return ImageFill_typeof()->Init(), _colorName_; }
    ::g::Uno::Float4 _color;
    ImageFill__DrawParams _drawParams;
    uStrong< ::g::Uno::Graphics::Framebuffer*> _tempTexture;
    uStrong< ::g::Fuse::Internal::ImageContainer*> _container;
    static ::g::Uno::UX::Selector _wrapModeName_;
    static ::g::Uno::UX::Selector& _wrapModeName() { return ImageFill_typeof()->Init(), _wrapModeName_; }
    int32_t _wrapMode;
    static ::g::Uno::UX::Selector _paramName_;
    static ::g::Uno::UX::Selector& _paramName() { return ImageFill_typeof()->Init(), _paramName_; }
    static ::g::Uno::UX::Selector _sizingName_;
    static ::g::Uno::UX::Selector& _sizingName() { return ImageFill_typeof()->Init(), _sizingName_; }
    double _lastUsed;

    void ctor_3();
    void CleanTempTexture();
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    ::g::Uno::UX::FileSource* File();
    void File(::g::Uno::UX::FileSource* value);
    ImageFill__DrawParams GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size);
    ::g::Uno::Float2 GetSize();
    void LoadNow();
    ::g::Fuse::Internal::SizingContainer* SizingContainer();
    ::g::Fuse::Resources::ImageSource* Source();
    void Source(::g::Fuse::Resources::ImageSource* value);
    int32_t StretchMode();
    void StretchMode(int32_t value);
    int32_t WrapMode();
    void WrapMode(int32_t value);
    static ImageFill* New2();
};
// }

}}} // ::g::Fuse::Drawing
