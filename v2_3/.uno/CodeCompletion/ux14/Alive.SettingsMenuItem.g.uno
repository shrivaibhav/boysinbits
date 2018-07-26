namespace Alive
{
    [Uno.Compiler.UxGenerated]
    public partial class SettingsMenuItem: Alive.Card
    {
        string _field_Label;
        [global::Uno.UX.UXOriginSetter("SetLabel")]
        public string Label
        {
            get { return _field_Label; }
            set { SetLabel(value, null); }
        }
        public void SetLabel(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Label)
            {
                _field_Label = value;
                OnPropertyChanged("Label", origin);
            }
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        static SettingsMenuItem()
        {
        }
        [global::Uno.UX.UXConstructor]
        public SettingsMenuItem()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Alive.ButtonText();
            temp_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, v2_accessor_Alive_SettingsMenuItem_Label.Singleton);
            var temp3 = new global::Fuse.Layouts.StackLayout();
            var temp4 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
            this.Padding = float4(20f, 20f, 20f, 20f);
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Margin = float4(0f, 15f, 0f, 15f);
            temp.Opacity = 0.5f;
            temp.Bindings.Add(temp4);
            this.Layout = temp3;
            this.Children.Add(temp);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
    }
}
