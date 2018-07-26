// This file was generated based on v2.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.v2_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[6];

namespace g{

// public static generated class v2_bundle :0
// {
// static v2_bundle() :0
static void v2_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    v2_bundle::event25df1c2a0_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[1/*"event2-bc44...*/]);
    v2_bundle::event31d77e205_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[2/*"event3-bc44...*/]);
    v2_bundle::event4a801feea_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[3/*"event4-bc44...*/]);
    v2_bundle::event6f2123b34_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[4/*"event6-bc44...*/]);
    v2_bundle::profile1a558cade_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"v2"*/]))->GetFile(::STRINGS[5/*"profile1-f5...*/]);
}

static void v2_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("v2");
    ::STRINGS[1] = uString::Const("event2-bc44713d.jpg");
    ::STRINGS[2] = uString::Const("event3-bc448e3c.jpg");
    ::STRINGS[3] = uString::Const("event4-bc4468bf.jpg");
    ::STRINGS[4] = uString::Const("event6-bc446041.jpg");
    ::STRINGS[5] = uString::Const("profile1-f578d869.jpg");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::event25df1c2a0_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::event31d77e205_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::event4a801feea_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::event6f2123b34_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&v2_bundle::profile1a558cade_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("event25df1c2a0", 0),
        new uField("event31d77e205", 1),
        new uField("event4a801feea", 2),
        new uField("event6f2123b34", 3),
        new uField("profile1a558cade", 4));
}

uClassType* v2_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("v2_bundle", options);
    type->fp_build_ = v2_bundle_build;
    type->fp_cctor_ = v2_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::event25df1c2a0_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::event31d77e205_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::event4a801feea_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::event6f2123b34_;
uSStrong< ::g::Uno::IO::BundleFile*> v2_bundle::profile1a558cade_;
// }

} // ::g
