namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class SelectCategoryPage: Alive.Page
    {
        readonly Fuse.Navigation.Router router;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "router"
        };
        static SelectCategoryPage()
        {
        }
        [global::Uno.UX.UXConstructor]
        public SelectCategoryPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
        {
            this.router = router;
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp1 = new global::Fuse.Controls.DockPanel();
            var temp2 = new global::Alive.NavBar();
            var temp3 = new global::Alive.NavBarTitle();
            var temp4 = new global::Alive.TabPageControl();
            var temp5 = new global::Alive.PartialTabPage();
            var temp6 = new global::Alive.ExampleApp.CategoryPreviewCard();
            var temp7 = new global::Alive.PartialTabPage();
            var temp8 = new global::Alive.ExampleApp.CategoryPreviewCard();
            var temp9 = new global::Alive.PartialTabPage();
            var temp10 = new global::Alive.ExampleApp.CategoryPreviewCard();
            var temp11 = new global::Alive.PartialTabPage();
            var temp12 = new global::Alive.ExampleApp.CategoryPreviewCard();
            var temp13 = new global::Alive.PartialTabPage();
            var temp14 = new global::Alive.ExampleApp.CategoryPreviewCard();
            var temp15 = new global::Alive.PartialTabPage();
            var temp16 = new global::Alive.ExampleApp.CategoryPreviewCard();
            temp.Code = "\n\t\texports.pushProgram = function() {\n\t\t\trouter.push(\"program\");\n\t\t}\n\t";
            temp.LineNumber = 4;
            temp.FileName = "Pages/SelectCategoryPage.ux";
            temp1.Children.Add(temp2);
            temp1.Children.Add(temp4);
            global::Fuse.Controls.DockPanel.SetDock(temp2, Fuse.Layouts.Dock.Top);
            temp2.SubtreeNodes.Add(temp3);
            temp3.Value = "Select category";
            temp3.Alignment = Fuse.Elements.Alignment.Center;
            temp4.SubtreeNodes.Add(temp5);
            temp4.SubtreeNodes.Add(temp7);
            temp4.SubtreeNodes.Add(temp9);
            temp4.SubtreeNodes.Add(temp11);
            temp4.SubtreeNodes.Add(temp13);
            temp4.SubtreeNodes.Add(temp15);
            temp5.Label = "Talks";
            temp5.Children.Add(temp6);
            temp7.Label = "Music";
            temp7.Children.Add(temp8);
            temp9.Label = "Exhibitions";
            temp9.Children.Add(temp10);
            temp11.Label = "Workshops";
            temp11.Children.Add(temp12);
            temp13.Label = "Comedy";
            temp13.Children.Add(temp14);
            temp15.Label = "Meetups";
            temp15.Children.Add(temp16);
            __g_nametable.This = this;
            __g_nametable.Objects.Add(router);
            this.Children.Add(temp);
            this.Children.Add(temp1);
        }
    }
}
