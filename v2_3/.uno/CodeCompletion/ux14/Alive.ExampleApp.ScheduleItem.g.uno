namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class ScheduleItem: Fuse.Controls.Grid
    {
        string _field_Time;
        [global::Uno.UX.UXOriginSetter("SetTime")]
        public string Time
        {
            get { return _field_Time; }
            set { SetTime(value, null); }
        }
        public void SetTime(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Time)
            {
                _field_Time = value;
                OnPropertyChanged("Time", origin);
            }
        }
        string _field_Category;
        [global::Uno.UX.UXOriginSetter("SetCategory")]
        public string Category
        {
            get { return _field_Category; }
            set { SetCategory(value, null); }
        }
        public void SetCategory(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Category)
            {
                _field_Category = value;
                OnPropertyChanged("Category", origin);
            }
        }
        string _field_Title;
        [global::Uno.UX.UXOriginSetter("SetTitle")]
        public string Title
        {
            get { return _field_Title; }
            set { SetTitle(value, null); }
        }
        public void SetTitle(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Title)
            {
                _field_Title = value;
                OnPropertyChanged("Title", origin);
            }
        }
        float4 _field_CategoryColor;
        [global::Uno.UX.UXOriginSetter("SetCategoryColor")]
        public float4 CategoryColor
        {
            get { return _field_CategoryColor; }
            set { SetCategoryColor(value, null); }
        }
        public void SetCategoryColor(float4 value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_CategoryColor)
            {
                _field_CategoryColor = value;
                OnPropertyChanged("CategoryColor", origin);
            }
        }
        global::Uno.UX.Property<float4> temp_StrokeColor_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        static ScheduleItem()
        {
        }
        [global::Uno.UX.UXConstructor]
        public ScheduleItem()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp3 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Alive.Donut();
            temp_StrokeColor_inst = new v2_FuseControlsShape_StrokeColor_Property(temp, __selector0);
            var temp4 = new global::Fuse.Reactive.Property(temp3, v2_accessor_Alive_ExampleApp_ScheduleItem_CategoryColor.Singleton);
            var temp5 = new global::Fuse.Reactive.Constant(this);
            var temp6 = new global::Fuse.Reactive.Property(temp5, v2_accessor_Alive_ExampleApp_ScheduleItem_Time.Singleton);
            var temp7 = ", ";
            var temp8 = new global::Fuse.Reactive.Constant(temp7);
            var temp9 = new global::Fuse.Reactive.Constant(this);
            var temp10 = new global::Fuse.Reactive.Property(temp9, v2_accessor_Alive_ExampleApp_ScheduleItem_Category.Singleton);
            var temp11 = new global::Fuse.Reactive.Add(temp8, temp10);
            var temp1 = new global::Alive.Body();
            temp1_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp12 = new global::Fuse.Reactive.Add(temp6, temp11);
            var temp13 = new global::Fuse.Reactive.Constant(this);
            var temp2 = new global::Alive.Body();
            temp2_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp2, __selector1);
            var temp14 = new global::Fuse.Reactive.Property(temp13, v2_accessor_Alive_ExampleApp_ScheduleItem_Title.Singleton);
            var temp15 = new global::Fuse.Reactive.DataBinding(temp_StrokeColor_inst, temp4, Fuse.Reactive.BindingMode.Read);
            var temp16 = new global::Fuse.Controls.Grid();
            var temp17 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp12, Fuse.Reactive.BindingMode.Default);
            var temp18 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp14, Fuse.Reactive.BindingMode.Read);
            this.Columns = "auto,1*";
            this.Margin = float4(20f, 25f, 20f, 20f);
            temp.Alignment = Fuse.Elements.Alignment.TopLeft;
            temp.Margin = float4(0f, 3f, 13f, 0f);
            temp.Bindings.Add(temp15);
            temp16.RowCount = 2;
            temp16.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
            temp16.Children.Add(temp1);
            temp16.Children.Add(temp2);
            temp1.FontSize = 13f;
            temp1.Color = FuseUXKitsAlive_ColorPalette_res.AliveGray200;
            temp1.Margin = float4(0f, 0f, 0f, 10f);
            temp1.Bindings.Add(temp17);
            temp2.FontSize = 15f;
            temp2.Bindings.Add(temp18);
            this.Children.Add(temp);
            this.Children.Add(temp16);
        }
        static global::Uno.UX.Selector __selector0 = "StrokeColor";
        static global::Uno.UX.Selector __selector1 = "Value";
    }
}
