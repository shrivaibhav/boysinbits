namespace Eliot
{
    [Uno.Compiler.UxGenerated]
    public partial class Bubble: Fuse.Controls.Circle
    {
        static Bubble()
        {
        }
        [global::Uno.UX.UXConstructor]
        public Bubble()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            this.Color = float4(0f, 0f, 0f, 0f);
            this.Width = new Uno.UX.Size(48f, Uno.UX.Unit.Unspecified);
            this.Height = new Uno.UX.Size(48f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 98;
            this.SourceFileName = "Pages/SchedulePage.ux";
        }
    }
}
