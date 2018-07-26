namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class Light: Alive.Page
    {
        readonly Fuse.Navigation.Router router;
        internal global::Fuse.Reactive.EventBinding temp_eb6;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "router",
            "temp_eb6"
        };
        static Light()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Light(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
        {
            this.router = router;
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp = new global::Fuse.Reactive.Data("goBack");
            var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp2 = new global::Alive.BackButton();
            temp_eb6 = new global::Fuse.Reactive.EventBinding(temp);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/Light.ux";
            temp1.Code = "\n\t\texports.goBack = function() {\n\t\t\trouter.goBack();\n\t\t}\n        function goBack(){\n            router.push(\"program\")\n        }\n\t";
            temp1.LineNumber = 3;
            temp1.FileName = "Pages/Light.ux";
            temp1.SourceLineNumber = 3;
            temp1.SourceFileName = "Pages/Light.ux";
            temp2.Alignment = Fuse.Elements.Alignment.Left;
            temp2.X = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
            temp2.Y = new Uno.UX.Size(25f, Uno.UX.Unit.Unspecified);
            temp2.SourceLineNumber = 11;
            temp2.SourceFileName = "Pages/Light.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Left);
            global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb6.OnEvent);
            temp2.Bindings.Add(temp_eb6);
            temp.SourceLineNumber = 11;
            temp.SourceFileName = "Pages/Light.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(router);
            __g_nametable.Objects.Add(temp_eb6);
            this.Children.Add(temp1);
            this.Children.Add(temp2);
        }
    }
}
