// This file was generated based on '.uno/ux15/Device.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Device.h>
#include <_root.v2_accessor_Fus-9ec0f808.h>
#include <_root.v2_FuseControls-1a068ef9.h>
#include <_root.v2_FuseControls-71dcdce3.h>
#include <_root.v2_FuseControls-8e931e13.h>
#include <_root.v2_FuseTriggers-d9e0f73f.h>
#include <Alive.BackButton.h>
#include <Alive.Switch.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[18];
static uType* TYPES[8];

namespace g{

// public partial sealed class Device :2
// {
// static Device() :29
static void Device__cctor_4_fn(uType* __type)
{
    Device::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"panel"*/], ::STRINGS[2/*"swtch"*/], ::STRINGS[3/*"temp_eb0"*/], ::STRINGS[4/*"temp_eb1"*/], ::STRINGS[5/*"DevName"*/], ::STRINGS[6/*"temp_eb2"*/], ::STRINGS[7/*"Units"*/]);
    Device::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"Background"*/]);
    Device::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[9/*"Color"*/]);
    Device::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[10/*"Value"*/]);
    Device::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"panel"*/]);
    Device::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"swtch"*/]);
    Device::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[5/*"DevName"*/]);
    Device::__selector6_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"Units"*/]);
}

static void Device_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("panel");
    ::STRINGS[2] = uString::Const("swtch");
    ::STRINGS[3] = uString::Const("temp_eb0");
    ::STRINGS[4] = uString::Const("temp_eb1");
    ::STRINGS[5] = uString::Const("DevName");
    ::STRINGS[6] = uString::Const("temp_eb2");
    ::STRINGS[7] = uString::Const("Units");
    ::STRINGS[8] = uString::Const("Background");
    ::STRINGS[9] = uString::Const("Color");
    ::STRINGS[10] = uString::Const("Value");
    ::STRINGS[11] = uString::Const("test");
    ::STRINGS[12] = uString::Const("goBack");
    ::STRINGS[13] = uString::Const("selectedDevice");
    ::STRINGS[14] = uString::Const("getPulseCount");
    ::STRINGS[15] = uString::Const("finalUnit");
    ::STRINGS[16] = uString::Const("Device.ux");
    ::STRINGS[17] = uString::Const("\n"
        "    var Observable=require(\"FuseJS/Observable\");\n"
        "    var finalUnit=Observable(\"\");\n"
        "\n"
        "    var relayNumber;\n"
        "    var moxNumber;\n"
        "    var selectedDevice=this.Parameter.map(function(param){\n"
        "        //console.log(param.selectedDevice);\n"
        "\n"
        "        if(param.selectedDevice==\"AC\"){\n"
        "            moxNumber=\"M0\";\n"
        "            relayNumber=\"0\";\n"
        "        }\n"
        "        else if(param.selectedDevice==\"Light\"){\n"
        "            moxNumber=\"M1\";\n"
        "            relayNumber=\"1\"\n"
        "        }\n"
        "\n"
        "        else{\n"
        "            moxNumber=\"M\";\n"
        "            relayNumber=\"null\"\n"
        "        }\n"
        "        \n"
        "        console.log(moxNumber)\n"
        "        console.log(relayNumber);\n"
        "        return param.selectedDevice;\n"
        "     })\n"
        "\n"
        "     function getPulseCount(){\n"
        "        if(moxNumber==\"M0\"){\n"
        "        fetch(\"https://api.mlab.com/api/1/databases/hardware/collections/moxpdata?apiKey=Qd1BYa9Hpu9HUixPA76rEmmHyFuVqvop\")\n"
        "       .then(function(result){\n"
        "           result.json().then(function(data){\n"
        "\n"
        "               var k=data.length;\n"
        "               var unitArray=[0];\n"
        "               for(var i=0; i<k; i++){\n"
        "                 if(data[i].M0!=null)\n"
        "                    {\n"
        "                        \n"
        "                        unitArray.push(data[i].M0)\n"
        "                        //console.log(unitArray);\n"
        "                        finalUnit.value =Math.max.apply(null,unitArray);\n"
        "                        console.log(\"final unit for m0 is \"+finalUnit.value);\n"
        "\n"
        "                    }\n"
        "                    \n"
        "               }\n"
        "\n"
        "           })\n"
        "       })\n"
        "\n"
        "\n"
        "       }\n"
        "       if(moxNumber==\"M1\"){\n"
        "        fetch(\"https://api.mlab.com/api/1/databases/hardware/collections/moxpdata?apiKey=Qd1BYa9Hpu9HUixPA76rEmmHyFuVqvop\")\n"
        "       .then(function(result){\n"
        "           result.json().then(function(data){\n"
        "\n"
        "               var k=data.length;\n"
        "               var unitArray=[0];\n"
        "               for(var i=0; i<k; i++){\n"
        "                 if(data[i].M1!=null)\n"
        "                    {\n"
        "                        \n"
        "                        \n"
        "                        unitArray.push(data[i].M0)\n"
        "                        //console.log(unitArray);\n"
        "                        finalUnit.value =Math.max.apply(null,unitArray);\n"
        "                        console.log(\"final unit for m1 is \"+finalUnit.value);\n"
        "\n"
        "                    }\n"
        "                    \n"
        "               }\n"
        "\n"
        "           })\n"
        "       })\n"
        "\n"
        "\n"
        "       }\n"
        "     }\n"
        "\n"
        "    \n"
        "\n"
        "    function test(){\n"
        "        var requestObject;   \n"
        "        var status = 0;\n"
        "        var response_ok = false;\n"
        "        console.log(\"here\");\n"
        "        if(relayNumber==0){\n"
        "            fetch('http://18.222.45.22:3000/0', {\n"
        "                method: 'GET',\n"
        "                headers: { \"Content-type\": \"application/json\"},\n"
        "                }).then(function(response) {\n"
        "                    status = response.status;  // Get the HTTP status code\n"
        "                    response_ok = response.ok; // Is response.status in the 200-range?\n"
        "                    return response.json();    // This returns a promise\n"
        "                }).then(function(responseObject) {\n"
        "                    // Do something with the result\n"
        "                }).catch(function(err) {\n"
        "                    // An error occurred somewhere in the Promise chain\n"
        "            });\n"
        "        }\n"
        "        else if(relayNumber==1){\n"
        "            fetch('http://18.222.45.22:3000/1', {\n"
        "                method: 'GET',\n"
        "                headers: { \"Content-type\": \"application/json\"},\n"
        "                }).then(function(response) {\n"
        "                    status = response.status;  // Get the HTTP status code\n"
        "                    response_ok = response.ok; // Is response.status in the 200-range?\n"
        "                    return response.json();    // This returns a promise\n"
        "                }).then(function(responseObject) {\n"
        "                    // Do something with the result\n"
        "                }).catch(function(err) {\n"
        "                    // An error occurred somewhere in the Promise chain\n"
        "            });    \n"
        "        }\n"
        "    }\n"
        "\n"
        "\n"
        "    function goBack(){\n"
        "        console.log(\"clicked\")\n"
        "        router.goto(\"schedule\")\n"
        "    }\n"
        "  module.exports={\n"
        "      goBack:goBack,\n"
        "      selectedDevice:selectedDevice,\n"
        "      test:test,\n"
        "      relayNumber:relayNumber,\n"
        "      getPulseCount:getPulseCount,\n"
        "      finalUnit:finalUnit  \n"
        "      }\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::Drawing::Brushes_typeof(),
        ::g::Fuse::Drawing::Colors_typeof(),
        ::g::v2_accessor_Fuse_Controls_ToggleControl_Value_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(122,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(Device, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(Device, panel_Background_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Device, DevName_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(Device, Units_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(Device, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Device, DevName_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(Device, Units_Value_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(Device, panel), 0,
        ::g::Alive::Switch_typeof(), offsetof(Device, swtch), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Device, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Device, temp_eb1), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Device, DevName), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(Device, temp_eb2), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(Device, Units), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(Device, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&Device::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Device::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Device::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Device::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Device::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Device::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Device::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Device::__selector6_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* Device_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 145;
    options.InterfaceCount = 19;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Device);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Device", options);
    type->fp_build_ = Device_build;
    type->fp_cctor_ = Device__cctor_4_fn;
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

// public Device(Fuse.Navigation.Router router) :33
void Device__ctor_8_fn(Device* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :39
void Device__InitializeUX_fn(Device* __this)
{
    __this->InitializeUX();
}

// public Device New(Fuse.Navigation.Router router) :33
void Device__New5_fn(::g::Fuse::Navigation::Router* router1, Device** __retval)
{
    *__retval = Device::New5(router1);
}

uSStrong<uArray*> Device::__g_static_nametable1_;
::g::Uno::UX::Selector Device::__selector0_;
::g::Uno::UX::Selector Device::__selector1_;
::g::Uno::UX::Selector Device::__selector2_;
::g::Uno::UX::Selector Device::__selector3_;
::g::Uno::UX::Selector Device::__selector4_;
::g::Uno::UX::Selector Device::__selector5_;
::g::Uno::UX::Selector Device::__selector6_;

// public Device(Fuse.Navigation.Router router) [instance] :33
void Device::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :39
void Device::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Device::__g_static_nametable1_);
    panel = ::g::Fuse::Controls::Panel::New3();
    panel_Background_inst = ::g::v2_FuseControlsControl_Background_Property::New1(panel, Device::__selector0_);
    DevName = ::g::Fuse::Controls::Text::New3();
    DevName_Color_inst = ::g::v2_FuseControlsTextControl_Color_Property::New1(DevName, Device::__selector1_);
    Units = ::g::Fuse::Controls::Text::New3();
    Units_Color_inst = ::g::v2_FuseControlsTextControl_Color_Property::New1(Units, Device::__selector1_);
    swtch = ::g::Alive::Switch::New5();
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(swtch);
    ::g::Fuse::Triggers::WhileTrue* temp = ::g::Fuse::Triggers::WhileTrue::New2();
    temp_Value_inst = ::g::v2_FuseTriggersWhileBool_Value_Property::New1(temp, Device::__selector2_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::v2_accessor_Fuse_Controls_ToggleControl_Value::Singleton());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"test"*/]);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[12/*"goBack"*/]);
    DevName_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(DevName, Device::__selector2_);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[13/*"selectedDev...*/]);
    ::g::Fuse::Reactive::Data* temp6 = ::g::Fuse::Reactive::Data::New1(::STRINGS[14/*"getPulseCount"*/]);
    Units_Value_inst = ::g::v2_FuseControlsTextControl_Value_Property::New1(Units, Device::__selector2_);
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[15/*"finalUnit"*/]);
    ::g::Fuse::Reactive::JavaScript* temp8 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Animations::Change* temp9 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<Fuse.Drawing.Brush>*/], panel_Background_inst);
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 0.8352941f, 0.0f, 1.0f));
    ::g::Fuse::Animations::Change* temp11 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float4>*/], DevName_Color_inst);
    ::g::Fuse::Animations::Change* temp12 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float4>*/], Units_Color_inst);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp3);
    ::g::Alive::BackButton* temp14 = ::g::Alive::BackButton::New4();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp4);
    ::g::Fuse::Controls::Button* temp15 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Reactive::DataBinding* temp16 = ::g::Fuse::Reactive::DataBinding::New1(DevName_Value_inst, (uObject*)temp5, 3);
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp6);
    ::g::Fuse::Reactive::DataBinding* temp17 = ::g::Fuse::Reactive::DataBinding::New1(Units_Value_inst, (uObject*)temp7, 3);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    temp8->Code(::STRINGS[17/*"\n    var O...*/]);
    temp8->LineNumber(4);
    temp8->FileName(::STRINGS[16/*"Device.ux"*/]);
    temp8->SourceLineNumber(4);
    temp8->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    uPtr(panel)->Name(Device::__selector3_);
    uPtr(panel)->SourceLineNumber(137);
    uPtr(panel)->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    uPtr(panel)->Background(::g::Fuse::Drawing::Brushes::Black());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), swtch);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(panel)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), Units);
    uPtr(swtch)->Value(false);
    uPtr(swtch)->Alignment(11);
    uPtr(swtch)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 55.0f, 0.0f));
    uPtr(swtch)->Name(Device::__selector4_);
    uPtr(swtch)->SourceLineNumber(139);
    uPtr(swtch)->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(swtch, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(swtch)->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(swtch)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp->SourceLineNumber(140);
    temp->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Animators()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Fuse::Animations::Change__set_Value_fn(temp9, temp10);
    ::g::Fuse::Animations::Change__set_Value_fn(temp11, uCRef(::g::Fuse::Drawing::Colors::Black()));
    ::g::Fuse::Animations::Change__set_Value_fn(temp12, uCRef(::g::Fuse::Drawing::Colors::Black()));
    temp2->SourceLineNumber(140);
    temp2->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    temp1->SourceLineNumber(140);
    temp1->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    temp3->SourceLineNumber(139);
    temp3->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    temp14->Alignment(5);
    temp14->X(::g::Uno::UX::Size__New1(25.0f, 1));
    temp14->Y(::g::Uno::UX::Size__New1(25.0f, 1));
    temp14->SourceLineNumber(146);
    temp14->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp14, 0);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp14, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    temp4->SourceLineNumber(146);
    temp4->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    temp15->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp15->X(::g::Uno::UX::Size__New1(75.0f, 1));
    temp15->Y(::g::Uno::UX::Size__New1(200.0f, 1));
    temp15->SourceLineNumber(147);
    temp15->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp15, uDelegate::New(::TYPES[4/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), DevName);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    uPtr(DevName)->FontSize(50.0f);
    uPtr(DevName)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(DevName)->Alignment(10);
    uPtr(DevName)->Name(Device::__selector5_);
    uPtr(DevName)->SourceLineNumber(148);
    uPtr(DevName)->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(DevName)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp16);
    temp5->SourceLineNumber(148);
    temp5->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    temp6->SourceLineNumber(147);
    temp6->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    uPtr(Units)->FontSize(30.0f);
    uPtr(Units)->Color(::g::Fuse::Drawing::Colors::White());
    uPtr(Units)->Alignment(0);
    uPtr(Units)->X(::g::Uno::UX::Size__New1(75.0f, 1));
    uPtr(Units)->Y(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(Units)->Name(Device::__selector6_);
    uPtr(Units)->SourceLineNumber(150);
    uPtr(Units)->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Units)->Bindings()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp7->SourceLineNumber(150);
    temp7->SourceFileName(::STRINGS[16/*"Device.ux"*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), panel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), swtch);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), DevName);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), temp_eb2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[7/*Uno.Collections.ICollection<object>*/]), Units);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), panel);
}

// public Device New(Fuse.Navigation.Router router) [static] :33
Device* Device::New5(::g::Fuse::Navigation::Router* router1)
{
    Device* obj1 = (Device*)uNew(Device_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
