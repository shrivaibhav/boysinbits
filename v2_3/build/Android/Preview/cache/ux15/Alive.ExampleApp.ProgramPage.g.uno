namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class ProgramPage: Alive.Page
    {
        readonly Fuse.Navigation.Router router;
        [Uno.Compiler.UxGenerated]
        public partial class Template: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.ProgramPage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.ProgramPage __parentInstance;
            public Template(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance): base("TopBar", false)
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
                var temp = new global::Alive.DarkTheme();
                var temp1 = new global::Fuse.Controls.StatusBarBackground();
                var temp2 = new global::Alive.BodyBold();
                __self.Name = __selector0;
                __self.SourceLineNumber = 82;
                __self.SourceFileName = "Pages/ProgramPage.ux";
                temp.SourceLineNumber = 83;
                temp.SourceFileName = "Pages/ProgramPage.ux";
                temp1.SourceLineNumber = 84;
                temp1.SourceFileName = "Pages/ProgramPage.ux";
                temp2.Value = "Talks";
                temp2.Alignment = Fuse.Elements.Alignment.Center;
                temp2.Margin = float4(0f, 20f, 0f, 20f);
                temp2.SourceLineNumber = 85;
                temp2.SourceFileName = "Pages/ProgramPage.ux";
                __self.Children.Add(temp);
                __self.Children.Add(temp1);
                __self.Children.Add(temp2);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "TopBar";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.ProgramPage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.ProgramPage __parentInstance;
            public Template1(Alive.ExampleApp.ProgramPage parent, Alive.ExampleApp.ProgramPage parentInstance): base("Item", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<float4> temp_CategoryColor_inst;
            global::Uno.UX.Property<bool> temp_IsAttending_inst;
            global::Uno.UX.Property<string> temp_Time_inst;
            global::Uno.UX.Property<string> temp_Person_inst;
            global::Uno.UX.Property<string> temp_Title_inst;
            global::Uno.UX.Property<Uno.UX.FileSource> temp1_File_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb3;
            internal global::Fuse.Reactive.EventBinding temp_eb4;
            static Template1()
            {
            }
            public override object New()
            {
                var __self = new global::Alive.SwipeActionPanel();
                var temp2 = new global::Fuse.Reactive.Data("attendEvent");
                var temp3 = new global::Fuse.Reactive.Data("categoryColor");
                var temp = new global::Alive.ExampleApp.ProgramItem();
                temp_CategoryColor_inst = new v2_AliveExampleAppProgramItem_CategoryColor_Property(temp, __selector0);
                var temp4 = new global::Fuse.Reactive.DataToResource(temp3);
                temp_IsAttending_inst = new v2_AliveExampleAppProgramItem_IsAttending_Property(temp, __selector1);
                var temp5 = new global::Fuse.Reactive.Data("attending");
                temp_Time_inst = new v2_AliveExampleAppProgramItem_Time_Property(temp, __selector2);
                var temp6 = new global::Fuse.Reactive.Data("time");
                temp_Person_inst = new v2_AliveExampleAppProgramItem_Person_Property(temp, __selector3);
                var temp7 = new global::Fuse.Reactive.Data("person");
                temp_Title_inst = new v2_AliveExampleAppProgramItem_Title_Property(temp, __selector4);
                var temp8 = new global::Fuse.Reactive.Data("title");
                var temp9 = new global::Fuse.Reactive.Data("pushDetails");
                var temp1 = new global::Fuse.Resources.FileImageSource();
                temp1_File_inst = new v2_FuseResourcesFileImageSource_File_Property(temp1, __selector5);
                var temp10 = new global::Fuse.Reactive.Data("image");
                var temp11 = new global::Alive.SwipeActionConfirmed();
                temp_eb3 = new global::Fuse.Reactive.EventBinding(temp2);
                var temp12 = new global::Fuse.Reactive.DataBinding(temp_CategoryColor_inst, temp4, Fuse.Reactive.BindingMode.Default);
                var temp13 = new global::Fuse.Reactive.DataBinding(temp_IsAttending_inst, temp5, Fuse.Reactive.BindingMode.Default);
                var temp14 = new global::Fuse.Reactive.DataBinding(temp_Time_inst, temp6, Fuse.Reactive.BindingMode.Default);
                var temp15 = new global::Fuse.Reactive.DataBinding(temp_Person_inst, temp7, Fuse.Reactive.BindingMode.Default);
                var temp16 = new global::Fuse.Reactive.DataBinding(temp_Title_inst, temp8, Fuse.Reactive.BindingMode.Default);
                temp_eb4 = new global::Fuse.Reactive.EventBinding(temp9);
                var temp17 = new global::Fuse.Reactive.DataBinding(temp1_File_inst, temp10, Fuse.Reactive.BindingMode.Default);
                __self.ButtonText = "Attend this event";
                __self.ConfirmationText = "Attending!";
                __self.GradientStartColor = FuseUXKitsAlive_ColorPalette_res.AliveGradient2StartColor;
                __self.GradientEndColor = FuseUXKitsAlive_ColorPalette_res.AliveGradient2EndColor;
                __self.Name = __selector6;
                __self.SourceLineNumber = 105;
                __self.SourceFileName = "Pages/ProgramPage.ux";
                temp11.SourceLineNumber = 111;
                temp11.SourceFileName = "Pages/ProgramPage.ux";
                temp11.Handler += temp_eb3.OnEvent;
                temp11.Bindings.Add(temp_eb3);
                temp2.SourceLineNumber = 111;
                temp2.SourceFileName = "Pages/ProgramPage.ux";
                temp.SourceLineNumber = 112;
                temp.SourceFileName = "Pages/ProgramPage.ux";
                global::Fuse.Gestures.Clicked.AddHandler(temp, temp_eb4.OnEvent);
                temp.ImageSource = temp1;
                temp.Bindings.Add(temp12);
                temp.Bindings.Add(temp13);
                temp.Bindings.Add(temp14);
                temp.Bindings.Add(temp15);
                temp.Bindings.Add(temp16);
                temp.Bindings.Add(temp_eb4);
                temp.Bindings.Add(temp17);
                temp10.SourceLineNumber = 113;
                temp10.SourceFileName = "Pages/ProgramPage.ux";
                temp4.SourceLineNumber = 112;
                temp4.SourceFileName = "Pages/ProgramPage.ux";
                temp3.SourceLineNumber = 112;
                temp3.SourceFileName = "Pages/ProgramPage.ux";
                temp5.SourceLineNumber = 112;
                temp5.SourceFileName = "Pages/ProgramPage.ux";
                temp6.SourceLineNumber = 112;
                temp6.SourceFileName = "Pages/ProgramPage.ux";
                temp7.SourceLineNumber = 112;
                temp7.SourceFileName = "Pages/ProgramPage.ux";
                temp8.SourceLineNumber = 112;
                temp8.SourceFileName = "Pages/ProgramPage.ux";
                temp9.SourceLineNumber = 112;
                temp9.SourceFileName = "Pages/ProgramPage.ux";
                __self.SubtreeNodes.Add(temp11);
                __self.SubtreeNodes.Add(temp);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "CategoryColor";
            static global::Uno.UX.Selector __selector1 = "IsAttending";
            static global::Uno.UX.Selector __selector2 = "Time";
            static global::Uno.UX.Selector __selector3 = "Person";
            static global::Uno.UX.Selector __selector4 = "Title";
            static global::Uno.UX.Selector __selector5 = "File";
            static global::Uno.UX.Selector __selector6 = "item";
        }
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.Property<object> temp2_Items_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "router"
        };
        static ProgramPage()
        {
        }
        [global::Uno.UX.UXConstructor]
        public ProgramPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
        {
            this.router = router;
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp3 = new global::Fuse.Controls.Image();
            var temp1 = new global::Fuse.Controls.Panel();
            var temp = new global::Alive.Icon();
            temp_Color_inst = new v2_FuseControlsTextControl_Color_Property(temp, __selector0);
            var temp4 = new global::Fuse.Reactive.Resource("Alive.BodyTextColor");
            temp1_Color_inst = new v2_FuseControlsPanel_Color_Property(temp1, __selector0);
            var temp5 = new global::Fuse.Reactive.Resource("Alive.Blue");
            var temp2 = new global::Alive.ListView();
            temp2_Items_inst = new v2_AliveListView_Items_Property(temp2, __selector1);
            var temp6 = new global::Fuse.Reactive.Data("items");
            var temp7 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp8 = new global::Alive.MediaScroller(temp3);
            var TopBar = new Template(this, this);
            var temp9 = new global::Alive.StickyHeader(temp1);
            var temp10 = new global::Alive.DarkTheme();
            var temp11 = new global::Fuse.Controls.DockPanel();
            var temp12 = new global::Alive.IconLabel();
            var temp13 = new global::Fuse.Controls.StackPanel();
            var temp14 = new global::Alive.ButtonText();
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp16 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp5, Fuse.Reactive.BindingMode.Default);
            var temp17 = new global::Fuse.Controls.StackPanel();
            var item = new Template1(this, this);
            var temp18 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp6, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/ProgramPage.ux";
            temp7.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\n\t\tvar events = Observable(\n\t\t\t{\n\t\t\t\timage: \"Assets/event1.jpg\",\n\t\t\t\tcategoryColor: \"Alive.Green\",\n\t\t\t\ttime: \"Today - 09:00\",\n\t\t\t\tperson: \"Bernard Guber\",\n\t\t\t\ttitle: \"Design better with less distractions\",\n\t\t\t\tattending: Observable(false)\n\t\t\t},\n\t\t\t{\n\t\t\t\timage: \"Assets/event2.jpg\",\n\t\t\t\tcategoryColor: \"Alive.Yellow\",\n\t\t\t\ttime: \"Today - 09:00\",\n\t\t\t\tperson: \"Serena Hitcher\",\n\t\t\t\ttitle: \"Why AI is working and I'm not!\",\n\t\t\t\tattending: Observable(false)\n\t\t\t},\n\t\t\t{\n\t\t\t\timage: \"Assets/event3.jpg\",\n\t\t\t\tcategoryColor: \"Alive.Green\",\n\t\t\t\ttime: \"Today - 09:00\",\n\t\t\t\tperson: \"Mark Spencer\",\n\t\t\t\ttitle: \"Upwards and onwards\",\n\t\t\t\tattending: Observable(false)\n\t\t\t},\n\t\t\t{\n\t\t\t\timage: \"Assets/event4.jpg\",\n\t\t\t\tcategoryColor: \"Alive.Blue\",\n\t\t\t\ttime: \"Today - 10:00\",\n\t\t\t\tperson: \"Lydia\tManning\",\n\t\t\t\ttitle: \"Why women are taking over important positions in society\",\n\t\t\t\tattending: Observable(false)\n\t\t\t},\n\t\t\t{\n\t\t\t\timage: \"Assets/event5.jpg\",\n\t\t\t\tcategoryColor: \"Alive.Red\",\n\t\t\t\ttime: \"Today - 10:00\",\n\t\t\t\tperson: \"Jenny Hook\",\n\t\t\t\ttitle: \"Why I used to be stupid\",\n\t\t\t\tattending: Observable(false)\n\t\t\t},\n\t\t\t{\n\t\t\t\timage: \"Assets/event6.jpg\",\n\t\t\t\tcategoryColor: \"Alive.Yellow\",\n\t\t\t\ttime: \"Today - 09:00\",\n\t\t\t\tperson: \"Mitch Bauermann\",\n\t\t\t\ttitle: \"Light the spark of science\",\n\t\t\t\tattending: Observable(false)\n\t\t\t},\n\t\t\t{\n\t\t\t\timage: \"Assets/event7.jpg\",\n\t\t\t\tcategoryColor: \"Alive.Green\",\n\t\t\t\ttime: \"Today - 09:00\",\n\t\t\t\tperson: \"Jay Greene\",\n\t\t\t\ttitle: \"The path ahead\",\n\t\t\t\tattending: Observable(false)\n\t\t\t}\n\t\t);\n\n\t\tfunction attendEvent(args) {\n\t\t\targs.data.attending.value = true;\n\t\t}\n\t\n\t\tfunction pushDetails() {\n\t\t\trouter.push(\"details\");\n\t\t}\n\t\t\n\t\tmodule.exports = {\n\t\t\titems: events,\n\t\t\tattendEvent: attendEvent,\n\t\t\tpushDetails: pushDetails\n\t\t}\n\t";
            temp7.LineNumber = 4;
            temp7.FileName = "Pages/ProgramPage.ux";
            temp7.SourceLineNumber = 4;
            temp7.SourceFileName = "Pages/ProgramPage.ux";
            temp8.TopBarColor = FuseUXKitsAlive_ColorPalette_res.AliveDarkPrimaryBackgroundColor;
            temp8.SourceLineNumber = 81;
            temp8.SourceFileName = "Pages/ProgramPage.ux";
            temp8.SubtreeNodes.Add(temp9);
            temp8.Templates.Add(TopBar);
            temp3.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            temp3.SourceLineNumber = 88;
            temp3.SourceFileName = "Pages/ProgramPage.ux";
            temp3.File = new global::Uno.UX.BundleFileSource(import("G:/Eliot v2/v2/Assets/event4.jpg"));
            temp9.SourceLineNumber = 90;
            temp9.SourceFileName = "Pages/ProgramPage.ux";
            temp9.Children.Add(temp17);
            temp1.SourceLineNumber = 91;
            temp1.SourceFileName = "Pages/ProgramPage.ux";
            temp1.Children.Add(temp10);
            temp1.Children.Add(temp11);
            temp1.Bindings.Add(temp16);
            temp10.SourceLineNumber = 92;
            temp10.SourceFileName = "Pages/ProgramPage.ux";
            temp11.Margin = float4(25f, 20f, 25f, 20f);
            temp11.SourceLineNumber = 93;
            temp11.SourceFileName = "Pages/ProgramPage.ux";
            temp11.Children.Add(temp12);
            temp11.Children.Add(temp13);
            temp12.Text = "Today";
            temp12.Icon = "\uEA46";
            temp12.Alignment = Fuse.Elements.Alignment.Left;
            temp12.SourceLineNumber = 94;
            temp12.SourceFileName = "Pages/ProgramPage.ux";
            temp13.Orientation = Fuse.Layouts.Orientation.Horizontal;
            temp13.SourceLineNumber = 96;
            temp13.SourceFileName = "Pages/ProgramPage.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp13, Fuse.Layouts.Dock.Right);
            temp13.Children.Add(temp14);
            temp13.Children.Add(temp);
            temp14.Value = "Filter";
            temp14.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            temp14.Margin = float4(0f, 0f, 10f, 0f);
            temp14.SourceLineNumber = 97;
            temp14.SourceFileName = "Pages/ProgramPage.ux";
            temp.Value = "\uEC5E";
            temp.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            temp.SourceLineNumber = 98;
            temp.SourceFileName = "Pages/ProgramPage.ux";
            temp.Bindings.Add(temp15);
            temp4.SourceLineNumber = 98;
            temp4.SourceFileName = "Pages/ProgramPage.ux";
            temp5.SourceLineNumber = 91;
            temp5.SourceFileName = "Pages/ProgramPage.ux";
            temp17.SourceLineNumber = 103;
            temp17.SourceFileName = "Pages/ProgramPage.ux";
            temp17.Children.Add(temp2);
            temp2.SourceLineNumber = 104;
            temp2.SourceFileName = "Pages/ProgramPage.ux";
            temp2.Templates.Add(item);
            temp2.Bindings.Add(temp18);
            temp6.SourceLineNumber = 104;
            temp6.SourceFileName = "Pages/ProgramPage.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(router);
            this.Children.Add(temp7);
            this.Children.Add(temp8);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "Items";
    }
}
