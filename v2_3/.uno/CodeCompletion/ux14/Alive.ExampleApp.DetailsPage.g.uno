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
                __self.Name = __selector0;
                temp2.Margin = float4(20f, 20f, 20f, 20f);
                temp2.Children.Add(temp3);
                temp3.X = new Uno.UX.Size(5f, Uno.UX.Unit.Unspecified);
                temp3.Y = new Uno.UX.Size(10f, Uno.UX.Unit.Unspecified);
                global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Left);
                global::Fuse.Gestures.Clicked.AddHandler(temp3, temp_eb2.OnEvent);
                temp3.Bindings.Add(temp_eb2);
                __self.Children.Add(temp1);
                __self.Children.Add(temp2);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "TopBar";
        }
        global::Uno.UX.Property<float4> temp_TopBarColor_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "router"
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
            var temp2 = new global::Fuse.Reactive.Resource("Alive.AccentColor");
            var temp3 = 0.7;
            var temp4 = new global::Fuse.Reactive.Constant(temp3);
            var temp = new global::Alive.MediaScroller(temp1);
            temp_TopBarColor_inst = new v2_AliveMediaScroller_TopBarColor_Property(temp, __selector0);
            var temp5 = new global::Alive.WithOpacityFunction(temp2, temp4);
            var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var TopBar = new Template(this, this);
            var temp7 = new global::Fuse.Reactive.DataBinding(temp_TopBarColor_inst, temp5, Fuse.Reactive.BindingMode.Default);
            temp6.Code = "\n\t\texports.goBack = function() {\n\t\t\trouter.goBack();\n\t\t}\n\t";
            temp6.LineNumber = 3;
            temp6.FileName = "Pages/DetailsPage.ux";
            temp.Templates.Add(TopBar);
            temp.Bindings.Add(temp7);
            temp1.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            temp1.Height = new Uno.UX.Size(3000f, Uno.UX.Unit.Unspecified);
            temp1.Layer = Fuse.Layer.Background;
            temp1.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/1.jpg"));
            __g_nametable.This = this;
            __g_nametable.Objects.Add(router);
            this.Children.Add(temp6);
            this.Children.Add(temp);
        }
        static global::Uno.UX.Selector __selector0 = "TopBarColor";
    }
}
