namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class ProgramItem: Fuse.Controls.DockPanel
    {
        Fuse.Resources.ImageSource _field_ImageSource;
        [global::Uno.UX.UXOriginSetter("SetImageSource")]
        public Fuse.Resources.ImageSource ImageSource
        {
            get { return _field_ImageSource; }
            set { SetImageSource(value, null); }
        }
        public void SetImageSource(Fuse.Resources.ImageSource value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_ImageSource)
            {
                _field_ImageSource = value;
                OnPropertyChanged("ImageSource", origin);
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
        string _field_Person;
        [global::Uno.UX.UXOriginSetter("SetPerson")]
        public string Person
        {
            get { return _field_Person; }
            set { SetPerson(value, null); }
        }
        public void SetPerson(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Person)
            {
                _field_Person = value;
                OnPropertyChanged("Person", origin);
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
        bool _field_IsAttending;
        [global::Uno.UX.UXOriginSetter("SetIsAttending")]
        public bool IsAttending
        {
            get { return _field_IsAttending; }
            set { SetIsAttending(value, null); }
        }
        public void SetIsAttending(bool value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_IsAttending)
            {
                _field_IsAttending = value;
                OnPropertyChanged("IsAttending", origin);
            }
        }
        global::Uno.UX.Property<float4> attendingOverlay_Color_inst;
        global::Uno.UX.Property<Fuse.Resources.ImageSource> img_Source_inst;
        global::Uno.UX.Property<float> attendingOverlay_Opacity_inst;
        global::Uno.UX.Property<bool> temp_Value_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.Property<float4> temp2_Color_inst;
        global::Uno.UX.Property<string> temp2_Value_inst;
        global::Uno.UX.Property<string> temp3_Value_inst;
        global::Uno.UX.Property<string> temp4_Value_inst;
        internal global::Fuse.Controls.Image img;
        internal global::Fuse.Controls.Rectangle attendingOverlay;
        static ProgramItem()
        {
        }
        [global::Uno.UX.UXConstructor]
        public ProgramItem()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp5 = new global::Fuse.Reactive.Resource("Alive.Dark.Blue");
            var temp6 = 0.3;
            var temp7 = new global::Fuse.Reactive.Constant(temp6);
            attendingOverlay = new global::Fuse.Controls.Rectangle();
            attendingOverlay_Color_inst = new v2_FuseControlsShape_Color_Property(attendingOverlay, __selector0);
            var temp8 = new global::Alive.TransparentizeFunction(temp5, temp7);
            var temp9 = new global::Fuse.Reactive.Constant(this);
            img = new global::Fuse.Controls.Image();
            img_Source_inst = new v2_FuseControlsImage_Source_Property(img, __selector1);
            var temp10 = new global::Fuse.Reactive.Property(temp9, v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource.Singleton);
            attendingOverlay_Opacity_inst = new v2_FuseElementsElement_Opacity_Property(attendingOverlay, __selector2);
            var temp11 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Triggers.WhileTrue();
            temp_Value_inst = new v2_FuseTriggersWhileBool_Value_Property(temp, __selector3);
            var temp12 = new global::Fuse.Reactive.Property(temp11, v2_accessor_Alive_ExampleApp_ProgramItem_IsAttending.Singleton);
            var temp13 = new global::Fuse.Reactive.Constant(this);
            var temp1 = new global::Fuse.Controls.Rectangle();
            temp1_Color_inst = new v2_FuseControlsShape_Color_Property(temp1, __selector0);
            var temp14 = new global::Fuse.Reactive.Property(temp13, v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor.Singleton);
            var temp2 = new global::Fuse.Controls.Text();
            temp2_Color_inst = new v2_FuseControlsTextControl_Color_Property(temp2, __selector0);
            var temp15 = new global::Fuse.Reactive.Resource("Alive.Gray600");
            var temp16 = new global::Fuse.Reactive.Constant(this);
            temp2_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp2, __selector3);
            var temp17 = new global::Fuse.Reactive.Property(temp16, v2_accessor_Alive_ExampleApp_ProgramItem_Time.Singleton);
            var temp18 = new global::Fuse.Reactive.Constant(this);
            var temp19 = new global::Fuse.Reactive.Property(temp18, v2_accessor_Alive_ExampleApp_ProgramItem_Person.Singleton);
            var temp20 = " -";
            var temp21 = new global::Fuse.Reactive.Constant(temp20);
            var temp3 = new global::Alive.BodyBold();
            temp3_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp3, __selector3);
            var temp22 = new global::Fuse.Reactive.Add(temp19, temp21);
            var temp23 = new global::Fuse.Reactive.Constant(this);
            var temp4 = new global::Alive.BodyBold();
            temp4_Value_inst = new v2_FuseControlsTextControl_Value_Property(temp4, __selector3);
            var temp24 = new global::Fuse.Reactive.Property(temp23, v2_accessor_Alive_ExampleApp_ProgramItem_Title.Singleton);
            var temp25 = new global::Fuse.Controls.Panel();
            var temp26 = new global::Alive.DarkTheme();
            var temp27 = new global::Alive.Icon();
            var temp28 = new global::Fuse.Reactive.DataBinding(attendingOverlay_Color_inst, temp8, Fuse.Reactive.BindingMode.Default);
            var temp29 = new global::Fuse.Reactive.DataBinding(img_Source_inst, temp10, Fuse.Reactive.BindingMode.Read);
            var temp30 = new global::Fuse.Animations.Change<float>(attendingOverlay_Opacity_inst);
            var temp31 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp12, Fuse.Reactive.BindingMode.Read);
            var temp32 = new global::Fuse.Controls.StackPanel();
            var temp33 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp14, Fuse.Reactive.BindingMode.Read);
            var temp34 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp15, Fuse.Reactive.BindingMode.Default);
            var temp35 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp17, Fuse.Reactive.BindingMode.Read);
            var temp36 = new global::Fuse.Reactive.DataBinding(temp3_Value_inst, temp22, Fuse.Reactive.BindingMode.Default);
            var temp37 = new global::Fuse.Reactive.DataBinding(temp4_Value_inst, temp24, Fuse.Reactive.BindingMode.Read);
            this.CategoryColor = Fuse.Drawing.Colors.Black;
            this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
            this.MinHeight = new Uno.UX.Size(115f, Uno.UX.Unit.Unspecified);
            this.SourceLineNumber = 1;
            this.SourceFileName = "Components/ProgramItem.ux";
            temp25.SourceLineNumber = 9;
            temp25.SourceFileName = "Components/ProgramItem.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp25, Fuse.Layouts.Dock.Left);
            temp25.Children.Add(img);
            img.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
            img.Width = new Uno.UX.Size(90f, Uno.UX.Unit.Unspecified);
            img.Name = __selector4;
            img.SourceLineNumber = 10;
            img.SourceFileName = "Components/ProgramItem.ux";
            img.Children.Add(temp26);
            img.Children.Add(attendingOverlay);
            img.Bindings.Add(temp29);
            temp26.SourceLineNumber = 11;
            temp26.SourceFileName = "Components/ProgramItem.ux";
            attendingOverlay.Opacity = 0f;
            attendingOverlay.Layer = Fuse.Layer.Overlay;
            attendingOverlay.Name = __selector5;
            attendingOverlay.SourceLineNumber = 12;
            attendingOverlay.SourceFileName = "Components/ProgramItem.ux";
            attendingOverlay.Children.Add(temp27);
            attendingOverlay.Bindings.Add(temp28);
            temp27.Value = "\uEC4B";
            temp27.Alignment = Fuse.Elements.Alignment.BottomRight;
            temp27.Margin = float4(5f, 5f, 5f, 5f);
            temp27.SourceLineNumber = 13;
            temp27.SourceFileName = "Components/ProgramItem.ux";
            temp8.SourceLineNumber = 12;
            temp8.SourceFileName = "Components/ProgramItem.ux";
            temp5.SourceLineNumber = 12;
            temp5.SourceFileName = "Components/ProgramItem.ux";
            temp7.SourceLineNumber = 12;
            temp7.SourceFileName = "Components/ProgramItem.ux";
            temp10.SourceLineNumber = 10;
            temp10.SourceFileName = "Components/ProgramItem.ux";
            temp9.SourceLineNumber = 10;
            temp9.SourceFileName = "Components/ProgramItem.ux";
            temp.SourceLineNumber = 18;
            temp.SourceFileName = "Components/ProgramItem.ux";
            temp.Animators.Add(temp30);
            temp.Bindings.Add(temp31);
            temp30.Value = 1f;
            temp30.Duration = 0.1;
            temp12.SourceLineNumber = 18;
            temp12.SourceFileName = "Components/ProgramItem.ux";
            temp11.SourceLineNumber = 18;
            temp11.SourceFileName = "Components/ProgramItem.ux";
            temp32.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            temp32.Margin = float4(13f, 0f, 13f, 0f);
            temp32.SourceLineNumber = 22;
            temp32.SourceFileName = "Components/ProgramItem.ux";
            temp32.Children.Add(temp1);
            temp32.Children.Add(temp2);
            temp32.Children.Add(temp3);
            temp32.Children.Add(temp4);
            temp1.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
            temp1.Height = new Uno.UX.Size(3f, Uno.UX.Unit.Unspecified);
            temp1.Alignment = Fuse.Elements.Alignment.Left;
            temp1.SourceLineNumber = 23;
            temp1.SourceFileName = "Components/ProgramItem.ux";
            temp1.Bindings.Add(temp33);
            temp14.SourceLineNumber = 23;
            temp14.SourceFileName = "Components/ProgramItem.ux";
            temp13.SourceLineNumber = 23;
            temp13.SourceFileName = "Components/ProgramItem.ux";
            temp2.FontSize = 13f;
            temp2.Margin = float4(0f, 8f, 0f, 3f);
            temp2.SourceLineNumber = 24;
            temp2.SourceFileName = "Components/ProgramItem.ux";
            temp2.Bindings.Add(temp34);
            temp2.Bindings.Add(temp35);
            temp15.SourceLineNumber = 24;
            temp15.SourceFileName = "Components/ProgramItem.ux";
            temp17.SourceLineNumber = 24;
            temp17.SourceFileName = "Components/ProgramItem.ux";
            temp16.SourceLineNumber = 24;
            temp16.SourceFileName = "Components/ProgramItem.ux";
            temp3.SourceLineNumber = 25;
            temp3.SourceFileName = "Components/ProgramItem.ux";
            temp3.Bindings.Add(temp36);
            temp22.SourceLineNumber = 25;
            temp22.SourceFileName = "Components/ProgramItem.ux";
            temp19.SourceLineNumber = 25;
            temp19.SourceFileName = "Components/ProgramItem.ux";
            temp18.SourceLineNumber = 25;
            temp18.SourceFileName = "Components/ProgramItem.ux";
            temp21.SourceLineNumber = 25;
            temp21.SourceFileName = "Components/ProgramItem.ux";
            temp4.SourceLineNumber = 26;
            temp4.SourceFileName = "Components/ProgramItem.ux";
            temp4.Bindings.Add(temp37);
            temp24.SourceLineNumber = 26;
            temp24.SourceFileName = "Components/ProgramItem.ux";
            temp23.SourceLineNumber = 26;
            temp23.SourceFileName = "Components/ProgramItem.ux";
            this.Children.Add(temp25);
            this.Children.Add(temp);
            this.Children.Add(temp32);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "Source";
        static global::Uno.UX.Selector __selector2 = "Opacity";
        static global::Uno.UX.Selector __selector3 = "Value";
        static global::Uno.UX.Selector __selector4 = "img";
        static global::Uno.UX.Selector __selector5 = "attendingOverlay";
    }
}
