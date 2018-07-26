namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class DetailsPage: Alive.Page
    {
        readonly Fuse.Navigation.Router router;
        [Uno.Compiler.UxGenerated]
        public partial class Template: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.DetailsPage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.DetailsPage __parentInstance;
            public Template(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance): base("TopBar", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            internal global::Fuse.Reactive.EventBinding temp_eb2;
            static Template()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.StackPanel();
                var temp = new global::Fuse.Reactive.Data("goBack");
                var temp1 = new global::Fuse.Controls.StatusBarBackground();
                var temp2 = new global::Fuse.Controls.DockPanel();
                var temp3 = new global::Alive.BackButton();
                temp_eb2 = new global::Fuse.Reactive.EventBinding(temp);
                var temp4 = new global::Alive.IconLabel();
                __self.Name = __selector0;
                __self.SourceLineNumber = 10;
                __self.SourceFileName = "Pages/DetailsPage.ux";
                temp1.SourceLineNumber = 11;
                temp1.SourceFileName = "Pages/DetailsPage.ux";
                temp2.Margin = float4(20f, 20f, 20f, 20f);
                temp2.SourceLineNumber = 12;
                temp2.SourceFileName = "Pages/DetailsPage.ux";
                temp2.Children.Add(temp3);
                temp2.Children.Add(temp4);
                temp3.SourceLineNumber = 13;
                temp3.SourceFileName = "Pages/DetailsPage.ux";
                global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Left);
                global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb2.OnEvent);
                temp3.Bindings.Add(temp_eb2);
                temp.SourceLineNumber = 13;
                temp.SourceFileName = "Pages/DetailsPage.ux";
                temp4.Text = "Talk";
                temp4.Icon = "\uEAF8";
                temp4.SourceLineNumber = 14;
                temp4.SourceFileName = "Pages/DetailsPage.ux";
                global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Right);
                __self.Children.Add(temp1);
                __self.Children.Add(temp2);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "TopBar";
        }
        [Uno.Compiler.UxGenerated]
        public partial class Template1: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.DetailsPage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.DetailsPage __parentInstance;
            public Template1(Alive.ExampleApp.DetailsPage parent, Alive.ExampleApp.DetailsPage parentInstance): base("BottomBar", false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            static Template1()
            {
            }
            public override object New()
            {
                var __self = new global::Alive.ActionButton();
                __self.Alignment = Fuse.Elements.Alignment.BottomRight;
                __self.Margin = float4(0f, 0f, 30f, 0f);
                __self.Anchor = new Uno.UX.Size2(new Uno.UX.Size(100f, Uno.UX.Unit.Percent), new Uno.UX.Size(50f, Uno.UX.Unit.Percent));
                __self.Name = __selector0;
                __self.SourceLineNumber = 18;
                __self.SourceFileName = "Pages/DetailsPage.ux";
                global::Fuse.Controls.DockPanel.SetDock(__self, Fuse.Layouts.Dock.Right);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "BottomBar";
        }
        global::Uno.UX.Property<float> tabBarShadow_Size_inst;
        global::Uno.UX.Property<float4> temp_TopBarColor_inst;
        internal global::Alive.StickyHeader sticky;
        internal global::Alive.TabBar tabBar;
        internal global::Fuse.Controls.Shadow tabBarShadow;
        internal global::Fuse.Controls.PageControl pc;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "router",
            "sticky",
            "tabBar",
            "tabBarShadow",
            "pc"
        };
        static DetailsPage()
        {
        }
        [global::Uno.UX.UXConstructor]
        public DetailsPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
        {
            this.router = router;
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp1 = new global::Fuse.Controls.Image();
            pc = new global::Fuse.Controls.PageControl();
            tabBar = new global::Alive.TabBar(pc);
            tabBarShadow = new global::Fuse.Controls.Shadow();
            tabBarShadow_Size_inst = new v2_FuseControlsShadow_Size_Property(tabBarShadow, __selector0);
            var temp2 = new global::Fuse.Reactive.Resource("Alive.AccentColor");
            var temp3 = 0.7;
            var temp4 = new global::Fuse.Reactive.Constant(temp3);
            var temp = new global::Alive.MediaScroller(temp1);
            temp_TopBarColor_inst = new v2_AliveMediaScroller_TopBarColor_Property(temp, __selector1);
            var temp5 = new global::Alive.WithOpacityFunction(temp2, temp4);
            var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var TopBar = new Template(this, this);
            var BottomBar = new Template1(this, this);
            var temp7 = new global::Alive.ExampleApp.TitlePanel();
            sticky = new global::Alive.StickyHeader(tabBar);
            var temp8 = new global::Alive.StickingAnimation();
            var temp9 = new global::Fuse.Animations.Change<float>(tabBarShadow_Size_inst);
            var temp10 = new global::Alive.TabPage();
            var temp11 = new global::Fuse.Controls.StackPanel();
            var temp12 = new global::Fuse.Controls.WrapPanel();
            var temp13 = new global::Alive.IconLabel();
            var temp14 = new global::Alive.IconLabel();
            var temp15 = new global::Alive.Body();
            var temp16 = new global::Alive.TabPage();
            var temp17 = new global::Alive.Body();
            var temp18 = new global::Alive.TabPage();
            var temp19 = new global::Alive.Body();
            var temp20 = new global::Fuse.Reactive.DataBinding(temp_TopBarColor_inst, temp5, Fuse.Reactive.BindingMode.Default);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/DetailsPage.ux";
            temp6.Code = "\n\t\texports.goBack = function() {\n\t\t\trouter.goBack();\n\t\t}\n\t";
            temp6.LineNumber = 3;
            temp6.FileName = "Pages/DetailsPage.ux";
            temp6.SourceLineNumber = 3;
            temp6.SourceFileName = "Pages/DetailsPage.ux";
            temp.SourceLineNumber = 8;
            temp.SourceFileName = "Pages/DetailsPage.ux";
            temp.SubtreeNodes.Add(temp7);
            temp.SubtreeNodes.Add(sticky);
            temp.Templates.Add(TopBar);
            temp.Templates.Add(BottomBar);
            temp.Bindings.Add(temp20);
            temp1.SourceLineNumber = 9;
            temp1.SourceFileName = "Pages/DetailsPage.ux";
            temp1.File = new global::Uno.UX.BundleFileSource(import("G:/Eliot v2/v2/Assets/event6.jpg"));
            temp7.SourceLineNumber = 20;
            temp7.SourceFileName = "Pages/DetailsPage.ux";
            sticky.Name = __selector2;
            sticky.SourceLineNumber = 22;
            sticky.SourceFileName = "Pages/DetailsPage.ux";
            sticky.Children.Add(temp8);
            sticky.Children.Add(pc);
            temp8.SourceLineNumber = 23;
            temp8.SourceFileName = "Pages/DetailsPage.ux";
            temp8.Animators.Add(temp9);
            temp9.Value = 5f;
            tabBar.Name = __selector3;
            tabBar.SourceLineNumber = 26;
            tabBar.SourceFileName = "Pages/DetailsPage.ux";
            tabBar.Children.Add(tabBarShadow);
            tabBarShadow.Distance = 1f;
            tabBarShadow.Size = 2f;
            tabBarShadow.Color = float4(0f, 0f, 0f, 0.06666667f);
            tabBarShadow.Name = __selector4;
            tabBarShadow.SourceLineNumber = 27;
            tabBarShadow.SourceFileName = "Pages/DetailsPage.ux";
            pc.InactiveState = Fuse.Controls.NavigationControlInactiveState.Unchanged;
            pc.Name = __selector5;
            pc.SourceLineNumber = 29;
            pc.SourceFileName = "Pages/DetailsPage.ux";
            pc.Children.Add(temp10);
            pc.Children.Add(temp16);
            pc.Children.Add(temp18);
            temp10.Label = "Info";
            temp10.SourceLineNumber = 30;
            temp10.SourceFileName = "Pages/DetailsPage.ux";
            temp10.Children.Add(temp11);
            temp11.Margin = float4(20f, 20f, 20f, 20f);
            temp11.SourceLineNumber = 31;
            temp11.SourceFileName = "Pages/DetailsPage.ux";
            temp11.Children.Add(temp12);
            temp11.Children.Add(temp15);
            temp12.Margin = float4(0f, 10f, 0f, 10f);
            temp12.SourceLineNumber = 32;
            temp12.SourceFileName = "Pages/DetailsPage.ux";
            temp12.Children.Add(temp13);
            temp12.Children.Add(temp14);
            temp13.Text = "Today - 16:00";
            temp13.IconSize = 14;
            temp13.Icon = "\uEC88";
            temp13.Margin = float4(0f, 0f, 20f, 0f);
            temp13.SourceLineNumber = 33;
            temp13.SourceFileName = "Pages/DetailsPage.ux";
            temp14.Text = "Building C1, Room: Root";
            temp14.IconSize = 14;
            temp14.Icon = "\uEC80";
            temp14.SourceLineNumber = 34;
            temp14.SourceFileName = "Pages/DetailsPage.ux";
            temp15.Value = "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n\nVivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n\nVivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.";
            temp15.SourceLineNumber = 36;
            temp15.SourceFileName = "Pages/DetailsPage.ux";
            temp16.Label = "Biography";
            temp16.SourceLineNumber = 45;
            temp16.SourceFileName = "Pages/DetailsPage.ux";
            temp16.Children.Add(temp17);
            temp17.Value = "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n\nVivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n\nVivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.";
            temp17.Margin = float4(20f, 20f, 20f, 20f);
            temp17.SourceLineNumber = 46;
            temp17.SourceFileName = "Pages/DetailsPage.ux";
            temp18.Label = "Map";
            temp18.SourceLineNumber = 54;
            temp18.SourceFileName = "Pages/DetailsPage.ux";
            temp18.Children.Add(temp19);
            temp19.Value = "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n\nVivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.\n\nVivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus. Cras justo odio, dapibus ac facilisis in, egestas eget quam. Etiam porta sem malesuada magna mollis euismod. Maecenas faucibus mollis interdum. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.";
            temp19.Margin = float4(20f, 20f, 20f, 20f);
            temp19.SourceLineNumber = 55;
            temp19.SourceFileName = "Pages/DetailsPage.ux";
            temp5.SourceLineNumber = 8;
            temp5.SourceFileName = "Pages/DetailsPage.ux";
            temp2.SourceLineNumber = 8;
            temp2.SourceFileName = "Pages/DetailsPage.ux";
            temp4.SourceLineNumber = 8;
            temp4.SourceFileName = "Pages/DetailsPage.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(router);
            __g_nametable.Objects.Add(sticky);
            __g_nametable.Objects.Add(tabBar);
            __g_nametable.Objects.Add(tabBarShadow);
            __g_nametable.Objects.Add(pc);
            this.Children.Add(temp6);
            this.Children.Add(temp);
        }
        static global::Uno.UX.Selector __selector0 = "Size";
        static global::Uno.UX.Selector __selector1 = "TopBarColor";
        static global::Uno.UX.Selector __selector2 = "sticky";
        static global::Uno.UX.Selector __selector3 = "tabBar";
        static global::Uno.UX.Selector __selector4 = "tabBarShadow";
        static global::Uno.UX.Selector __selector5 = "pc";
    }
}
