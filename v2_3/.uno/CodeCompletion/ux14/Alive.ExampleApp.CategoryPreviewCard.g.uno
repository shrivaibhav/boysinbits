namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class CategoryPreviewCard: Alive.Card
    {
        internal global::Fuse.Reactive.EventBinding temp_eb8;
        static CategoryPreviewCard()
        {
        }
        [global::Uno.UX.UXConstructor]
        public CategoryPreviewCard()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Reactive.Data("pushProgram");
            var temp1 = new global::Fuse.Controls.StackPanel();
            var temp2 = new global::Alive.CardMedia();
            var temp3 = new global::Alive.ImageFill();
            var temp4 = new global::Alive.CardBody();
            var temp5 = new global::Alive.Title();
            var temp6 = new global::Alive.Body();
            temp_eb8 = new global::Fuse.Reactive.EventBinding(temp);
            this.Alignment = Fuse.Elements.Alignment.Top;
            this.Margin = float4(8f, 10f, 8f, 10f);
            global::Fuse.Gestures.Clicked.AddHandler(this, temp_eb8.OnEvent);
            temp1.Children.Add(temp2);
            temp1.Children.Add(temp4);
            temp2.Height = new Uno.UX.Size(190f, Uno.UX.Unit.Unspecified);
            temp2.Fills.Add(temp3);
            temp3.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/event2.jpg"));
            temp4.Children.Add(temp5);
            temp4.Children.Add(temp6);
            temp5.Value = "Over 50 speakers";
            temp6.Value = "With a diverse selection of interesting topics ranging from design to artificial intelligence, we're confident there's a talk for you.";
            this.Children.Add(temp1);
            this.Bindings.Add(temp_eb8);
        }
    }
}
