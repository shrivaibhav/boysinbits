namespace vaibhav
{
    [Uno.Compiler.UxGenerated]
    public partial class myDrawer: Fuse.Controls.Container
    {
        bool _field_HideButton;
        [global::Uno.UX.UXOriginSetter("SetHideButton")]
        public bool HideButton
        {
            get { return _field_HideButton; }
            set { SetHideButton(value, null); }
        }
        public void SetHideButton(bool value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_HideButton)
            {
                _field_HideButton = value;
                OnPropertyChanged("HideButton", origin);
            }
        }
        readonly Fuse.Controls.Panel Menu;
        global::Uno.UX.Property<float> menuBtn_Opacity_inst;
        global::Uno.UX.Property<bool> temp_Value_inst;
        global::Uno.UX.Property<bool> temp1_Value_inst;
        global::Uno.UX.Property<float> shadow_Distance_inst;
        global::Uno.UX.Property<float> shadow_Size_inst;
        global::Uno.UX.Property<bool> temp2_Value_inst;
        global::Uno.UX.Property<float4> this_Color_inst;
        global::Uno.UX.Property<bool> this_HideButton_inst;
        internal global::Fuse.Controls.Panel navPanel;
        internal global::Fuse.Controls.Shadow shadow;
        internal global::Fuse.Controls.Circle menuBtn;
        internal global::Fuse.Reactive.EventBinding temp_eb5;
        internal global::Fuse.Reactive.EventBinding temp_eb6;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "Menu",
            "navPanel",
            "shadow",
            "menuBtn",
            "temp_eb5",
            "temp_eb6"
        };
        static myDrawer()
        {
        }
        [global::Uno.UX.UXConstructor]
        public myDrawer(
		[global::Uno.UX.UXParameter("Menu")] Fuse.Controls.Panel Menu)
        {
            this.Menu = Menu;
            InitializeUX();
        }
        void InitializeUX()
        {
            this_HideButton_inst = new v2_vaibhavmyDrawer_HideButton_Property(this, __selector0);
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            menuBtn = new global::Fuse.Controls.Circle();
            menuBtn_Opacity_inst = new v2_FuseElementsElement_Opacity_Property(menuBtn, __selector1);
            var temp3 = new global::Fuse.Reactive.Constant(this);
            var temp4 = new global::Fuse.Reactive.Property(temp3, v2_accessor_vaibhav_myDrawer_HideButton.Singleton);
            var temp5 = new global::Fuse.Reactive.Data("isOpen");
            var temp = new global::Fuse.Triggers.WhileTrue();
            temp_Value_inst = new v2_FuseTriggersWhileBool_Value_Property(temp, __selector2);
            var temp6 = new global::Fuse.Reactive.LogicalOr(temp4, temp5);
            var temp7 = new global::Fuse.Reactive.Data("open");
            var temp8 = new global::Fuse.Reactive.Data("close");
            var temp1 = new global::Fuse.Triggers.WhileTrue();
            temp1_Value_inst = new v2_FuseTriggersWhileBool_Value_Property(temp1, __selector2);
            var temp9 = new global::Fuse.Reactive.Data("isOpen");
            shadow = new global::Fuse.Controls.Shadow();
            shadow_Distance_inst = new v2_FuseControlsShadow_Distance_Property(shadow, __selector3);
            shadow_Size_inst = new v2_FuseControlsShadow_Size_Property(shadow, __selector4);
            var temp2 = new global::Fuse.Triggers.WhileTrue();
            temp2_Value_inst = new v2_FuseTriggersWhileBool_Value_Property(temp2, __selector2);
            var temp10 = new global::Fuse.Reactive.Data("isOpen");
            this_Color_inst = new v2_FuseControlsPanel_Color_Property(this, __selector5);
            var temp11 = new global::Fuse.Reactive.Resource("Alive.DrawerBackgroundColor");
            var temp12 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            navPanel = new global::Fuse.Controls.Panel();
            var temp13 = new global::Fuse.Controls.StackPanel();
            var temp14 = new global::Fuse.Controls.Rectangle();
            var temp15 = new global::Fuse.Controls.Rectangle();
            var temp16 = new global::Fuse.Controls.Shadow();
            var temp17 = new global::Fuse.Animations.Change<float>(menuBtn_Opacity_inst);
            var temp18 = new global::Fuse.Animations.Scale();
            var temp19 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp6, Fuse.Reactive.BindingMode.Default);
            temp_eb5 = new global::Fuse.Reactive.EventBinding(temp7);
            var temp20 = new global::Fuse.Controls.Panel();
            temp_eb6 = new global::Fuse.Reactive.EventBinding(temp8);
            var temp21 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp9, Fuse.Reactive.BindingMode.Default);
            var temp22 = new global::Fuse.Controls.Panel();
            var temp23 = new global::Fuse.Animations.Move();
            var temp24 = new global::Fuse.Animations.Scale();
            var temp25 = new global::Fuse.Animations.Change<float>(shadow_Distance_inst);
            var temp26 = new global::Fuse.Animations.Change<float>(shadow_Size_inst);
            var temp27 = new global::Fuse.Reactive.DataBinding(temp2_Value_inst, temp10, Fuse.Reactive.BindingMode.Default);
            var temp28 = new global::Fuse.Reactive.DataBinding(this_Color_inst, temp11, Fuse.Reactive.BindingMode.Default);
            this.HideButton = false;
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp12.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\tvar isOpen = Observable(false);\n\n\t\tthis.close = function() { isOpen.value = false; };\n\t\tthis.open = function() { isOpen.value = true; }\n\t\t\n\t\tmodule.exports = {\n\t\t\tisOpen: isOpen,\n\t\t\tclose: this.close,\n\t\t\topen: this.open\n\t\t};\n\t";
            temp12.LineNumber = 2;
            temp12.FileName = "Pages/drawer_vaibhav.ux";
            temp12.SourceLineNumber = 2;
            temp12.SourceFileName = "Pages/drawer_vaibhav.ux";
            navPanel.Color = Fuse.Drawing.Colors.White;
            navPanel.Name = __selector6;
            navPanel.SourceLineNumber = 18;
            navPanel.SourceFileName = "Pages/drawer_vaibhav.ux";
            navPanel.Children.Add(shadow);
            shadow.Angle = 0f;
            shadow.Name = __selector7;
            shadow.SourceLineNumber = 20;
            shadow.SourceFileName = "Pages/drawer_vaibhav.ux";
            menuBtn.Color = Fuse.Drawing.Colors.White;
            menuBtn.Width = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
            menuBtn.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
            menuBtn.Alignment = Fuse.Elements.Alignment.TopLeft;
            menuBtn.Margin = float4(0f, 0f, 0f, 20f);
            menuBtn.Name = __selector8;
            menuBtn.SourceLineNumber = 23;
            menuBtn.SourceFileName = "Pages/drawer_vaibhav.ux";
            global::Fuse.Gestures.Clicked.AddHandler(menuBtn, temp_eb5.OnEvent);
            menuBtn.Children.Add(temp13);
            menuBtn.Children.Add(temp16);
            menuBtn.Children.Add(temp);
            menuBtn.Bindings.Add(temp_eb5);
            temp13.ItemSpacing = 4f;
            temp13.Alignment = Fuse.Elements.Alignment.Center;
            temp13.SourceLineNumber = 24;
            temp13.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp13.Children.Add(temp14);
            temp13.Children.Add(temp15);
            temp14.Color = float4(0.8117647f, 0.8431373f, 0.9019608f, 1f);
            temp14.Width = new Uno.UX.Size(14f, Uno.UX.Unit.Unspecified);
            temp14.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
            temp14.SourceLineNumber = 25;
            temp14.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp15.Color = float4(0.8117647f, 0.8431373f, 0.9019608f, 1f);
            temp15.Width = new Uno.UX.Size(14f, Uno.UX.Unit.Unspecified);
            temp15.Height = new Uno.UX.Size(2f, Uno.UX.Unit.Unspecified);
            temp15.SourceLineNumber = 26;
            temp15.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp16.Angle = 90f;
            temp16.Distance = 3f;
            temp16.Size = 12f;
            temp16.Color = float4(0f, 0f, 0f, 0.19f);
            temp16.SourceLineNumber = 28;
            temp16.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp.SourceLineNumber = 29;
            temp.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp.Animators.Add(temp17);
            temp.Animators.Add(temp18);
            temp.Bindings.Add(temp19);
            temp17.Value = 0f;
            temp17.Duration = 0.2;
            temp17.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp18.Factor = 0f;
            temp18.Duration = 0.2;
            temp18.Target = menuBtn;
            temp18.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp6.SourceLineNumber = 29;
            temp6.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp4.SourceLineNumber = 29;
            temp4.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp3.SourceLineNumber = 29;
            temp3.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp5.SourceLineNumber = 29;
            temp5.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp7.SourceLineNumber = 23;
            temp7.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp1.SourceLineNumber = 35;
            temp1.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp1.Nodes.Add(temp20);
            temp1.Bindings.Add(temp21);
            temp20.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
            temp20.SourceLineNumber = 36;
            temp20.SourceFileName = "Pages/drawer_vaibhav.ux";
            global::Fuse.Gestures.Clicked.AddHandler(temp20, temp_eb6.OnEvent);
            temp20.Bindings.Add(temp_eb6);
            temp8.SourceLineNumber = 36;
            temp8.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp9.SourceLineNumber = 35;
            temp9.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp22.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
            temp22.Alignment = Fuse.Elements.Alignment.CenterLeft;
            temp22.SourceLineNumber = 38;
            temp22.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp22.Children.Add(Menu);
            temp2.SourceLineNumber = 39;
            temp2.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp2.Animators.Add(temp23);
            temp2.Animators.Add(temp24);
            temp2.Animators.Add(temp25);
            temp2.Animators.Add(temp26);
            temp2.Bindings.Add(temp27);
            temp23.X = 0.4f;
            temp23.Duration = 0.2;
            temp23.RelativeTo = Fuse.TranslationModes.Size;
            temp23.Target = navPanel;
            temp23.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp24.Factor = 0.7f;
            temp24.Duration = 0.2;
            temp24.Target = navPanel;
            temp24.Easing = Fuse.Animations.Easing.QuadraticInOut;
            temp25.Value = 25f;
            temp26.Value = 25f;
            temp10.SourceLineNumber = 39;
            temp10.SourceFileName = "Pages/drawer_vaibhav.ux";
            temp11.SourceLineNumber = 1;
            temp11.SourceFileName = "Pages/drawer_vaibhav.ux";
            __g_nametable.This = this;
            __g_nametable.Objects.Add(Menu);
            __g_nametable.Objects.Add(navPanel);
            __g_nametable.Objects.Add(shadow);
            __g_nametable.Objects.Add(menuBtn);
            __g_nametable.Objects.Add(temp_eb5);
            __g_nametable.Objects.Add(temp_eb6);
            __g_nametable.Properties.Add(this_HideButton_inst);
            this.Subtree = navPanel;
            this.SubtreeNodes.Add(temp12);
            this.SubtreeNodes.Add(menuBtn);
            this.SubtreeNodes.Add(temp1);
            this.SubtreeNodes.Add(temp2);
            this.Children.Add(navPanel);
            this.Children.Add(temp22);
            this.Bindings.Add(temp28);
        }
        static global::Uno.UX.Selector __selector0 = "HideButton";
        static global::Uno.UX.Selector __selector1 = "Opacity";
        static global::Uno.UX.Selector __selector2 = "Value";
        static global::Uno.UX.Selector __selector3 = "Distance";
        static global::Uno.UX.Selector __selector4 = "Size";
        static global::Uno.UX.Selector __selector5 = "Color";
        static global::Uno.UX.Selector __selector6 = "navPanel";
        static global::Uno.UX.Selector __selector7 = "shadow";
        static global::Uno.UX.Selector __selector8 = "menuBtn";
    }
}
