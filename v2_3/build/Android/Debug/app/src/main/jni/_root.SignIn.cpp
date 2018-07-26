// This file was generated based on '.uno/ux15/SignIn.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.SignIn.h>
#include <_root.v2_bundle.h>
#include <_root.v2_FuseControls-3facd3a9.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[14];
static uType* TYPES[5];

namespace g{

// public partial sealed class SignIn :2
// {
// static SignIn() :17
static void SignIn__cctor_4_fn(uType* __type)
{
    SignIn::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"loginArea"*/], ::STRINGS[2/*"temp_eb3"*/], ::STRINGS[3/*"temp_eb4"*/]);
    SignIn::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[4/*"Value"*/]);
    SignIn::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"loginArea"*/]);
}

static void SignIn_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("loginArea");
    ::STRINGS[2] = uString::Const("temp_eb3");
    ::STRINGS[3] = uString::Const("temp_eb4");
    ::STRINGS[4] = uString::Const("Value");
    ::STRINGS[5] = uString::Const("Email");
    ::STRINGS[6] = uString::Const("Password");
    ::STRINGS[7] = uString::Const("LoginClicked");
    ::STRINGS[8] = uString::Const("ClearClickedLogin");
    ::STRINGS[9] = uString::Const("SignIn.ux");
    ::STRINGS[10] = uString::Const("\n"
        "\n"
        "                        \n"
        "var Observable=require (\"FuseJS/Observable\")\n"
        "var Email = Observable(\"\");\n"
        "var Password = Observable(\"\");\n"
        "var client_id = Observable(\"\");\n"
        "    function LoginClicked(args){\n"
        "        /*console.log(\"Username is \"+Username.value);\n"
        "        console.log(\"password is \"+Password.value);*/\n"
        "        fetch(\"https://api.mlab.com/api/1/databases/student/collections/Users?apiKey=mM4ypsFccC7f-MHauInmV5qt4icpdSOU\")\n"
        "        .then(function(result){\n"
        "            result.json().then(function(data){ \n"
        "            var i=0;\n"
        "            var control=0;\n"
        "            //var Base64Password=Base64.encodeAscii(Password.value);\n"
        "            \n"
        "            for(i ;i<data.length;i++)\n"
        "                {\n"
        "                    if((data[i].email)==(Email.value))\n"
        "                            {\n"
        "                    \n"
        "                            if(data[i].password==(Password.value))\n"
        "                                {\n"
        "                                    control=1;\n"
        "                                    client_id=data[i].client_id;\n"
        "                                    }  \n"
        "                        } \n"
        "                    }    \n"
        "            console.log(control);\n"
        "            //console.log(client_id);\n"
        "            if(control==0)\n"
        "                console.log(\"Authorization failed!\");\n"
        "            else\n"
        "                { \n"
        "                    \n"
        "                    console.log(\"Authorization Granted!\");\n"
        "                    \n"
        "                    router.goto(\"schedule\",{clientID: client_id});\n"
        "\n"
        "                    \n"
        "                }\n"
        "    \n"
        "        \n"
        "        });\n"
        "    });    \n"
        "    }\n"
        "\n"
        "\n"
        "    function ClearClickedLogin(){\n"
        "\n"
        "\n"
        "        Email.value=\"\";\n"
        "        Password.value=\"\";\n"
        "\n"
        "\n"
        "\n"
        "    }\n"
        "\n"
        "\n"
        "    module.exports={\n"
        "    client_id: client_id,\n"
        "    Email: Email,\n"
        "        Password: Password,\n"
        "        LoginClicked : LoginClicked,\n"
        "        ClearClickedLogin: ClearClickedLogin\n"
        "    }\n"
        "   ");
    ::STRINGS[11] = uString::Const("auto,1*");
    ::STRINGS[12] = uString::Const("Login");
    ::STRINGS[13] = uString::Const("Clear");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::v2_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(122,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(SignIn, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SignIn, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(SignIn, temp1_Value_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(SignIn, loginArea), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SignIn, temp_eb3), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(SignIn, temp_eb4), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(SignIn, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&SignIn::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SignIn::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SignIn::__selector1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* SignIn_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 132;
    options.InterfaceCount = 19;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(SignIn);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("SignIn", options);
    type->fp_build_ = SignIn_build;
    type->fp_cctor_ = SignIn__cctor_4_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public SignIn(Fuse.Navigation.Router router) :21
void SignIn__ctor_8_fn(SignIn* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :27
void SignIn__InitializeUX_fn(SignIn* __this)
{
    __this->InitializeUX();
}

// public SignIn New(Fuse.Navigation.Router router) :21
void SignIn__New5_fn(::g::Fuse::Navigation::Router* router1, SignIn** __retval)
{
    *__retval = SignIn::New5(router1);
}

uSStrong<uArray*> SignIn::__g_static_nametable1_;
::g::Uno::UX::Selector SignIn::__selector0_;
::g::Uno::UX::Selector SignIn::__selector1_;

// public SignIn(Fuse.Navigation.Router router) [instance] :21
void SignIn::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :27
void SignIn::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, SignIn::__g_static_nametable1_);
    ::g::Fuse::Controls::TextInput* temp = ::g::Fuse::Controls::TextInput::New3();
    temp_Value_inst = ::g::v2_FuseControlsTextInputControl_Value_Property::New1(temp, SignIn::__selector0_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"Email"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::v2_FuseControlsTextInputControl_Value_Property::New1(temp1, SignIn::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"Password"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"LoginClicked"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[8/*"ClearClicke...*/]);
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Image* temp8 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::ScrollView* temp9 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp10 = ::g::Fuse::Controls::StackPanel::New4();
    loginArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Image* temp11 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 3);
    ::g::Fuse::Controls::Rectangle* temp13 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp14 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::Rectangle* temp16 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp17 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp18 = ::g::Fuse::Controls::Text::New3();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Controls::Button* temp19 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp20 = ::g::Fuse::Controls::Text::New3();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp6->Code(::STRINGS[10/*"\n\n       ...*/]);
    temp6->LineNumber(3);
    temp6->FileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp6->SourceLineNumber(3);
    temp6->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp7->SourceLineNumber(72);
    temp7->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    temp8->StretchMode(3);
    temp8->Layer(1);
    temp8->SourceLineNumber(73);
    temp8->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp8->File(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::go_green_bulb7adc95c8()));
    temp9->SourceLineNumber(75);
    temp9->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->Alignment(12);
    temp10->Margin(::g::Uno::Float4__New2(45.0f, 45.0f, 45.0f, 45.0f));
    temp10->SourceLineNumber(78);
    temp10->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    uPtr(loginArea)->RowCount(2);
    uPtr(loginArea)->Columns(::STRINGS[11/*"auto,1*"*/]);
    uPtr(loginArea)->Height(::g::Uno::UX::Size__New1(180.0f, 1));
    uPtr(loginArea)->MaxWidth(::g::Uno::UX::Size__New1(400.0f, 1));
    uPtr(loginArea)->Padding(::g::Uno::Float4__New2(0.0f, 20.0f, 0.0f, 20.0f));
    uPtr(loginArea)->Name(SignIn::__selector1_);
    uPtr(loginArea)->SourceLineNumber(81);
    uPtr(loginArea)->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(loginArea, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    temp11->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp11->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp11->Alignment(1);
    temp11->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    temp11->SourceLineNumber(82);
    temp11->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp11, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp11, 0);
    temp11->File(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::user74c50381()));
    temp->PlaceholderText(::STRINGS[5/*"Email"*/]);
    temp->PlaceholderColor(::g::Fuse::Drawing::Colors::Black());
    temp->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->SourceLineNumber(83);
    temp->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp2->SourceLineNumber(83);
    temp2->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp13->Color(::g::Fuse::Drawing::Colors::Black());
    temp13->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp13->Alignment(12);
    temp13->SourceLineNumber(84);
    temp13->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp13, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp13, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp13, 2);
    temp14->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp14->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp14->Alignment(1);
    temp14->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 30.0f, 0.0f));
    temp14->SourceLineNumber(87);
    temp14->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp14, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp14, 0);
    temp14->File(::g::Uno::UX::BundleFileSource::New1(::g::v2_bundle::lockcbbf1c43()));
    temp1->IsPassword(true);
    temp1->PlaceholderText(::STRINGS[6/*"Password"*/]);
    temp1->PlaceholderColor(::g::Fuse::Drawing::Colors::Black());
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->SourceLineNumber(88);
    temp1->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp1, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp1, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    temp3->SourceLineNumber(88);
    temp3->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp16->Color(::g::Fuse::Drawing::Colors::Black());
    temp16->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp16->Alignment(12);
    temp16->SourceLineNumber(89);
    temp16->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Controls::Grid::SetRow(temp16, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp16, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp16, 2);
    temp17->Color(::g::Uno::Float4__New2(0.5568628f, 0.2588235f, 0.03137255f, 1.0f));
    temp17->Margin(::g::Uno::Float4__New2(70.0f, 15.0f, 70.0f, 10.0f));
    temp17->SourceLineNumber(95);
    temp17->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp17, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp18->Value(::STRINGS[12/*"Login"*/]);
    temp18->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp18->Alignment(10);
    temp18->Margin(::g::Uno::Float4__New2(30.0f, 15.0f, 30.0f, 15.0f));
    temp18->SourceLineNumber(96);
    temp18->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp4->SourceLineNumber(95);
    temp4->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    temp19->SourceLineNumber(98);
    temp19->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    temp20->Value(::STRINGS[13/*"Clear"*/]);
    temp20->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp20->Alignment(10);
    temp20->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 15.0f));
    temp20->SourceLineNumber(99);
    temp20->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp20, uDelegate::New(::TYPES[3/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp5->SourceLineNumber(99);
    temp5->SourceFileName(::STRINGS[9/*"SignIn.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
}

// public SignIn New(Fuse.Navigation.Router router) [static] :21
SignIn* SignIn::New5(::g::Fuse::Navigation::Router* router1)
{
    SignIn* obj1 = (SignIn*)uNew(SignIn_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
