[Uno.Compiler.UxGenerated]
public partial class Device: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<Fuse.Drawing.Brush> panel_Background_inst;
    global::Uno.UX.Property<float4> DevName_Color_inst;
    global::Uno.UX.Property<float4> Units_Color_inst;
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<string> DevName_Value_inst;
    global::Uno.UX.Property<string> Units_Value_inst;
    internal global::Fuse.Controls.Panel panel;
    internal global::Alive.Switch swtch;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Controls.Text DevName;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    internal global::Fuse.Controls.Text Units;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "panel",
        "swtch",
        "temp_eb0",
        "temp_eb1",
        "DevName",
        "temp_eb2",
        "Units"
    };
    static Device()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Device(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        panel = new global::Fuse.Controls.Panel();
        panel_Background_inst = new v2_FuseControlsControl_Background_Property(panel, __selector0);
        DevName = new global::Fuse.Controls.Text();
        DevName_Color_inst = new v2_FuseControlsTextControl_Color_Property(DevName, __selector1);
        Units = new global::Fuse.Controls.Text();
        Units_Color_inst = new v2_FuseControlsTextControl_Color_Property(Units, __selector1);
        swtch = new global::Alive.Switch();
        var temp1 = new global::Fuse.Reactive.Constant(swtch);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new v2_FuseTriggersWhileBool_Value_Property(temp, __selector2);
        var temp2 = new global::Fuse.Reactive.Property(temp1, v2_accessor_Fuse_Controls_ToggleControl_Value.Singleton);
        var temp3 = new global::Fuse.Reactive.Data("test");
        var temp4 = new global::Fuse.Reactive.Data("goBack");
        DevName_Value_inst = new v2_FuseControlsTextControl_Value_Property(DevName, __selector2);
        var temp5 = new global::Fuse.Reactive.Data("selectedDevice");
        var temp6 = new global::Fuse.Reactive.Data("getPulseCount");
        Units_Value_inst = new v2_FuseControlsTextControl_Value_Property(Units, __selector2);
        var temp7 = new global::Fuse.Reactive.Data("finalUnit");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Animations.Change<Fuse.Drawing.Brush>(panel_Background_inst);
        var temp10 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 0.8352941f, 0f, 1f));
        var temp11 = new global::Fuse.Animations.Change<float4>(DevName_Color_inst);
        var temp12 = new global::Fuse.Animations.Change<float4>(Units_Color_inst);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp3);
        var temp14 = new global::Alive.BackButton();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp15 = new global::Fuse.Controls.Button();
        var temp16 = new global::Fuse.Reactive.DataBinding(DevName_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp6);
        var temp17 = new global::Fuse.Reactive.DataBinding(Units_Value_inst, temp7, Fuse.Reactive.BindingMode.Default);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Device.ux";
        temp8.Code = "\n    var Observable=require(\"FuseJS/Observable\");\n    var finalUnit=Observable(\"\");\n\n    var relayNumber;\n    var moxNumber;\n    var selectedDevice=this.Parameter.map(function(param){\n        //console.log(param.selectedDevice);\n\n        if(param.selectedDevice==\"AC\"){\n            moxNumber=\"M0\";\n            relayNumber=\"0\";\n        }\n        else if(param.selectedDevice==\"Light\"){\n            moxNumber=\"M1\";\n            relayNumber=\"1\"\n        }\n\n        else{\n            moxNumber=\"M\";\n            relayNumber=\"null\"\n        }\n        \n        console.log(moxNumber)\n        console.log(relayNumber);\n        return param.selectedDevice;\n     })\n\n     function getPulseCount(){\n        if(moxNumber==\"M0\"){\n        fetch(\"https://api.mlab.com/api/1/databases/hardware/collections/moxpdata?apiKey=Qd1BYa9Hpu9HUixPA76rEmmHyFuVqvop\")\n       .then(function(result){\n           result.json().then(function(data){\n\n               var k=data.length;\n               var unitArray=[0];\n               for(var i=0; i<k; i++){\n                 if(data[i].M0!=null)\n                    {\n                        \n                        unitArray.push(data[i].M0)\n                        //console.log(unitArray);\n                        finalUnit.value =Math.max.apply(null,unitArray);\n                        console.log(\"final unit for m0 is \"+finalUnit.value);\n\n                    }\n                    \n               }\n\n           })\n       })\n\n\n       }\n       if(moxNumber==\"M1\"){\n        fetch(\"https://api.mlab.com/api/1/databases/hardware/collections/moxpdata?apiKey=Qd1BYa9Hpu9HUixPA76rEmmHyFuVqvop\")\n       .then(function(result){\n           result.json().then(function(data){\n\n               var k=data.length;\n               var unitArray=[0];\n               for(var i=0; i<k; i++){\n                 if(data[i].M1!=null)\n                    {\n                        \n                        \n                        unitArray.push(data[i].M0)\n                        //console.log(unitArray);\n                        finalUnit.value =Math.max.apply(null,unitArray);\n                        console.log(\"final unit for m1 is \"+finalUnit.value);\n\n                    }\n                    \n               }\n\n           })\n       })\n\n\n       }\n     }\n\n    \n\n    function test(){\n        var requestObject    \n        var status = 0;\n        var response_ok = false;\n        console.log(\"here\")\n        fetch('http://18.222.45.22:3000/0', {\n            method: 'GET',\n            headers: { \"Content-type\": \"application/json\"},\n            }).then(function(response) {\n                status = response.status;  // Get the HTTP status code\n                response_ok = response.ok; // Is response.status in the 200-range?\n                return response.json();    // This returns a promise\n            }).then(function(responseObject) {\n                // Do something with the result\n            }).catch(function(err) {\n                // An error occurred somewhere in the Promise chain\n        });\n    }\n\n\n    function goBack(){\n        console.log(\"clicked\")\n        router.goto(\"schedule\")\n    }\n  module.exports={\n      goBack:goBack,\n      selectedDevice:selectedDevice,\n      test:test,\n      relayNumber:relayNumber,\n      getPulseCount:getPulseCount,\n      finalUnit:finalUnit  \n      }\n";
        temp8.LineNumber = 4;
        temp8.FileName = "Device.ux";
        temp8.SourceLineNumber = 4;
        temp8.SourceFileName = "Device.ux";
        panel.Name = __selector3;
        panel.SourceLineNumber = 121;
        panel.SourceFileName = "Device.ux";
        panel.Background = Fuse.Drawing.Brushes.Black;
        panel.Children.Add(swtch);
        panel.Children.Add(temp14);
        panel.Children.Add(temp15);
        panel.Children.Add(Units);
        swtch.Value = false;
        swtch.Alignment = Fuse.Elements.Alignment.CenterRight;
        swtch.Margin = float4(0f, 0f, 55f, 0f);
        swtch.Name = __selector4;
        swtch.SourceLineNumber = 123;
        swtch.SourceFileName = "Device.ux";
        global::Fuse.Gestures.Clicked.AddHandler(swtch, temp_eb0.OnEvent);
        swtch.Children.Add(temp);
        swtch.Bindings.Add(temp_eb0);
        temp.SourceLineNumber = 124;
        temp.SourceFileName = "Device.ux";
        temp.Animators.Add(temp9);
        temp.Animators.Add(temp11);
        temp.Animators.Add(temp12);
        temp.Bindings.Add(temp13);
        temp9.Value = temp10;
        temp11.Value = Fuse.Drawing.Colors.Black;
        temp12.Value = Fuse.Drawing.Colors.Black;
        temp2.SourceLineNumber = 124;
        temp2.SourceFileName = "Device.ux";
        temp1.SourceLineNumber = 124;
        temp1.SourceFileName = "Device.ux";
        temp3.SourceLineNumber = 123;
        temp3.SourceFileName = "Device.ux";
        temp14.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp14.X = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp14.Y = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
        temp14.SourceLineNumber = 130;
        temp14.SourceFileName = "Device.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp14, Fuse.Layouts.Dock.Left);
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb1.OnEvent);
        temp14.Bindings.Add(temp_eb1);
        temp4.SourceLineNumber = 130;
        temp4.SourceFileName = "Device.ux";
        temp15.Margin = float4(0f, 0f, 0f, 0f);
        temp15.X = new Uno.UX.Size(75f, Uno.UX.Unit.Unspecified);
        temp15.Y = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp15.SourceLineNumber = 131;
        temp15.SourceFileName = "Device.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp15, temp_eb2.OnEvent);
        temp15.Children.Add(DevName);
        temp15.Bindings.Add(temp_eb2);
        DevName.FontSize = 50f;
        DevName.Color = Fuse.Drawing.Colors.White;
        DevName.Alignment = Fuse.Elements.Alignment.Center;
        DevName.Name = __selector5;
        DevName.SourceLineNumber = 132;
        DevName.SourceFileName = "Device.ux";
        DevName.Bindings.Add(temp16);
        temp5.SourceLineNumber = 132;
        temp5.SourceFileName = "Device.ux";
        temp6.SourceLineNumber = 131;
        temp6.SourceFileName = "Device.ux";
        Units.FontSize = 30f;
        Units.Color = Fuse.Drawing.Colors.White;
        Units.Alignment = Fuse.Elements.Alignment.Default;
        Units.X = new Uno.UX.Size(75f, Uno.UX.Unit.Unspecified);
        Units.Y = new Uno.UX.Size(300f, Uno.UX.Unit.Unspecified);
        Units.Name = __selector6;
        Units.SourceLineNumber = 134;
        Units.SourceFileName = "Device.ux";
        Units.Bindings.Add(temp17);
        temp7.SourceLineNumber = 134;
        temp7.SourceFileName = "Device.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(panel);
        __g_nametable.Objects.Add(swtch);
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(DevName);
        __g_nametable.Objects.Add(temp_eb2);
        __g_nametable.Objects.Add(Units);
        this.Children.Add(temp8);
        this.Children.Add(panel);
    }
    static global::Uno.UX.Selector __selector0 = "Background";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Value";
    static global::Uno.UX.Selector __selector3 = "panel";
    static global::Uno.UX.Selector __selector4 = "swtch";
    static global::Uno.UX.Selector __selector5 = "DevName";
    static global::Uno.UX.Selector __selector6 = "Units";
}
