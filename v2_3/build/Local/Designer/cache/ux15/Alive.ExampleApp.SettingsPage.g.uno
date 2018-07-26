namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class SettingsPage: Alive.Page
    {
        global::Uno.UX.Property<bool> temp_Value_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.Property<double> temp2_Value_inst;
        internal global::Alive.Slider slider1;
        static SettingsPage()
        {
        }
        [global::Uno.UX.UXConstructor]
        public SettingsPage()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp = new global::Alive.Switch();
            temp_Value_inst = new v2_FuseControlsToggleControl_Value_Property(temp, __selector0);
            var temp3 = new global::Fuse.Reactive.Data("darkThemeEnabled");
            var temp1 = new global::Alive.CardMedia();
            temp1_Color_inst = new v2_FuseControlsShape_Color_Property(temp1, __selector1);
            var temp4 = new global::Fuse.Reactive.Resource("Alive.SecondaryBackgroundColor");
            slider1 = new global::Alive.Slider();
            var temp5 = new global::Fuse.Reactive.Constant(slider1);
            var temp2 = new global::Alive.Slider();
            temp2_Value_inst = new v2_FuseControlsRangeControl_Value_Property(temp2, __selector0);
            var temp6 = new global::Fuse.Reactive.Property(temp5, v2_accessor_Fuse_Controls_RangeControl_Value.Singleton);
            var temp7 = new global::Fuse.Controls.ScrollView();
            var temp8 = new global::Fuse.Controls.StackPanel();
            var temp9 = new global::Fuse.Controls.StackPanel();
            var temp10 = new global::Alive.SettingsMenuItem();
            var temp11 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Fuse.Controls.Grid();
            var temp13 = new global::Alive.Card();
            var temp14 = new global::Fuse.Controls.StackPanel();
            var temp15 = new global::Alive.Switch();
            var temp16 = new global::Alive.Switch();
            var temp17 = new global::Alive.ThemedCard();
            var temp18 = new global::Alive.DarkTheme();
            var temp19 = new global::Fuse.Controls.StackPanel();
            var temp20 = new global::Alive.Switch();
            var temp21 = new global::Alive.Switch();
            var temp22 = new global::Alive.Card();
            var temp23 = new global::Fuse.Layouts.StackLayout();
            var temp24 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp4, Fuse.Reactive.BindingMode.Default);
            var temp25 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            var temp26 = new global::Alive.CallToActionButton();
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/SettingsPage.ux";
            temp7.SourceLineNumber = 10;
            temp7.SourceFileName = "Pages/SettingsPage.ux";
            temp7.Children.Add(temp8);
            temp8.SourceLineNumber = 11;
            temp8.SourceFileName = "Pages/SettingsPage.ux";
            temp8.Children.Add(temp9);
            temp9.ItemSpacing = 15f;
            temp9.Margin = float4(15f, 15f, 15f, 15f);
            temp9.SourceLineNumber = 12;
            temp9.SourceFileName = "Pages/SettingsPage.ux";
            temp9.Children.Add(temp10);
            temp9.Children.Add(temp12);
            temp9.Children.Add(temp22);
            temp9.Children.Add(temp26);
            temp10.Label = "Enable dark theme";
            temp10.SourceLineNumber = 13;
            temp10.SourceFileName = "Pages/SettingsPage.ux";
            temp10.Children.Add(temp);
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Margin = float4(0f, 20f, 0f, 20f);
            temp.SourceLineNumber = 14;
            temp.SourceFileName = "Pages/SettingsPage.ux";
            temp.Bindings.Add(temp11);
            temp3.SourceLineNumber = 14;
            temp3.SourceFileName = "Pages/SettingsPage.ux";
            temp12.Columns = "1*,1*";
            temp12.CellSpacing = 15f;
            temp12.SourceLineNumber = 17;
            temp12.SourceFileName = "Pages/SettingsPage.ux";
            temp12.Children.Add(temp13);
            temp12.Children.Add(temp17);
            temp13.SourceLineNumber = 18;
            temp13.SourceFileName = "Pages/SettingsPage.ux";
            temp13.Children.Add(temp14);
            temp14.ItemSpacing = 15f;
            temp14.Margin = float4(15f, 15f, 15f, 15f);
            temp14.SourceLineNumber = 19;
            temp14.SourceFileName = "Pages/SettingsPage.ux";
            temp14.Children.Add(temp15);
            temp14.Children.Add(temp16);
            temp15.Value = true;
            temp15.Alignment = Fuse.Elements.Alignment.Center;
            temp15.SourceLineNumber = 20;
            temp15.SourceFileName = "Pages/SettingsPage.ux";
            temp16.Alignment = Fuse.Elements.Alignment.Center;
            temp16.SourceLineNumber = 21;
            temp16.SourceFileName = "Pages/SettingsPage.ux";
            temp17.SourceLineNumber = 25;
            temp17.SourceFileName = "Pages/SettingsPage.ux";
            temp17.Children.Add(temp18);
            temp17.Children.Add(temp19);
            temp18.SourceLineNumber = 26;
            temp18.SourceFileName = "Pages/SettingsPage.ux";
            temp19.ItemSpacing = 15f;
            temp19.Margin = float4(15f, 15f, 15f, 15f);
            temp19.SourceLineNumber = 27;
            temp19.SourceFileName = "Pages/SettingsPage.ux";
            temp19.Children.Add(temp20);
            temp19.Children.Add(temp21);
            temp20.Value = true;
            temp20.Alignment = Fuse.Elements.Alignment.Center;
            temp20.SourceLineNumber = 28;
            temp20.SourceFileName = "Pages/SettingsPage.ux";
            temp21.Alignment = Fuse.Elements.Alignment.Center;
            temp21.SourceLineNumber = 29;
            temp21.SourceFileName = "Pages/SettingsPage.ux";
            temp22.SourceLineNumber = 34;
            temp22.SourceFileName = "Pages/SettingsPage.ux";
            temp22.Layout = temp23;
            temp22.Children.Add(temp1);
            temp22.Children.Add(temp2);
            temp23.SourceLineNumber = 35;
            temp23.SourceFileName = "Pages/SettingsPage.ux";
            temp1.SourceLineNumber = 36;
            temp1.SourceFileName = "Pages/SettingsPage.ux";
            temp1.Children.Add(slider1);
            temp1.Bindings.Add(temp24);
            slider1.Margin = float4(10f, 0f, 10f, 0f);
            slider1.Name = __selector2;
            slider1.SourceLineNumber = 37;
            slider1.SourceFileName = "Pages/SettingsPage.ux";
            temp4.SourceLineNumber = 36;
            temp4.SourceFileName = "Pages/SettingsPage.ux";
            temp2.Margin = float4(10f, 0f, 10f, 0f);
            temp2.SourceLineNumber = 40;
            temp2.SourceFileName = "Pages/SettingsPage.ux";
            temp2.Bindings.Add(temp25);
            temp6.SourceLineNumber = 40;
            temp6.SourceFileName = "Pages/SettingsPage.ux";
            temp5.SourceLineNumber = 40;
            temp5.SourceFileName = "Pages/SettingsPage.ux";
            temp26.Text = "A button";
            temp26.Glow = true;
            temp26.SourceLineNumber = 43;
            temp26.SourceFileName = "Pages/SettingsPage.ux";
            this.Children.Add(temp7);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Color";
        static global::Uno.UX.Selector __selector2 = "slider1";
    }
}
