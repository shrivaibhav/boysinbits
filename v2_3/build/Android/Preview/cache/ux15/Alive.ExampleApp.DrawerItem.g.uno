namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class DrawerItem: Fuse.Controls.Panel
    {
        string _field_Text;
        [global::Uno.UX.UXOriginSetter("SetText")]
        public string Text
        {
            get { return _field_Text; }
            set { SetText(value, null); }
        }
        public void SetText(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Text)
            {
                _field_Text = value;
                OnPropertyChanged("Text", origin);
            }
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        static DrawerItem()
        {
        }
        [global::Uno.UX.UXConstructor]
        public DrawerItem()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Alive.BodyBold();
            temp_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, v2_accessor_Alive_ExampleApp_DrawerItem_Text.Singleton);
            var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
            this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
            this.SourceLineNumber = 23;
            this.SourceFileName = "MainView.ux";
            temp.Margin = float4(50f, 20f, 0f, 20f);
            temp.SourceLineNumber = 25;
            temp.SourceFileName = "MainView.ux";
            temp.Bindings.Add(temp3);
            temp2.SourceLineNumber = 25;
            temp2.SourceFileName = "MainView.ux";
            temp1.SourceLineNumber = 25;
            temp1.SourceFileName = "MainView.ux";
            this.Children.Add(temp);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
}
