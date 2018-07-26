namespace Eliot
{
    [Uno.Compiler.UxGenerated]
    public partial class GridElement: Fuse.Controls.Rectangle
    {
        static GridElement()
        {
        }
        [global::Uno.UX.UXConstructor]
        public GridElement()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Fuse.Drawing.LinearGradient();
            var temp1 = new global::Fuse.Drawing.GradientStop();
            var temp2 = new global::Fuse.Drawing.GradientStop();
            this.CornerRadius = float4(15f, 15f, 15f, 15f);
            this.Width = new Uno.UX.Size(105f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(105f, Uno.UX.Unit.Unspecified);
            this.Margin = float4(10f, 5f, 10f, 5f);
            this.SourceLineNumber = 65;
            this.SourceFileName = "Pages/SchedulePage.ux";
            temp.Stops.Add(temp1);
            temp.Stops.Add(temp2);
            temp1.Offset = 0f;
            temp1.Color = FuseUXKitsAlive_ColorPalette_res.AliveGradient3StartColor;
            temp2.Offset = 1f;
            temp2.Color = FuseUXKitsAlive_ColorPalette_res.AliveGradient3EndColor;
            this.Fills.Add(temp);
        }
    }
}
