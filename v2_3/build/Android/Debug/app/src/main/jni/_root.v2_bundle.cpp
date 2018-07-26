// This file was generated based on v2.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[8];

namespace g{

// public static generated class v2_bundle :0
// {
// static v2_bundle() :0
static void v2_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    v2_bundle::_1f84dfc2d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[1/*"1-c8d6f59e....*/]);
    v2_bundle::bedroom_2a47cdda5_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[2/*"bedroom_2-a...*/]);
    v2_bundle::go_green_bulb7adc95c8_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[3/*"go_green_bu...*/]);
    v2_bundle::lockcbbf1c43_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[4/*"lock-be635b...*/]);
    v2_bundle::OswaldMedium386db168_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[5/*"oswald-medi...*/]);
    v2_bundle::profile96d3f017_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[6/*"profile-d1e...*/]);
    v2_bundle::user74c50381_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[7/*"user-27b9fd...*/]);
}

static void v2_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("v2");
    ::STRINGS[1] = uString::Const("1-c8d6f59e.jpg");
    ::STRINGS[2] = uString::Const("bedroom_2-aeb79830.png");
    ::STRINGS[3] = uString::Const("go_green_bulb-ec2cdd71.jpg");
    ::STRINGS[4] = uString::Const("lock-be635b0a.png");
    ::STRINGS[5] = uString::Const("oswald-medium-b3ca7899.ttf");
    ::STRINGS[6] = uString::Const("profile-d1e8fcc8.png");
    ::STRINGS[7] = uString::Const("user-27b9fdca.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::_1f84dfc2d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::bedroom_2a47cdda5_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::go_green_bulb7adc95c8_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::lockcbbf1c43_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::OswaldMedium386db168_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::profile96d3f017_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::user74c50381_, uFieldFlagsStatic);
}

uClassType* v2_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("v2_bundle", options);
    type->fp_build_ = v2_bundle_build;
    type->fp_cctor_ = v2_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::_1f84dfc2d_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::bedroom_2a47cdda5_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::go_green_bulb7adc95c8_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::lockcbbf1c43_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::OswaldMedium386db168_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::profile96d3f017_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::user74c50381_;
// }

} // ::g
