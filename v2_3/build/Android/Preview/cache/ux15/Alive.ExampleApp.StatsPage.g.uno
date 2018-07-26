namespace Alive.ExampleApp
{
    [Uno.Compiler.UxGenerated]
    public partial class StatsPage: Alive.Page
    {
        [Uno.Compiler.UxGenerated]
        public partial class Template: Uno.UX.Template
        {
            [Uno.WeakReference] internal readonly Alive.ExampleApp.StatsPage __parent;
            [Uno.WeakReference] internal readonly Alive.ExampleApp.StatsPage __parentInstance;
            public Template(Alive.ExampleApp.StatsPage parent, Alive.ExampleApp.StatsPage parentInstance): base(null, false)
            {
                __parent = parent;
                __parentInstance = parentInstance;
            }
            global::Uno.UX.Property<string> monthLabel_Value_inst;
            global::Uno.UX.Property<float> monthLabel_Opacity_inst;
            global::Uno.UX.Property<float> temp_Scale_inst;
            global::Uno.UX.Property<float> temp1_Scale_inst;
            internal global::Fuse.Reactive.EventBinding temp_eb7;
            internal global::Alive.ButtonText monthLabel;
            static Template()
            {
            }
            public override object New()
            {
                var __self = new global::Fuse.Controls.Panel();
                var temp2 = new global::Fuse.Reactive.Data("setCurrentMonth");
                monthLabel = new global::Alive.ButtonText();
                monthLabel_Value_inst = new v2_FuseControlsTextControl_Value_Property(monthLabel, __selector0);
                var temp3 = new global::Fuse.Reactive.Data("");
                monthLabel_Opacity_inst = new v2_FuseElementsElement_Opacity_Property(monthLabel, __selector1);
                var temp4 = 1;
                var temp5 = new global::Fuse.Reactive.Constant(temp4);
                var temp6 = 3;
                var temp7 = new global::Fuse.Reactive.Constant(temp6);
                var temp = new global::Fuse.Navigation.EnteringAnimation();
                temp_Scale_inst = new v2_FuseNavigationNavigationAnimation_Scale_Property(temp, __selector2);
                var temp8 = new global::Fuse.Reactive.Divide(temp5, temp7);
                var temp9 = 1;
                var temp10 = new global::Fuse.Reactive.Constant(temp9);
                var temp11 = 3;
                var temp12 = new global::Fuse.Reactive.Constant(temp11);
                var temp1 = new global::Fuse.Navigation.ExitingAnimation();
                temp1_Scale_inst = new v2_FuseNavigationNavigationAnimation_Scale_Property(temp1, __selector2);
                var temp13 = new global::Fuse.Reactive.Divide(temp10, temp12);
                var temp14 = new global::Fuse.Gestures.Clicked();
                var temp15 = new global::Fuse.Navigation.NavigateTo();
                var temp16 = new global::Fuse.Navigation.Activated();
                temp_eb7 = new global::Fuse.Reactive.EventBinding(temp2);
                var temp17 = new global::Fuse.Reactive.DataBinding(monthLabel_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
                var temp18 = new global::Fuse.Animations.Change<float>(monthLabel_Opacity_inst);
                var temp19 = new global::Fuse.Animations.Move();
                var temp20 = new global::Fuse.Reactive.DataBinding(temp_Scale_inst, temp8, Fuse.Reactive.BindingMode.Default);
                var temp21 = new global::Fuse.Animations.Change<float>(monthLabel_Opacity_inst);
                var temp22 = new global::Fuse.Animations.Move();
                var temp23 = new global::Fuse.Reactive.DataBinding(temp1_Scale_inst, temp13, Fuse.Reactive.BindingMode.Default);
                __self.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
                __self.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
                __self.Name = __selector3;
                __self.SourceLineNumber = 68;
                __self.SourceFileName = "Pages/StatsPage.ux";
                temp14.SourceLineNumber = 69;
                temp14.SourceFileName = "Pages/StatsPage.ux";
                temp14.Actions.Add(temp15);
                temp15.SourceLineNumber = 70;
                temp15.SourceFileName = "Pages/StatsPage.ux";
                temp15.Target = __self;
                temp16.Bypass = Fuse.Triggers.TriggerBypassMode.Never;
                temp16.SourceLineNumber = 72;
                temp16.SourceFileName = "Pages/StatsPage.ux";
                temp16.Handler += temp_eb7.OnEvent;
                temp16.Bindings.Add(temp_eb7);
                temp2.SourceLineNumber = 72;
                temp2.SourceFileName = "Pages/StatsPage.ux";
                monthLabel.Alignment = Fuse.Elements.Alignment.TopCenter;
                monthLabel.Margin = float4(25f, 25f, 25f, 25f);
                monthLabel.Name = __selector4;
                monthLabel.SourceLineNumber = 73;
                monthLabel.SourceFileName = "Pages/StatsPage.ux";
                monthLabel.Bindings.Add(temp17);
                temp3.SourceLineNumber = 73;
                temp3.SourceFileName = "Pages/StatsPage.ux";
                temp.SourceLineNumber = 74;
                temp.SourceFileName = "Pages/StatsPage.ux";
                temp.Animators.Add(temp18);
                temp.Animators.Add(temp19);
                temp.Bindings.Add(temp20);
                temp18.Value = 0f;
                temp18.Duration = 0.5;
                temp19.X = -1f;
                temp19.Duration = 1;
                temp19.RelativeTo = Fuse.TranslationModes.ParentSize;
                temp8.SourceLineNumber = 74;
                temp8.SourceFileName = "Pages/StatsPage.ux";
                temp5.SourceLineNumber = 74;
                temp5.SourceFileName = "Pages/StatsPage.ux";
                temp7.SourceLineNumber = 74;
                temp7.SourceFileName = "Pages/StatsPage.ux";
                temp1.SourceLineNumber = 78;
                temp1.SourceFileName = "Pages/StatsPage.ux";
                temp1.Animators.Add(temp21);
                temp1.Animators.Add(temp22);
                temp1.Bindings.Add(temp23);
                temp21.Value = 0f;
                temp21.Duration = 0.5;
                temp22.X = 1f;
                temp22.Duration = 1;
                temp22.RelativeTo = Fuse.TranslationModes.ParentSize;
                temp13.SourceLineNumber = 78;
                temp13.SourceFileName = "Pages/StatsPage.ux";
                temp10.SourceLineNumber = 78;
                temp10.SourceFileName = "Pages/StatsPage.ux";
                temp12.SourceLineNumber = 78;
                temp12.SourceFileName = "Pages/StatsPage.ux";
                __self.Children.Add(temp14);
                __self.Children.Add(temp16);
                __self.Children.Add(monthLabel);
                __self.Children.Add(temp);
                __self.Children.Add(temp1);
                return __self;
            }
            static global::Uno.UX.Selector __selector0 = "Value";
            static global::Uno.UX.Selector __selector1 = "Opacity";
            static global::Uno.UX.Selector __selector2 = "Scale";
            static global::Uno.UX.Selector __selector3 = "month";
            static global::Uno.UX.Selector __selector4 = "monthLabel";
        }
        global::Uno.UX.Property<Fuse.IArray> temp_Data_inst;
        global::Uno.UX.Property<object> temp1_Items_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static StatsPage()
        {
        }
        [global::Uno.UX.UXConstructor]
        public StatsPage()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp = new global::Fuse.Charting.DataSeries();
            temp_Data_inst = new v2_FuseChartingDataSeries_Data_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("history");
            var temp1 = new global::Fuse.Reactive.Each();
            temp1_Items_inst = new v2_FuseReactiveEach_Items_Property(temp1, __selector1);
            var temp3 = new global::Fuse.Reactive.Data("months");
            var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
            var temp5 = new global::Fuse.Controls.DockPanel();
            var temp6 = new global::Fuse.Controls.StatusBarBackground();
            var temp7 = new global::Alive.RadarPlot();
            var temp8 = new global::Fuse.Reactive.DataBinding(temp_Data_inst, temp2, Fuse.Reactive.BindingMode.Default);
            var temp9 = new global::Fuse.Controls.StackPanel();
            var temp10 = new global::Fuse.Controls.PageControl();
            var month = new Template(this, this);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp3, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Alive.DrawerButtonBackground();
            this.SourceLineNumber = 1;
            this.SourceFileName = "Pages/StatsPage.ux";
            temp4.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\n\t\tfunction Stat(category, value) {\n\t\t\tthis.label = category;\n\t\t\tthis.y = value;\n\t\t}\n\n\t\tvar statsByMonth = {\n\t\t\t\"January\": [\n\t\t\t\tnew Stat(\"Talks\", 1),\n\t\t\t\tnew Stat(\"Exhibitions\", 2),\n\t\t\t\tnew Stat(\"Music\", 7),\n\t\t\t\tnew Stat(\"Workshops\", 4),\n\t\t\t\tnew Stat(\"Comedy\", 5),\n\t\t\t\tnew Stat(\"Meetups\", 6)\n\t\t\t],\n\t\t\t\"February\": [\n\t\t\t\tnew Stat(\"Talks\", 2),\n\t\t\t\tnew Stat(\"Exhibitions\", 5),\n\t\t\t\tnew Stat(\"Music\", 4),\n\t\t\t\tnew Stat(\"Workshops\", 10),\n\t\t\t\tnew Stat(\"Comedy\", 6),\n\t\t\t\tnew Stat(\"Meetups\", 4)\n\t\t\t],\n\t\t\t\"March\": [\n\t\t\t\tnew Stat(\"Talks\", 8),\n\t\t\t\tnew Stat(\"Exhibitions\", 3),\n\t\t\t\tnew Stat(\"Music\", 8),\n\t\t\t\tnew Stat(\"Workshops\", 6),\n\t\t\t\tnew Stat(\"Comedy\", 1),\n\t\t\t\tnew Stat(\"Meetups\", 2)\n\t\t\t]\n\t\t};\n\n\t\tvar months = Observable(Object.keys(statsByMonth)).expand();\n\t\tvar currentMonth = Observable(\"March\");\n\n\t\tvar history = Observable();\n\n\t\tcurrentMonth.onValueChanged(module, function(month) {\n\t\t\thistory.replaceAll(statsByMonth[month]);\n\t\t});\n\n\t\tfunction setCurrentMonth(arg) {\n\t\t\tcurrentMonth.value = arg.data;\n\t\t}\n\n\t\tmodule.exports = {\n\t\t\tmonths: months,\n\t\t\tcurrentMonth: currentMonth,\n\t\t\thistory: history,\n\t\t\tsetCurrentMonth: setCurrentMonth\n\t\t};\n\t";
            temp4.LineNumber = 2;
            temp4.FileName = "Pages/StatsPage.ux";
            temp4.SourceLineNumber = 2;
            temp4.SourceFileName = "Pages/StatsPage.ux";
            temp5.SourceLineNumber = 58;
            temp5.SourceFileName = "Pages/StatsPage.ux";
            temp5.Children.Add(temp6);
            temp5.Children.Add(temp7);
            temp5.Children.Add(temp9);
            temp6.SourceLineNumber = 59;
            temp6.SourceFileName = "Pages/StatsPage.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp6, Fuse.Layouts.Dock.Top);
            temp7.Alignment = Fuse.Elements.Alignment.VerticalCenter;
            temp7.SourceLineNumber = 61;
            temp7.SourceFileName = "Pages/StatsPage.ux";
            temp7.Series.Add(temp);
            temp7.Bindings.Add(temp8);
            temp2.SourceLineNumber = 62;
            temp2.SourceFileName = "Pages/StatsPage.ux";
            temp9.SourceLineNumber = 65;
            temp9.SourceFileName = "Pages/StatsPage.ux";
            global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Bottom);
            temp9.Children.Add(temp10);
            temp9.Children.Add(temp12);
            temp10.InactiveState = Fuse.Controls.NavigationControlInactiveState.Unchanged;
            temp10.Transition = Fuse.Controls.NavigationControlTransition.None;
            temp10.IsRouterOutlet = false;
            temp10.SourceLineNumber = 66;
            temp10.SourceFileName = "Pages/StatsPage.ux";
            temp10.Children.Add(temp1);
            temp1.SourceLineNumber = 67;
            temp1.SourceFileName = "Pages/StatsPage.ux";
            temp1.Templates.Add(month);
            temp1.Bindings.Add(temp11);
            temp3.SourceLineNumber = 67;
            temp3.SourceFileName = "Pages/StatsPage.ux";
            temp12.SourceLineNumber = 85;
            temp12.SourceFileName = "Pages/StatsPage.ux";
            __g_nametable.This = this;
            this.Children.Add(temp4);
            this.Children.Add(temp5);
        }
        static global::Uno.UX.Selector __selector0 = "Data";
        static global::Uno.UX.Selector __selector1 = "Items";
    }
}
