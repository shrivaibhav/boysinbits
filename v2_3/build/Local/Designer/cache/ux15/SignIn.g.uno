[Uno.Compiler.UxGenerated]
public partial class SignIn: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal global::Fuse.Controls.Grid loginArea;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "loginArea",
        "temp_eb3",
        "temp_eb4"
    };
    static SignIn()
    {
    }
    [global::Uno.UX.UXConstructor]
    public SignIn(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new v2_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("Email");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new v2_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("Password");
        var temp4 = new global::Fuse.Reactive.Data("LoginClicked");
        var temp5 = new global::Fuse.Reactive.Data("ClearClickedLogin");
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Controls.Panel();
        var temp8 = new global::Fuse.Controls.Image();
        var temp9 = new global::Fuse.Controls.ScrollView();
        var temp10 = new global::Fuse.Controls.StackPanel();
        loginArea = new global::Fuse.Controls.Grid();
        var temp11 = new global::Fuse.Controls.Image();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Controls.Rectangle();
        var temp14 = new global::Fuse.Controls.Image();
        var temp15 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp16 = new global::Fuse.Controls.Rectangle();
        var temp17 = new global::Fuse.Controls.Button();
        var temp18 = new global::Fuse.Controls.Text();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp4);
        var temp19 = new global::Fuse.Controls.Button();
        var temp20 = new global::Fuse.Controls.Text();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp5);
        this.SourceLineNumber = 1;
        this.SourceFileName = "SignIn.ux";
        temp6.Code = "\n\n                        \nvar Observable=require (\"FuseJS/Observable\")\nvar Email = Observable(\"\");\nvar Password = Observable(\"\");\nvar client_id = Observable(\"\");\n    function LoginClicked(args){\n        /*console.log(\"Username is \"+Username.value);\n        console.log(\"password is \"+Password.value);*/\n        fetch(\"https://api.mlab.com/api/1/databases/student/collections/Users?apiKey=mM4ypsFccC7f-MHauInmV5qt4icpdSOU\")\n        .then(function(result){\n            result.json().then(function(data){ \n            var i=0;\n            var control=0;\n            //var Base64Password=Base64.encodeAscii(Password.value);\n            \n            for(i ;i<data.length;i++)\n                {\n                    if((data[i].email)==(Email.value))\n                            {\n                    \n                            if(data[i].password==(Password.value))\n                                {\n                                    control=1;\n                                    client_id=data[i].client_id;\n                                    }  \n                        } \n                    }    \n            console.log(control);\n            //console.log(client_id);\n            if(control==0)\n                console.log(\"Authorization failed!\");\n            else\n                { \n                    \n                    console.log(\"Authorization Granted!\");\n                    \n                    router.goto(\"schedule\",{clientID: client_id});\n\n                    \n                }\n    \n        \n        });\n    });    \n    }\n\n\n    function ClearClickedLogin(){\n\n\n        Email.value=\"\";\n        Password.value=\"\";\n\n\n\n    }\n\n\n    module.exports={\n    client_id: client_id,\n    Email: Email,\n        Password: Password,\n        LoginClicked : LoginClicked,\n        ClearClickedLogin: ClearClickedLogin\n    }\n   ";
        temp6.LineNumber = 3;
        temp6.FileName = "SignIn.ux";
        temp6.SourceLineNumber = 3;
        temp6.SourceFileName = "SignIn.ux";
        temp7.SourceLineNumber = 72;
        temp7.SourceFileName = "SignIn.ux";
        temp7.Children.Add(temp8);
        temp7.Children.Add(temp9);
        temp8.StretchMode = Fuse.Elements.StretchMode.Fill;
        temp8.Layer = Fuse.Layer.Background;
        temp8.SourceLineNumber = 73;
        temp8.SourceFileName = "SignIn.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/go_green_bulb.jpg"));
        temp9.SourceLineNumber = 75;
        temp9.SourceFileName = "SignIn.ux";
        temp9.Children.Add(temp10);
        temp10.Alignment = Fuse.Elements.Alignment.Bottom;
        temp10.Margin = float4(45f, 45f, 45f, 45f);
        temp10.SourceLineNumber = 78;
        temp10.SourceFileName = "SignIn.ux";
        temp10.Children.Add(loginArea);
        temp10.Children.Add(temp17);
        temp10.Children.Add(temp19);
        loginArea.RowCount = 2;
        loginArea.Columns = "auto,1*";
        loginArea.Height = new Uno.UX.Size(180f, Uno.UX.Unit.Unspecified);
        loginArea.MaxWidth = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        loginArea.Padding = float4(0f, 20f, 0f, 20f);
        loginArea.Name = __selector1;
        loginArea.SourceLineNumber = 81;
        loginArea.SourceFileName = "SignIn.ux";
        global::Fuse.Controls.Grid.SetRow(loginArea, 1);
        loginArea.Children.Add(temp11);
        loginArea.Children.Add(temp);
        loginArea.Children.Add(temp13);
        loginArea.Children.Add(temp14);
        loginArea.Children.Add(temp1);
        loginArea.Children.Add(temp16);
        temp11.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp11.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp11.Alignment = Fuse.Elements.Alignment.Left;
        temp11.Margin = float4(10f, 0f, 30f, 0f);
        temp11.SourceLineNumber = 82;
        temp11.SourceFileName = "SignIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp11, 0);
        global::Fuse.Controls.Grid.SetColumn(temp11, 0);
        temp11.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/user.png"));
        temp.PlaceholderText = "Email";
        temp.PlaceholderColor = Fuse.Drawing.Colors.Black;
        temp.TextColor = float4(0f, 0f, 0f, 1f);
        temp.CaretColor = float4(1f, 1f, 1f, 1f);
        temp.SourceLineNumber = 83;
        temp.SourceFileName = "SignIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp, 0);
        global::Fuse.Controls.Grid.SetColumn(temp, 1);
        temp.Bindings.Add(temp12);
        temp2.SourceLineNumber = 83;
        temp2.SourceFileName = "SignIn.ux";
        temp13.Color = Fuse.Drawing.Colors.Black;
        temp13.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp13.Alignment = Fuse.Elements.Alignment.Bottom;
        temp13.SourceLineNumber = 84;
        temp13.SourceFileName = "SignIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp13, 0);
        global::Fuse.Controls.Grid.SetColumn(temp13, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp13, 2);
        temp14.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp14.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp14.Alignment = Fuse.Elements.Alignment.Left;
        temp14.Margin = float4(10f, 0f, 30f, 0f);
        temp14.SourceLineNumber = 87;
        temp14.SourceFileName = "SignIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp14, 1);
        global::Fuse.Controls.Grid.SetColumn(temp14, 0);
        temp14.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/lock.png"));
        temp1.IsPassword = true;
        temp1.PlaceholderText = "Password";
        temp1.PlaceholderColor = Fuse.Drawing.Colors.Black;
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.CaretColor = float4(1f, 1f, 1f, 1f);
        temp1.SourceLineNumber = 88;
        temp1.SourceFileName = "SignIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp1, 1);
        global::Fuse.Controls.Grid.SetColumn(temp1, 1);
        temp1.Bindings.Add(temp15);
        temp3.SourceLineNumber = 88;
        temp3.SourceFileName = "SignIn.ux";
        temp16.Color = Fuse.Drawing.Colors.Black;
        temp16.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp16.Alignment = Fuse.Elements.Alignment.Bottom;
        temp16.SourceLineNumber = 89;
        temp16.SourceFileName = "SignIn.ux";
        global::Fuse.Controls.Grid.SetRow(temp16, 1);
        global::Fuse.Controls.Grid.SetColumn(temp16, 0);
        global::Fuse.Controls.Grid.SetColumnSpan(temp16, 2);
        temp17.Color = float4(0.5568628f, 0.2588235f, 0.03137255f, 1f);
        temp17.Margin = float4(70f, 15f, 70f, 10f);
        temp17.SourceLineNumber = 95;
        temp17.SourceFileName = "SignIn.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp17, temp_eb3.OnEvent);
        temp17.Children.Add(temp18);
        temp17.Bindings.Add(temp_eb3);
        temp18.Value = "Login";
        temp18.Color = float4(1f, 1f, 1f, 1f);
        temp18.Alignment = Fuse.Elements.Alignment.Center;
        temp18.Margin = float4(30f, 15f, 30f, 15f);
        temp18.SourceLineNumber = 96;
        temp18.SourceFileName = "SignIn.ux";
        temp4.SourceLineNumber = 95;
        temp4.SourceFileName = "SignIn.ux";
        temp19.SourceLineNumber = 98;
        temp19.SourceFileName = "SignIn.ux";
        temp19.Children.Add(temp20);
        temp20.Value = "Clear";
        temp20.Color = float4(1f, 1f, 1f, 1f);
        temp20.Alignment = Fuse.Elements.Alignment.Center;
        temp20.Margin = float4(0f, 0f, 0f, 15f);
        temp20.SourceLineNumber = 99;
        temp20.SourceFileName = "SignIn.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp20, temp_eb4.OnEvent);
        temp20.Bindings.Add(temp_eb4);
        temp5.SourceLineNumber = 99;
        temp5.SourceFileName = "SignIn.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(loginArea);
        __g_nametable.Objects.Add(temp_eb3);
        __g_nametable.Objects.Add(temp_eb4);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "loginArea";
}
