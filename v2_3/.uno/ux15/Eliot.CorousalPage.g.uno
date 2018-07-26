namespace Eliot
{
    [Uno.Compiler.UxGenerated]
    public partial class CorousalPage: Alive.CarouselPage
    {
        static CorousalPage()
        {
        }
        [global::Uno.UX.UXConstructor]
        public CorousalPage()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Alive.ThemedCard();
            var temp1 = new global::Fuse.Controls.StackPanel();
            var temp2 = new global::Fuse.Controls.StackPanel();
            var temp3 = new global::Fuse.Controls.Rectangle();
            var temp4 = new global::Fuse.Drawing.ImageFill();
            var temp5 = new global::Alive.Body();
            var temp6 = new global::Fuse.Drawing.LinearGradient();
            var temp7 = new global::Fuse.Drawing.GradientStop();
            var temp8 = new global::Fuse.Drawing.GradientStop();
            this.SourceLineNumber = 71;
            this.SourceFileName = "Pages/SchedulePage.ux";
            temp.SourceLineNumber = 72;
            temp.SourceFileName = "Pages/SchedulePage.ux";
            temp.Fills.Add(temp6);
            temp.Children.Add(temp1);
            temp1.ItemSpacing = 30f;
            temp1.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp1.Alignment = Fuse.Elements.Alignment.CenterLeft;
            temp1.SourceLineNumber = 74;
            temp1.SourceFileName = "Pages/SchedulePage.ux";
            temp1.Children.Add(temp2);
            temp2.Orientation = Fuse.Layouts.Orientation.Horizontal;
            temp2.Y = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            temp2.SourceLineNumber = 75;
            temp2.SourceFileName = "Pages/SchedulePage.ux";
            temp2.Children.Add(temp3);
            temp2.Children.Add(temp5);
            temp3.CornerRadius = float4(25f, 25f, 25f, 25f);
            temp3.Width = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
            temp3.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
            temp3.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp3.Margin = float4(0f, 0f, 0f, 0f);
            temp3.Padding = float4(0f, 0f, 0f, 0f);
            temp3.X = new Uno.UX.Size(135f, Uno.UX.Unit.Unspecified);
            temp3.Y = new Uno.UX.Size(-40f, Uno.UX.Unit.Unspecified);
            temp3.SourceLineNumber = 76;
            temp3.SourceFileName = "Pages/SchedulePage.ux";
            temp3.Fills.Add(temp4);
            temp4.StretchMode = Fuse.Elements.StretchMode.Fill;
            temp4.File = new global::Uno.UX.BundleFileSource(import("../../Assets/bedroom_2.png"));
            temp5.Value = "BEDROOM";
            temp5.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
            temp5.FontSize = 25f;
            temp5.TextAlignment = Fuse.Controls.TextAlignment.Center;
            temp5.Alignment = Fuse.Elements.Alignment.CenterRight;
            temp5.Margin = float4(20f, 0f, 0f, 0f);
            temp5.X = new Uno.UX.Size(35f, Uno.UX.Unit.Unspecified);
            temp5.Y = new Uno.UX.Size(20f, Uno.UX.Unit.Unspecified);
            temp5.SourceLineNumber = 79;
            temp5.SourceFileName = "Pages/SchedulePage.ux";
            temp5.Font = global::Alive.ExampleApp.SchedulePage.oswald;
            temp6.Stops.Add(temp7);
            temp6.Stops.Add(temp8);
            temp7.Offset = 0f;
            temp7.Color = FuseUXKitsAlive_ColorPalette_res.AliveGradient3StartColor;
            temp8.Offset = 1f;
            temp8.Color = FuseUXKitsAlive_ColorPalette_res.AliveGradient3EndColor;
            this.Children.Add(temp);
        }
    }
}
