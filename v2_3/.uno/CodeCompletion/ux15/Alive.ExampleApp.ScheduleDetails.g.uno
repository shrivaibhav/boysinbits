namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class ScheduleDetails: Fuse.Controls.Panel
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
        string _field_Location;
        [global::Uno.UX.UXOriginSetter("SetLocation")]
        public string Location
        {
            get { return _field_Location; }
            set { SetLocation(value, null); }
        }
        public void SetLocation(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Location)
            {
                _field_Location = value;
                OnPropertyChanged("Location", origin);
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
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<string> temp1_Value_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<string> temp3_Text_inst;
        static ScheduleDetails()
        {
        }
        [global::Uno.UX.UXConstructor]
        public ScheduleDetails()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp4 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Controls.Rectangle();
            temp_Color_inst = new v2_FuseControlsShape_Color_Property(temp, __selector0);
            var temp5 = new global::Fuse.Reactive.Property(temp4, v2_accessor_Alive_ExampleApp_ScheduleDetails_CategoryColor.Singleton);
            var temp6 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::Alive.Title();
            temp1_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp1, __selector1);
            var temp7 = new global::Fuse.Reactive.Property(temp6, v2_accessor_Alive_ExampleApp_ScheduleDetails_Title.Singleton);
            var temp8 = new global::Fuse.Reactive.Constant(this);
            var temp2 = new global::Alive.Body();
            temp2_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp2, __selector1);
            var temp9 = new global::Fuse.Reactive.Property(temp8, v2_accessor_Alive_ExampleApp_ScheduleDetails_Category.Singleton);
            var temp10 = new global::Fuse.Reactive.Constant(this);
            var temp3 = new global::Alive.IconLabel();
            temp3_Text_inst = new v2_AliveIconLabel_Text_Property(temp3, __selector2);
            var temp11 = new global::Fuse.Reactive.Property(temp10, v2_accessor_Alive_ExampleApp_ScheduleDetails_Time.Singleton);
            var temp12 = new global::Fuse.Controls.ScrollView();
            var temp13 = new global::Fuse.Controls.StackPanel();
            var temp14 = new global::Fuse.Controls.Panel();
            var temp15 = new global::Alive.DarkTheme();
            var temp16 = new global::Fuse.Controls.StackPanel();
            var temp17 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp5, Fuse.Reactive.BindingMode.Read);
            var temp18 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp7, Fuse.Reactive.BindingMode.Read);
            var temp19 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp9, Fuse.Reactive.BindingMode.Read);
            var temp20 = new global::Fuse.Controls.Image();
            var temp21 = new global::Fuse.Controls.WrapPanel();
            var temp22 = new global::Fuse.Reactive.DataBinding(temp3_Text_inst, temp11, Fuse.Reactive.BindingMode.Read);
            var temp23 = new global::Alive.IconLabel();
            var temp24 = new global::Alive.Body();
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/ScheduleDetails.ux";
            temp12.Margin = float4(10f, 10f, 10f, 10f);
            temp12.SourceLineNumber = 7;
            temp12.SourceFileName = "Components/ScheduleDetails.ux";
            temp12.Children.Add(temp13);
            temp13.SourceLineNumber = 8;
            temp13.SourceFileName = "Components/ScheduleDetails.ux";
            temp13.Children.Add(temp14);
            temp13.Children.Add(temp21);
            temp13.Children.Add(temp24);
            temp14.SourceLineNumber = 9;
            temp14.SourceFileName = "Components/ScheduleDetails.ux";
            temp14.Children.Add(temp15);
            temp14.Children.Add(temp16);
            temp14.Children.Add(temp20);
            temp15.SourceLineNumber = 10;
            temp15.SourceFileName = "Components/ScheduleDetails.ux";
            temp16.Alignment = Fuse.Elements.Alignment.Bottom;
            temp16.Margin = float4(25f, 25f, 25f, 25f);
            temp16.SourceLineNumber = 11;
            temp16.SourceFileName = "Components/ScheduleDetails.ux";
            temp16.Children.Add(temp);
            temp16.Children.Add(temp1);
            temp16.Children.Add(temp2);
            temp.Width = new Uno.UX.Size(27f, Uno.UX.Unit.Unspecified);
            temp.Height = new Uno.UX.Size(2.5f, Uno.UX.Unit.Unspecified);
            temp.Alignment = Fuse.Elements.Alignment.Left;
            temp.Margin = float4(0f, 0f, 0f, 8f);
            temp.SourceLineNumber = 12;
            temp.SourceFileName = "Components/ScheduleDetails.ux";
            temp.Bindings.Add(temp17);
            temp5.SourceLineNumber = 12;
            temp5.SourceFileName = "Components/ScheduleDetails.ux";
            temp4.SourceLineNumber = 12;
            temp4.SourceFileName = "Components/ScheduleDetails.ux";
            temp1.SourceLineNumber = 13;
            temp1.SourceFileName = "Components/ScheduleDetails.ux";
            temp1.Bindings.Add(temp18);
            temp7.SourceLineNumber = 13;
            temp7.SourceFileName = "Components/ScheduleDetails.ux";
            temp6.SourceLineNumber = 13;
            temp6.SourceFileName = "Components/ScheduleDetails.ux";
            temp2.SourceLineNumber = 14;
            temp2.SourceFileName = "Components/ScheduleDetails.ux";
            temp2.Bindings.Add(temp19);
            temp9.SourceLineNumber = 14;
            temp9.SourceFileName = "Components/ScheduleDetails.ux";
            temp8.SourceLineNumber = 14;
            temp8.SourceFileName = "Components/ScheduleDetails.ux";
            temp20.SourceLineNumber = 16;
            temp20.SourceFileName = "Components/ScheduleDetails.ux";
            temp20.File = new global::Uno.UX.BundleFileSource(import("../../../Assets/event3.jpg"));
            temp21.Margin = float4(20f, 20f, 20f, 20f);
            temp21.SourceLineNumber = 18;
            temp21.SourceFileName = "Components/ScheduleDetails.ux";
            temp21.Children.Add(temp3);
            temp21.Children.Add(temp23);
            temp3.IconSize = 14;
            temp3.Icon = "\uEC88";
            temp3.Margin = float4(0f, 0f, 20f, 0f);
            temp3.SourceLineNumber = 19;
            temp3.SourceFileName = "Components/ScheduleDetails.ux";
            temp3.Bindings.Add(temp22);
            temp11.SourceLineNumber = 19;
            temp11.SourceFileName = "Components/ScheduleDetails.ux";
            temp10.SourceLineNumber = 19;
            temp10.SourceFileName = "Components/ScheduleDetails.ux";
            temp23.Text = "Building C1, Room: Root";
            temp23.IconSize = 14;
            temp23.Icon = "\uEC88";
            temp23.SourceLineNumber = 20;
            temp23.SourceFileName = "Components/ScheduleDetails.ux";
            temp24.Value = "Vivamus sagittis lacus vel augue laoreet rutrum faucibus dolor auctor. Maecenas sed diam eget risus varius blandit sit amet non magna. Donec id elit non mi porta gravida at eget metus. Fusce dapibus, tellus ac cursus commodo, tortor mauris condimentum nibh, ut fermentum massa justo sit amet risus.";
            temp24.Margin = float4(20f, 20f, 20f, 20f);
            temp24.SourceLineNumber = 22;
            temp24.SourceFileName = "Components/ScheduleDetails.ux";
            this.Children.Add(temp12);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "Value";
        static global::Uno.UX.Selector __selector2 = "Text";
    }
}
