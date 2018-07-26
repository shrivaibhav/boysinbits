namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class SchedulePage: Alive.Page
    {
        readonly Fuse.Navigation.Router router;
        [Uno.Compiler.UxGenerated]
        public partial class Template: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.SchedulePage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.SchedulePage __parentInstance;
            public Template(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance): base("TopBar", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            static Template()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.StackPanel();
                var temp = new global::Fuse.Controls.StatusBarBackground();
                var temp1 = new global::Fuse.Controls.StackPanel();
                var temp2 = new global::Alive.Title();
                var temp3 = new global::Fuse.Controls.Rectangle();
                var temp4 = new global::Alive.ImageFill();
                __self.Name = __selector0;
                __self.SourceLineNumber = 119;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                temp.SourceLineNumber = 120;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                temp1.Orientation = Fuse.Layouts.Orientation.Horizontal;
                temp1.SourceLineNumber = 121;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
                temp1.Children.Add(temp2);
                temp1.Children.Add(temp3);
                temp2.Value = "MY HOME";
                temp2.FontSize = 25f;
                temp2.TextAlignment = Fuse.Controls.TextAlignment.Center;
                temp2.Color = Fuse.Drawing.Colors.Black;
                temp2.Alignment = Fuse.Elements.Alignment.VerticalCenter;
                temp2.Margin = float4(80f, 0f, 0f, 0f);
                temp2.SourceLineNumber = 123;
                temp2.SourceFileName = "Pages/SchedulePage.ux";
                temp2.Font = global::Alive.ExampleApp.SchedulePage.oswald;
                temp3.CornerRadius = float4(5f, 5f, 5f, 5f);
                temp3.Width = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
                temp3.Height = new Uno.UX.Size(44f, Uno.UX.Unit.Unspecified);
                temp3.Alignment = Fuse.Elements.Alignment.Right;
                temp3.Margin = float4(70f, 10f, 10f, 0f);
                temp3.X = new Uno.UX.Size(38f, Uno.UX.Unit.Unspecified);
                temp3.SourceLineNumber = 124;
                temp3.SourceFileName = "Pages/SchedulePage.ux";
                temp3.Fills.Add(temp4);
                temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/profile.png"));
                __self.Children.Add(temp);
                __self.Children.Add(temp1);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "TopBar";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.SchedulePage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.SchedulePage __parentInstance;
            public Template1(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance): base("MediaOverlay", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            static Template1()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.Panel();
                var temp = new global::Alive.Carousel();
                var temp1 = new global::Alive.DarkTheme();
                var temp2 = new global::Eliot.CorousalPage();
                var temp3 = new global::Eliot.CorousalPage();
                __self.Color = Fuse.Drawing.Colors.Black;
                __self.Margin = float4(0f, 80f, 0f, 0f);
                __self.Name = __selector0;
                __self.SourceLineNumber = 133;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                temp.SourceLineNumber = 134;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                temp.SubtreeNodes.Add(temp1);
                temp.SubtreeNodes.Add(temp2);
                temp.SubtreeNodes.Add(temp3);
                temp1.SourceLineNumber = 135;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
                temp2.SourceLineNumber = 136;
                temp2.SourceFileName = "Pages/SchedulePage.ux";
                temp3.SourceLineNumber = 137;
                temp3.SourceFileName = "Pages/SchedulePage.ux";
                __self.Children.Add(temp);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "MediaOverlay";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template2: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.SchedulePage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.SchedulePage __parentInstance;
            public Template2(Alive.ExampleApp.SchedulePage parent, Alive.ExampleApp.SchedulePage parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> temp_Url_inst;
            global::Uno.UX.Property<string> temp1_Value_inst;
            global::Uno.UX.Property<float4> temp2_Color_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb10;
            static Template2()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.DockPanel();
                var temp = new global::Fuse.Controls.Image();
                temp_Url_inst = new v2_FuseControlsImage_Url_Property(temp, __selector0);
                var temp3 = new global::Fuse.Reactive.Data("deviceIcon");
                var temp4 = new global::Fuse.Reactive.Data("deviceClicked");
                var temp1 = new global::Fuse.Controls.Text();
                temp1_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp1, __selector1);
                var temp5 = new global::Fuse.Reactive.Data("deviceType");
                var temp2 = new global::Fuse.Controls.Rectangle();
                temp2_Color_inst = new v2_FuseControlsShape_Color_Property(temp2, __selector2);
                var temp6 = new global::Fuse.Reactive.Data("backCol");
                var temp7 = new global::Fuse.Reactive.DataBinding(temp_Url_inst, temp3, Fuse.Reactive.BindingMode.Default);
                temp_eb10 = new global::Fuse.Reactive.EventBinding(temp4);
                var temp8 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp5, Fuse.Reactive.BindingMode.Default);
                var temp9 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp6, Fuse.Reactive.BindingMode.Default);
                __self.Aspect = 1f;
                __self.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
                __self.SourceLineNumber = 144;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                temp2.CornerRadius = float4(25f, 25f, 25f, 25f);
                temp2.Width = new Uno.UX.Size(110f, Uno.UX.Unit.Unspecified);
                temp2.Height = new Uno.UX.Size(110f, Uno.UX.Unit.Unspecified);
                temp2.SourceLineNumber = 147;
                temp2.SourceFileName = "Pages/SchedulePage.ux";
                temp2.Children.Add(temp);
                temp2.Children.Add(temp1);
                temp2.Bindings.Add(temp9);
                temp.StretchMode = Fuse.Elements.StretchMode.Fill;
                temp.Margin = float4(10f, 10f, 10f, 10f);
                temp.Layer = Fuse.Layer.Background;
                temp.SourceLineNumber = 149;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb10.OnEvent);
                temp.Bindings.Add(temp7);
                temp.Bindings.Add(temp_eb10);
                temp3.SourceLineNumber = 149;
                temp3.SourceFileName = "Pages/SchedulePage.ux";
                temp4.SourceLineNumber = 149;
                temp4.SourceFileName = "Pages/SchedulePage.ux";
                temp1.FontSize = 12f;
                temp1.TextColor = Fuse.Drawing.Colors.White;
                temp1.Alignment = Fuse.Elements.Alignment.BottomCenter;
                temp1.Margin = float4(0f, 0f, 0f, 0f);
                temp1.Y = new Uno.UX.Size(-4f, Uno.UX.Unit.Unspecified);
                temp1.SourceLineNumber = 150;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
                temp1.Bindings.Add(temp8);
                temp5.SourceLineNumber = 150;
                temp5.SourceFileName = "Pages/SchedulePage.ux";
                temp6.SourceLineNumber = 147;
                temp6.SourceFileName = "Pages/SchedulePage.ux";
                __self.Children.Add(temp2);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Url";
            static global::Uno.UX.Selector __selector1 = "Value";
            static global::Uno.UX.Selector __selector2 = "Color";
        }
        global::Uno.UX.Property<object> temp_Items_inst;
        [global::Uno.UX.UXGlobalResource("oswald")] public static readonly Fuse.Font oswald;
        internal global::Alive.Drawer drawer;
        internal global::Fuse.Reactive.EventBinding temp_eb7;
        internal global::Fuse.Reactive.EventBinding temp_eb8;
        internal global::Fuse.Reactive.EventBinding temp_eb9;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "router",
            "drawer",
            "temp_eb7",
            "temp_eb8",
            "temp_eb9"
        };
        static SchedulePage()
        {
            oswald = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import("../../../../../fonts/Oswald-Medium.ttf")));
            global::Uno.UX.Resource.SetGlobalKey(oswald, "oswald");
        }
        [global::Uno.UX.UXConstructor]
        public SchedulePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
        {
            this.router = router;
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp1 = new global::Fuse.Controls.StackPanel();
            var temp2 = new global::Fuse.Reactive.Data("goToSchedule");
            var temp3 = new global::Fuse.Reactive.Data("goToSettings");
            var temp4 = new global::Fuse.Reactive.Data("goToLogout");
            var temp5 = new global::Fuse.Controls.StackPanel();
            var temp = new global::Fuse.Reactive.Each();
            temp_Items_inst = new v2_FuseReactiveEach_Items_Property(temp, __selector0);
            var temp6 = new global::Fuse.Reactive.Data("installedAppliances");
            var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            drawer = new global::Alive.Drawer(temp1);
            var temp8 = new global::Alive.ExampleApp.DrawerItem();
            temp_eb7 = new global::Fuse.Reactive.EventBinding(temp2);
            var temp9 = new global::Alive.ExampleApp.DrawerItem();
            temp_eb8 = new global::Fuse.Reactive.EventBinding(temp3);
            var temp10 = new global::Alive.ExampleApp.DrawerItem();
            temp_eb9 = new global::Fuse.Reactive.EventBinding(temp4);
            var temp11 = new global::Alive.MediaScroller(temp5);
            var TopBar = new Template(this, this);
            var temp12 = new global::Alive.DarkTheme();
            var MediaOverlay = new Template1(this, this);
            var temp13 = new global::Fuse.Controls.Grid();
            var temp14 = new Template2(this, this);
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp6, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/SchedulePage.ux";
            temp7.Code = "\n\tvar Observable = require('FuseJS/Observable');\n\n\texports.pushDetails = function() {\n\t\trouter.push(\"details\");\n\t}\n\t\n\n\texports.logoutClicked = function(){\n\t\trouter.push(\"SignIn\");\n\t}\n\t\n\n\t////////////////////////////////\n\tvar installedAppliances=Observable();\n\tfetch(\"https://api.mlab.com/api/1/databases/hardware/collections/V2Devices?apiKey=Qd1BYa9Hpu9HUixPA76rEmmHyFuVqvop\")\n\t\t.then(function(result){\n\t\t\tresult.json().then(function(data){\n\n\t\t\t\tvar k=data.length;\n\t\t\t\tconsole.log(k);\n\t\t\t\tfor(var i=0; i<=k; i++){\n\t\t\t\t\tif(data[i].clientID==\"987766\"){\n\t\t\t\t\t\tconsole.log(data[i].deviceType);\n\t\t\t\t\t\tvar item=data[i];\n\t\t\t\t\t\tinstalledAppliances.add(item);\n\t\t\t\t\n\t\t\t\t\t}\n\t\t\t\t\t\n\t\t\t\t}\n\n\t\t\t\t\n\t\t\t})\n\t\t})\n\t//////////////////////////////////////\n\tvar deviceType=Observable();\n\tfunction deviceClicked(e){\n\t\tdeviceType.value=e.data.deviceType;\n\t\tvar id=deviceType.value\n\t\t//console.log(id);\n\t\t\n\t\trouter.goto(\"Device\", {selectedDevice:id})\n\n\t}\n\tmodule.exports={\n\t\tinstalledAppliances:installedAppliances,\n\t\tdeviceClicked:deviceClicked\n\t}\n\t//////////////////////////////////\n\n\n\n\t";
            temp7.LineNumber = 5;
            temp7.FileName = "Pages/SchedulePage.ux";
            temp7.SourceLineNumber = 5;
            temp7.SourceFileName = "Pages/SchedulePage.ux";
            drawer.Alignment = Fuse.Elements.Alignment.Default;
            drawer.Name = __selector1;
            drawer.SourceLineNumber = 58;
            drawer.SourceFileName = "Pages/SchedulePage.ux";
            drawer.SubtreeNodes.Add(temp11);
            temp1.SourceLineNumber = 59;
            temp1.SourceFileName = "Pages/SchedulePage.ux";
            temp1.Children.Add(temp8);
            temp1.Children.Add(temp9);
            temp1.Children.Add(temp10);
            temp8.Text = "My Home";
            temp8.SourceLineNumber = 60;
            temp8.SourceFileName = "Pages/SchedulePage.ux";
            global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb7.OnEvent);
            temp8.Bindings.Add(temp_eb7);
            temp2.SourceLineNumber = 60;
            temp2.SourceFileName = "Pages/SchedulePage.ux";
            temp9.Text = "Settings";
            temp9.SourceLineNumber = 61;
            temp9.SourceFileName = "Pages/SchedulePage.ux";
            global::Fuse.Gestures.Clicked.AddHandler(temp9, temp_eb8.OnEvent);
            temp9.Bindings.Add(temp_eb8);
            temp3.SourceLineNumber = 61;
            temp3.SourceFileName = "Pages/SchedulePage.ux";
            temp10.Text = "Logout";
            temp10.SourceLineNumber = 62;
            temp10.SourceFileName = "Pages/SchedulePage.ux";
            global::Fuse.Gestures.Clicked.AddHandler(temp10, temp_eb9.OnEvent);
            temp10.Bindings.Add(temp_eb9);
            temp4.SourceLineNumber = 62;
            temp4.SourceFileName = "Pages/SchedulePage.ux";
            temp11.TopBarColor = FuseUXKitsAlive_ColorPalette_res.AliveDarkPrimaryBackgroundColor;
            temp11.SourceLineNumber = 118;
            temp11.SourceFileName = "Pages/SchedulePage.ux";
            temp11.SubtreeNodes.Add(temp13);
            temp11.Templates.Add(TopBar);
            temp11.Templates.Add(MediaOverlay);
            temp5.Color = Fuse.Drawing.Colors.Black;
            temp5.SourceLineNumber = 130;
            temp5.SourceFileName = "Pages/SchedulePage.ux";
            temp5.Children.Add(temp12);
            temp12.SourceLineNumber = 131;
            temp12.SourceFileName = "Pages/SchedulePage.ux";
            temp13.RowCount = 3;
            temp13.ColumnCount = 3;
            temp13.Color = Fuse.Drawing.Colors.Black;
            temp13.SourceLineNumber = 142;
            temp13.SourceFileName = "Pages/SchedulePage.ux";
            temp13.Children.Add(temp);
            temp.SourceLineNumber = 143;
            temp.SourceFileName = "Pages/SchedulePage.ux";
            temp.Templates.Add(temp14);
            temp.Bindings.Add(temp15);
            temp6.SourceLineNumber = 143;
            temp6.SourceFileName = "Pages/SchedulePage.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(router);
            __g_nametable.Objects.Add(drawer);
            __g_nametable.Objects.Add(temp_eb7);
            __g_nametable.Objects.Add(temp_eb8);
            __g_nametable.Objects.Add(temp_eb9);
            this.Children.Add(temp7);
            this.Children.Add(drawer);
        }
        static global::Uno.UX.Selector __selector0 = "Items";
        static global::Uno.UX.Selector __selector1 = "drawer";
    }
}
