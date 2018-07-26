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
                var temp1 = new global::Alive.UnderlineTitle();
                __self.Name = __selector0;
                __self.SourceLineNumber = 97;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                temp.SourceLineNumber = 98;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                temp1.Text = "Your schedule";
                temp1.SourceLineNumber = 99;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
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
                var temp2 = new global::Alive.CarouselPage();
                var temp3 = new global::Alive.ThemedCard();
                var temp4 = new global::Alive.DarkTheme();
                var temp5 = new global::Fuse.Controls.StackPanel();
                var temp6 = new global::Alive.Body();
                var temp7 = new global::Alive.Bubbles();
                var temp8 = new global::Alive.Bubble();
                var temp9 = new global::Alive.ImageFill();
                var temp10 = new global::Alive.Bubble();
                var temp11 = new global::Alive.ImageFill();
                var temp12 = new global::Alive.Bubble();
                var temp13 = new global::Alive.ImageFill();
                var temp14 = new global::Alive.Bubble();
                var temp15 = new global::Fuse.Controls.Text();
                var temp16 = new global::Fuse.Drawing.LinearGradient();
                var temp17 = new global::Fuse.Drawing.GradientStop();
                var temp18 = new global::Fuse.Drawing.GradientStop();
                var temp19 = new global::Alive.CarouselPage();
                var temp20 = new global::Alive.Card();
                var temp21 = new global::Alive.ImageFill();
                var temp22 = new global::Alive.CarouselPage();
                var temp23 = new global::Alive.Card();
                var temp24 = new global::Alive.ImageFill();
                var temp25 = new global::Alive.CarouselPage();
                var temp26 = new global::Alive.Card();
                var temp27 = new global::Alive.ImageFill();
                __self.Margin = float4(0f, 80f, 0f, 0f);
                __self.Name = __selector0;
                __self.SourceLineNumber = 106;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                temp.SourceLineNumber = 107;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                temp.SubtreeNodes.Add(temp1);
                temp.SubtreeNodes.Add(temp2);
                temp.SubtreeNodes.Add(temp19);
                temp.SubtreeNodes.Add(temp22);
                temp.SubtreeNodes.Add(temp25);
                temp1.SourceLineNumber = 108;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
                temp2.SourceLineNumber = 109;
                temp2.SourceFileName = "Pages/SchedulePage.ux";
                temp2.Children.Add(temp3);
                temp3.SourceLineNumber = 110;
                temp3.SourceFileName = "Pages/SchedulePage.ux";
                temp3.Fills.Add(temp16);
                temp3.Children.Add(temp4);
                temp3.Children.Add(temp5);
                temp4.SourceLineNumber = 111;
                temp4.SourceFileName = "Pages/SchedulePage.ux";
                temp5.ItemSpacing = 30f;
                temp5.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
                temp5.Alignment = Fuse.Elements.Alignment.Center;
                temp5.SourceLineNumber = 112;
                temp5.SourceFileName = "Pages/SchedulePage.ux";
                temp5.Children.Add(temp6);
                temp5.Children.Add(temp7);
                temp6.Value = "See which events your friends will attend";
                temp6.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
                temp6.TextAlignment = Fuse.Controls.TextAlignment.Center;
                temp6.SourceLineNumber = 113;
                temp6.SourceFileName = "Pages/SchedulePage.ux";
                temp7.SourceLineNumber = 116;
                temp7.SourceFileName = "Pages/SchedulePage.ux";
                temp7.Children.Add(temp8);
                temp7.Children.Add(temp10);
                temp7.Children.Add(temp12);
                temp7.Children.Add(temp14);
                temp8.SourceLineNumber = 117;
                temp8.SourceFileName = "Pages/SchedulePage.ux";
                temp8.Fills.Add(temp9);
                temp9.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/profile1.jpg"));
                temp10.SourceLineNumber = 120;
                temp10.SourceFileName = "Pages/SchedulePage.ux";
                temp10.Fills.Add(temp11);
                temp11.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/profile2.jpg"));
                temp12.SourceLineNumber = 123;
                temp12.SourceFileName = "Pages/SchedulePage.ux";
                temp12.Fills.Add(temp13);
                temp13.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/profile3.jpg"));
                temp14.SourceLineNumber = 126;
                temp14.SourceFileName = "Pages/SchedulePage.ux";
                temp14.Children.Add(temp15);
                temp15.Value = "+2";
                temp15.Alignment = Fuse.Elements.Alignment.Center;
                temp15.SourceLineNumber = 127;
                temp15.SourceFileName = "Pages/SchedulePage.ux";
                temp16.Stops.Add(temp17);
                temp16.Stops.Add(temp18);
                temp17.Offset = 0f;
                temp17.Color = FuseUXKitsAlive_ColorPalette_res.AliveGradient3StartColor;
                temp18.Offset = 1f;
                temp18.Color = FuseUXKitsAlive_ColorPalette_res.AliveGradient3EndColor;
                temp19.SourceLineNumber = 137;
                temp19.SourceFileName = "Pages/SchedulePage.ux";
                temp19.Children.Add(temp20);
                temp20.SourceLineNumber = 138;
                temp20.SourceFileName = "Pages/SchedulePage.ux";
                temp20.Fills.Add(temp21);
                temp21.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/event2.jpg"));
                temp22.SourceLineNumber = 142;
                temp22.SourceFileName = "Pages/SchedulePage.ux";
                temp22.Children.Add(temp23);
                temp23.SourceLineNumber = 143;
                temp23.SourceFileName = "Pages/SchedulePage.ux";
                temp23.Fills.Add(temp24);
                temp24.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/event4.jpg"));
                temp25.SourceLineNumber = 147;
                temp25.SourceFileName = "Pages/SchedulePage.ux";
                temp25.Children.Add(temp26);
                temp26.SourceLineNumber = 148;
                temp26.SourceFileName = "Pages/SchedulePage.ux";
                temp26.Fills.Add(temp27);
                temp27.File = new global::Uno.UX.BundleFileSource(import("../../../../../Assets/event3.jpg"));
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
            [Uno.Compiler.UxGenerated]
            public partial class Template3: Uno.UX.Template
            {
                [Uno.WeakReference] internal readonly Template2 __parent;
                [Uno.WeakReference] internal readonly Fuse.Reactive.WhileNotEmpty __parentInstance;
                public Template3(Template2 parent, Fuse.Reactive.WhileNotEmpty parentInstance): base("Item", false)
                {
                    __parent = parent;
                    __parentInstance = parentInstance;
                }
                global::Uno.UX.Property<string> scheduleItem_Time_inst;
                global::Uno.UX.Property<string> scheduleItem_Category_inst;
                global::Uno.UX.Property<string> scheduleItem_Title_inst;
                global::Uno.UX.Property<float4> scheduleItem_CategoryColor_inst;
                internal global::Fuse.Reactive.EventBinding temp_eb7;
                internal global::Alive.ExampleApp.ScheduleItem scheduleItem;
                internal global::Fuse.Reactive.EventBinding temp_eb8;
                static Template3()
                {
                }
                public override object New()
                {
                    var __self = new global::Alive.SwipeActionPanel();
                    var temp = new global::Fuse.Reactive.Data("removeScheduleItem");
                    scheduleItem = new global::Alive.ExampleApp.ScheduleItem();
                    scheduleItem_Time_inst = new v2_AliveExampleAppScheduleItem_Time_Property(scheduleItem, __selector0);
                    var temp1 = new global::Fuse.Reactive.Data("time");
                    scheduleItem_Category_inst = new v2_AliveExampleAppScheduleItem_Category_Property(scheduleItem, __selector1);
                    var temp2 = new global::Fuse.Reactive.Data("category");
                    scheduleItem_Title_inst = new v2_AliveExampleAppScheduleItem_Title_Property(scheduleItem, __selector2);
                    var temp3 = new global::Fuse.Reactive.Data("title");
                    var temp4 = new global::Fuse.Reactive.Data("categoryColor");
                    scheduleItem_CategoryColor_inst = new v2_AliveExampleAppScheduleItem_CategoryColor_Property(scheduleItem, __selector3);
                    var temp5 = new global::Fuse.Reactive.DataToResource(temp4);
                    var temp6 = new global::Fuse.Reactive.Data("pushDetails");
                    var temp7 = new global::Alive.SwipeActionConfirmed();
                    temp_eb7 = new global::Fuse.Reactive.EventBinding(temp);
                    var temp8 = new global::Fuse.Reactive.DataBinding(scheduleItem_Time_inst, temp1, Fuse.Reactive.BindingMode.Default);
                    var temp9 = new global::Fuse.Reactive.DataBinding(scheduleItem_Category_inst, temp2, Fuse.Reactive.BindingMode.Default);
                    var temp10 = new global::Fuse.Reactive.DataBinding(scheduleItem_Title_inst, temp3, Fuse.Reactive.BindingMode.Default);
                    var temp11 = new global::Fuse.Reactive.DataBinding(scheduleItem_CategoryColor_inst, temp5, Fuse.Reactive.BindingMode.Default);
                    temp_eb8 = new global::Fuse.Reactive.EventBinding(temp6);
                    var temp12 = new global::Fuse.Triggers.LayoutAnimation();
                    var temp13 = new global::Fuse.Animations.Move();
                    var temp14 = new global::Fuse.Animations.Resize();
                    __self.ButtonText = "Remove this event";
                    __self.ConfirmationText = "Removed!";
                    __self.GradientStartColor = float4(0.8117647f, 0.3372549f, 0.4196078f, 1f);
                    __self.GradientEndColor = float4(0.9607843f, 0.5843138f, 0.4745098f, 1f);
                    __self.StayOpen = true;
                    __self.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
                    __self.Name = __selector4;
                    __self.SourceLineNumber = 171;
                    __self.SourceFileName = "Pages/SchedulePage.ux";
                    temp7.SourceLineNumber = 172;
                    temp7.SourceFileName = "Pages/SchedulePage.ux";
                    temp7.Handler += temp_eb7.OnEvent;
                    temp7.Bindings.Add(temp_eb7);
                    temp.SourceLineNumber = 172;
                    temp.SourceFileName = "Pages/SchedulePage.ux";
                    scheduleItem.Name = __selector5;
                    scheduleItem.SourceLineNumber = 174;
                    scheduleItem.SourceFileName = "Pages/SchedulePage.ux";
                    global::Fuse.Gestures.Clicked.AddHandler(scheduleItem, temp_eb8.OnEvent);
                    scheduleItem.Bindings.Add(temp8);
                    scheduleItem.Bindings.Add(temp9);
                    scheduleItem.Bindings.Add(temp10);
                    scheduleItem.Bindings.Add(temp11);
                    scheduleItem.Bindings.Add(temp_eb8);
                    temp1.SourceLineNumber = 174;
                    temp1.SourceFileName = "Pages/SchedulePage.ux";
                    temp2.SourceLineNumber = 174;
                    temp2.SourceFileName = "Pages/SchedulePage.ux";
                    temp3.SourceLineNumber = 174;
                    temp3.SourceFileName = "Pages/SchedulePage.ux";
                    temp5.SourceLineNumber = 174;
                    temp5.SourceFileName = "Pages/SchedulePage.ux";
                    temp4.SourceLineNumber = 174;
                    temp4.SourceFileName = "Pages/SchedulePage.ux";
                    temp6.SourceLineNumber = 174;
                    temp6.SourceFileName = "Pages/SchedulePage.ux";
                    temp12.SourceLineNumber = 176;
                    temp12.SourceFileName = "Pages/SchedulePage.ux";
                    temp12.Animators.Add(temp13);
                    temp12.Animators.Add(temp14);
                    temp13.Y = 1f;
                    temp13.Duration = 0.35;
                    temp13.RelativeTo = Fuse.Triggers.LayoutTransition.PositionChange;
                    temp13.Easing = Fuse.Animations.Easing.CircularInOut;
                    temp14.Y = 1f;
                    temp14.Duration = 0.35;
                    temp14.RelativeTo = Fuse.Triggers.LayoutTransition.ResizeSizeChange;
                    temp14.Easing = Fuse.Animations.Easing.CircularInOut;
                    __self.SubtreeNodes.Add(temp7);
                    __self.SubtreeNodes.Add(scheduleItem);
                    __self.SubtreeNodes.Add(temp12);
                    return __self;
                }
                static global::Uno.UX.Selector __selector0 = "Time";
                static global::Uno.UX.Selector __selector1 = "Category";
                static global::Uno.UX.Selector __selector2 = "Title";
                static global::Uno.UX.Selector __selector3 = "CategoryColor";
                static global::Uno.UX.Selector __selector4 = "item";
                static global::Uno.UX.Selector __selector5 = "scheduleItem";
            }
            global::Uno.UX.Property<string> header_Text_inst;
            global::Uno.UX.Property<float4> header_Color_inst;
            global::Uno.UX.Property<object> temp_Items_inst;
            global::Uno.UX.Property<object> __self_Items_inst;
            internal global::Fuse.Controls.StackPanel dayContainer;
            internal global::Alive.ListViewHeader header;
            static Template2()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Reactive.WhileNotEmpty();
                header = new global::Alive.ListViewHeader();
                header_Text_inst = new v2_AliveListViewHeader_Text_Property(header, __selector0);
                var temp1 = new global::Fuse.Reactive.Data("day");
                var temp2 = new global::Fuse.Reactive.Data("color");
                header_Color_inst = new v2_FuseControlsShape_Color_Property(header, __selector1);
                var temp3 = new global::Fuse.Reactive.DataToResource(temp2);
                var temp = new global::Alive.ListView();
                temp_Items_inst = new v2_AliveListView_Items_Property(temp, __selector2);
                var temp4 = new global::Fuse.Reactive.Data("items");
                __self_Items_inst = new v2_FuseReactiveWhileCount_Items_Property(__self, __selector2);
                var temp5 = new global::Fuse.Reactive.Data("items");
                dayContainer = new global::Fuse.Controls.StackPanel();
                var temp6 = new global::Fuse.Triggers.RemovingAnimation();
                var temp7 = new global::Fuse.Animations.Move();
                var temp8 = new global::Fuse.Triggers.LayoutAnimation();
                var temp9 = new global::Fuse.Animations.Move();
                var temp10 = new global::Fuse.Animations.Resize();
                var temp11 = new global::Alive.StickyHeaderAnimation(header);
                var temp12 = new global::Fuse.Reactive.DataBinding(header_Text_inst, temp1, Fuse.Reactive.BindingMode.Default);
                var temp13 = new global::Fuse.Reactive.DataBinding(header_Color_inst, temp3, Fuse.Reactive.BindingMode.Default);
                var item = new Template3(this, __self);
                var temp14 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp4, Fuse.Reactive.BindingMode.Default);
                var temp15 = new global::Fuse.Reactive.DataBinding(__self_Items_inst, temp5, Fuse.Reactive.BindingMode.Default);
                __self.SourceLineNumber = 156;
                __self.SourceFileName = "Pages/SchedulePage.ux";
                dayContainer.ClipToBounds = true;
                dayContainer.Name = __selector3;
                dayContainer.SourceLineNumber = 157;
                dayContainer.SourceFileName = "Pages/SchedulePage.ux";
                dayContainer.Children.Add(temp6);
                dayContainer.Children.Add(temp8);
                dayContainer.Children.Add(temp11);
                dayContainer.Children.Add(header);
                dayContainer.Children.Add(temp);
                temp6.SourceLineNumber = 158;
                temp6.SourceFileName = "Pages/SchedulePage.ux";
                temp6.Animators.Add(temp7);
                temp7.Y = -1f;
                temp7.Duration = 0.3;
                temp7.Delay = 0.5;
                temp7.RelativeTo = Fuse.TranslationModes.Size;
                temp7.Easing = Fuse.Animations.Easing.CircularInOut;
                temp8.SourceLineNumber = 161;
                temp8.SourceFileName = "Pages/SchedulePage.ux";
                temp8.Animators.Add(temp9);
                temp8.Animators.Add(temp10);
                temp9.Y = 1f;
                temp9.Duration = 0.3;
                temp9.RelativeTo = Fuse.Triggers.LayoutTransition.PositionChange;
                temp9.Easing = Fuse.Animations.Easing.CircularInOut;
                temp10.Y = 1f;
                temp10.Duration = 0.3;
                temp10.RelativeTo = Fuse.Triggers.LayoutTransition.ResizeSizeChange;
                temp10.Easing = Fuse.Animations.Easing.CircularInOut;
                temp11.SourceLineNumber = 166;
                temp11.SourceFileName = "Pages/SchedulePage.ux";
                header.Name = __selector4;
                header.SourceLineNumber = 168;
                header.SourceFileName = "Pages/SchedulePage.ux";
                header.Bindings.Add(temp12);
                header.Bindings.Add(temp13);
                temp1.SourceLineNumber = 168;
                temp1.SourceFileName = "Pages/SchedulePage.ux";
                temp3.SourceLineNumber = 168;
                temp3.SourceFileName = "Pages/SchedulePage.ux";
                temp2.SourceLineNumber = 168;
                temp2.SourceFileName = "Pages/SchedulePage.ux";
                temp.SourceLineNumber = 170;
                temp.SourceFileName = "Pages/SchedulePage.ux";
                temp.Templates.Add(item);
                temp.Bindings.Add(temp14);
                temp4.SourceLineNumber = 170;
                temp4.SourceFileName = "Pages/SchedulePage.ux";
                temp5.SourceLineNumber = 156;
                temp5.SourceFileName = "Pages/SchedulePage.ux";
                __self.Nodes.Add(dayContainer);
                __self.Bindings.Add(temp15);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Text";
            static global::Uno.UX.Selector __selector1 = "Color";
            static global::Uno.UX.Selector __selector2 = "Items";
            static global::Uno.UX.Selector __selector3 = "dayContainer";
            static global::Uno.UX.Selector __selector4 = "header";
        }
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
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
            var temp2 = new global::Fuse.Reactive.Resource("Alive.PrimaryBackgroundColor");
            var temp1 = new global::Fuse.Reactive.Each();
            temp1_Items_inst = new v2_FuseReactiveEach_Items_Property(temp1, __selector1);
            var temp3 = new global::Fuse.Reactive.Data("schedulesByDay");
            var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp5 = new global::Alive.MediaScroller(temp);
            var TopBar = new Template(this, this);
            var temp6 = new global::Alive.DarkTheme();
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var MediaOverlay = new Template1(this, this);
            var temp8 = new Template2(this, this);
            var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/SchedulePage.ux";
            temp4.Code = "\n\tvar Observable = require('FuseJS/Observable');\n\n\tfunction ScheduleDay(day, color, items) {\n\t\tvar self = this;\n\n\t\tself.day = day;\n\t\tself.color = color;\n\t\tself.items = Observable(items).expand();\n\t\tself.removeScheduleItem = function(arg) {\n\t\t\tself.items.remove(arg.data);\n\t\t}\n\t}\n\n\texports.pushDetails = function() {\n\t\trouter.push(\"details\");\n\t}\n\n\texports.schedulesByDay = Observable(\n\t\tnew ScheduleDay(\"Today\", \"Alive.Red\", [\n\t\t\t{\n\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '19:00',\n\t\t\t\tcategory: 'Meetup',\n\t\t\t\tcategoryColor: 'Alive.Red'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Katakombe, Scene blue\",\n\t\t\t\tday: \"Tomorrow\",\n\t\t\t\ttime: '22:00',\n\t\t\t\tcategory: 'Concert',\n\t\t\t\tcategoryColor: 'Alive.Blue'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t]),\n\t\tnew ScheduleDay(\"Tomorrow\", \"Alive.Orange\", [\n\t\t\t{\n\t\t\t\ttitle: \"Katakombe, Scene blue\",\n\t\t\t\tday: \"Tomorrow\",\n\t\t\t\ttime: '22:00',\n\t\t\t\tcategory: 'Concert',\n\t\t\t\tcategoryColor: 'Alive.Blue'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '19:00',\n\t\t\t\tcategory: 'Meetup',\n\t\t\t\tcategoryColor: 'Alive.Red'\n\t\t\t},\n\t\t]),\n\t\tnew ScheduleDay(\"Friday\", \"Alive.Blue\", [\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Eliza Carrington - Work smarter, better\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '14:00',\n\t\t\t\tcategory: 'Talk',\n\t\t\t\tcategoryColor: 'Alive.Orange'\n\t\t\t},\n\t\t\t{\n\t\t\t\ttitle: \"Meet 'n greet fellow Dribbblers\",\n\t\t\t\tday: \"Friday\",\n\t\t\t\ttime: '19:00',\n\t\t\t\tcategory: 'Meetup',\n\t\t\t\tcategoryColor: 'Alive.Red'\n\t\t\t},\n\t\t])\n\t);\n\t\n\t";
            temp4.LineNumber = 4;
            temp4.FileName = "Pages/SchedulePage.ux";
            temp4.SourceLineNumber = 4;
            temp4.SourceFileName = "Pages/SchedulePage.ux";
            temp5.TopBarColor = FuseUXKitsAlive_ColorPalette_res.AliveDarkPrimaryBackgroundColor;
            temp5.SourceLineNumber = 96;
            temp5.SourceFileName = "Pages/SchedulePage.ux";
            temp5.SubtreeNodes.Add(temp1);
            temp5.Templates.Add(TopBar);
            temp5.Templates.Add(MediaOverlay);
            temp.SourceLineNumber = 102;
            temp.SourceFileName = "Pages/SchedulePage.ux";
            temp.Children.Add(temp6);
            temp.Bindings.Add(temp7);
            temp6.SourceLineNumber = 103;
            temp6.SourceFileName = "Pages/SchedulePage.ux";
            temp2.SourceLineNumber = 102;
            temp2.SourceFileName = "Pages/SchedulePage.ux";
            temp1.SourceLineNumber = 155;
            temp1.SourceFileName = "Pages/SchedulePage.ux";
            temp1.Templates.Add(temp8);
            temp1.Bindings.Add(temp9);
            temp3.SourceLineNumber = 155;
            temp3.SourceFileName = "Pages/SchedulePage.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(drawer);
            __g_nametable.Objects.Add(router);
            this.Children.Add(temp4);
            this.Children.Add(temp5);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "Items";
    }
}
