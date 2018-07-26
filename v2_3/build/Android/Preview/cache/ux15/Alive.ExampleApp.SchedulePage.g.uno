namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class SchedulePage: Alive.Page
    {
        readonly Alive.Drawer drawer;
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
                var temp3 = new global::Alive.Title();
                var temp4 = new global::Fuse.Controls.Rectangle();
                var temp5 = new global::Alive.ImageFill();
                __self.Name = __selector0;
                __self.SourceLineNumber = 175;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                temp.SourceLineNumber = 176;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                temp1.Orientation = Fuse.Layouts.Orientation.Horizontal;
                temp1.SourceLineNumber = 177;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
                temp1.Children.Add(temp2);
                temp1.Children.Add(temp3);
                temp1.Children.Add(temp4);
                temp2.Value = "ZZ";
                temp2.Alignment = Fuse.Elements.Alignment.CenterLeft;
                temp2.Margin = float4(20f, 0f, 20f, 0f);
                temp2.Padding = float4(0f, 0f, 3f, 0f);
                temp2.SourceLineNumber = 178;
                temp2.SourceFileName = "Pages/SchedulePage.ux";
                temp3.Value = "MY HOME";
                temp3.TextAlignment = Fuse.Controls.TextAlignment.Center;
                temp3.Alignment = Fuse.Elements.Alignment.VerticalCenter;
                temp3.Margin = float4(80f, 0f, 0f, 0f);
                temp3.SourceLineNumber = 179;
                temp3.SourceFileName = "Pages/SchedulePage.ux";
                temp4.CornerRadius = float4(15f, 15f, 15f, 15f);
                temp4.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
                temp4.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
                temp4.Alignment = Fuse.Elements.Alignment.CenterRight;
                temp4.Margin = float4(70f, 10f, 10f, 0f);
                temp4.SourceLineNumber = 180;
                temp4.SourceFileName = "Pages/SchedulePage.ux";
                temp4.Fills.Add(temp5);
                temp5.File = new global::Uno.UX.BundleFileSource(import("G:/Eliot v2/v2/Assets/profile1.jpg"));
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
                var temp4 = new global::Eliot.CorousalPage();
                var temp5 = new global::Eliot.CorousalPage();
                __self.Margin = float4(0f, 80f, 0f, 0f);
                __self.Name = __selector0;
                __self.SourceLineNumber = 188;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                temp.SourceLineNumber = 189;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                temp.SubtreeNodes.Add(temp1);
                temp.SubtreeNodes.Add(temp2);
                temp.SubtreeNodes.Add(temp3);
                temp.SubtreeNodes.Add(temp4);
                temp.SubtreeNodes.Add(temp5);
                temp1.SourceLineNumber = 190;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
                temp2.SourceLineNumber = 191;
                temp2.SourceFileName = "Pages/SchedulePage.ux";
                temp3.SourceLineNumber = 192;
                temp3.SourceFileName = "Pages/SchedulePage.ux";
                temp4.SourceLineNumber = 193;
                temp4.SourceFileName = "Pages/SchedulePage.ux";
                temp5.SourceLineNumber = 194;
                temp5.SourceFileName = "Pages/SchedulePage.ux";
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
            static Template2()
            {
            }
            public override object New()
            {
                var __self = new global::Eliot.GridElement();
                __self.SourceLineNumber = 199;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                return __self;
            }
        }
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "drawer",
            "router"
        };
        static SchedulePage()
        {
        }
        [global::Uno.UX.UXConstructor]
        public SchedulePage(
		[global::Uno.UX.UXParameter("drawer")] Alive.Drawer drawer, 
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
        {
            this.drawer = drawer;
            this.router = router;
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp = new global::Fuse.Controls.StackPanel();
            temp_Color_inst = new v2_FuseControlsPanel_Color_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Resource("Alive.PrimaryBackgroundColor");
            var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp3 = new global::Alive.MediaScroller(temp);
            var TopBar = new Template(this, this);
            var temp4 = new global::Alive.DarkTheme();
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp1, Fuse.Reactive.BindingMode.Default);
            var MediaOverlay = new Template1(this, this);
            var temp6 = new global::Fuse.Controls.Grid();
            var temp7 = new global::Fuse.Reactive.Each();
            var temp8 = new Template2(this, this);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/SchedulePage.ux";
            temp2.Code = "\n\tvar Observable = require('FuseJS/Observable');\n\n\tfunction ScheduleDay(day, color, items) {\n\t\tvar self = this;\n\n\t\tself.day = day;\n\t\tself.color = color;\n\t\tself.items = Observable(items).expand();\n\t\tself.removeScheduleItem = function(arg) {\n\t\t\tself.items.remove(arg.data);\n\t\t}\n\t}\n\n\texports.pushDetails = function() {\n\t\trouter.push(\"details\");\n\t}\n\texports.pushProgram = function() {\n\t\trouter.push(\"program\");\n\t}\n\n\texports.schedulesByDay = Observable(\n\t\tnew ScheduleDay(\"Today\", \"Alive.Red\", [\n\t\t\t{\n\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '19:00',\n\t\t\t\tcategory: 'Meetup',\n\t\t\t\tcategoryColor: 'Alive.Red'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Katakombe, Scene blue\",\n\t\t\t\tday: \"Tomorrow\",\n\t\t\t\ttime: '22:00',\n\t\t\t\tcategory: 'Concert',\n\t\t\t\tcategoryColor: 'Alive.Blue'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t]),\n\t\tnew ScheduleDay(\"Tomorrow\", \"Alive.Orange\", [\n\t\t\t{\n\t\t\t\ttitle: \"Katakombe, Scene blue\",\n\t\t\t\tday: \"Tomorrow\",\n\t\t\t\ttime: '22:00',\n\t\t\t\tcategory: 'Concert',\n\t\t\t\tcategoryColor: 'Alive.Blue'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '19:00',\n\t\t\t\tcategory: 'Meetup',\n\t\t\t\tcategoryColor: 'Alive.Red'\n\t\t\t},\n\t\t]),\n\t\tnew ScheduleDay(\"Friday\", \"Alive.Blue\", [\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '19:00',\n\t\t\t\tcategory: 'Meetup',\n\t\t\t\tcategoryColor: 'Alive.Red'\n\t\t\t},\n\t\t])\n\t);\n\t\t";
            temp2.LineNumber = 5;
            temp2.FileName = "Pages/SchedulePage.ux";
            temp2.SourceLineNumber = 5;
            temp2.SourceFileName = "Pages/SchedulePage.ux";
            temp3.TopBarColor = FuseUXKitsAlive_ColorPalette_res.AliveDarkPrimaryBackgroundColor;
            temp3.SourceLineNumber = 174;
            temp3.SourceFileName = "Pages/SchedulePage.ux";
            temp3.SubtreeNodes.Add(temp6);
            temp3.Templates.Add(TopBar);
            temp3.Templates.Add(MediaOverlay);
            temp.SourceLineNumber = 185;
            temp.SourceFileName = "Pages/SchedulePage.ux";
            temp.Children.Add(temp4);
            temp.Bindings.Add(temp5);
            temp4.SourceLineNumber = 186;
            temp4.SourceFileName = "Pages/SchedulePage.ux";
            temp1.SourceLineNumber = 185;
            temp1.SourceFileName = "Pages/SchedulePage.ux";
            temp6.RowCount = 3;
            temp6.ColumnCount = 3;
            temp6.Color = FuseUXKitsAlive_ColorPalette_res.AliveDarkPrimaryBackgroundColor;
            temp6.SourceLineNumber = 197;
            temp6.SourceFileName = "Pages/SchedulePage.ux";
            temp6.Children.Add(temp7);
            temp7.Count = 9;
            temp7.SourceLineNumber = 198;
            temp7.SourceFileName = "Pages/SchedulePage.ux";
            temp7.Templates.Add(temp8);
            __g_nametable.This = this;
            __g_nametable.Objects.Add(drawer);
            __g_nametable.Objects.Add(router);
            this.Children.Add(temp2);
            this.Children.Add(temp3);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
    }
}
