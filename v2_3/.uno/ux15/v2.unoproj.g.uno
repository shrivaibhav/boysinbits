sealed class v2_accessor_Fuse_Controls_ToggleControl_Value: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Fuse_Controls_ToggleControl_Value();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Value";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Fuse.Controls.ToggleControl)obj).Value; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Fuse.Controls.ToggleControl)obj).SetValue((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_DrawerItem_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_DrawerItem_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.DrawerItem)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.DrawerItem)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ProgramItem_ImageSource();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "ImageSource";
    public override global::Uno.Type PropertyType { get { return typeof(Fuse.Resources.ImageSource); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ProgramItem)obj).ImageSource; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ProgramItem)obj).SetImageSource((Fuse.Resources.ImageSource)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ProgramItem_IsAttending: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ProgramItem_IsAttending();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "IsAttending";
    public override global::Uno.Type PropertyType { get { return typeof(bool); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ProgramItem)obj).IsAttending; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ProgramItem)obj).SetIsAttending((bool)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ProgramItem_CategoryColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "CategoryColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ProgramItem)obj).CategoryColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ProgramItem)obj).SetCategoryColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ProgramItem_Time: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ProgramItem_Time();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Time";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ProgramItem)obj).Time; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ProgramItem)obj).SetTime((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ProgramItem_Person: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ProgramItem_Person();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Person";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ProgramItem)obj).Person; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ProgramItem)obj).SetPerson((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ProgramItem_Title: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ProgramItem_Title();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Title";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ProgramItem)obj).Title; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ProgramItem)obj).SetTitle((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ScheduleItem_CategoryColor: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ScheduleItem_CategoryColor();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "CategoryColor";
    public override global::Uno.Type PropertyType { get { return typeof(float4); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ScheduleItem)obj).CategoryColor; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ScheduleItem)obj).SetCategoryColor((float4)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ScheduleItem_Time: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ScheduleItem_Time();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Time";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ScheduleItem)obj).Time; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ScheduleItem)obj).SetTime((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ScheduleItem_Category: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ScheduleItem_Category();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Category";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ScheduleItem)obj).Category; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ScheduleItem)obj).SetCategory((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_ExampleApp_ScheduleItem_Title: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_ExampleApp_ScheduleItem_Title();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Title";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.ExampleApp.ScheduleItem)obj).Title; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.ExampleApp.ScheduleItem)obj).SetTitle((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Alive_SettingsMenuItem_Label: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Alive_SettingsMenuItem_Label();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Label";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Alive.SettingsMenuItem)obj).Label; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Alive.SettingsMenuItem)obj).SetLabel((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_accessor_Fuse_Controls_RangeControl_Value: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new v2_accessor_Fuse_Controls_RangeControl_Value();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Value";
    public override global::Uno.Type PropertyType { get { return typeof(double); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::Fuse.Controls.RangeControl)obj).Value; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::Fuse.Controls.RangeControl)obj).SetValue((double)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseTriggersWhileBool_Value_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Triggers.WhileBool _obj;
    public v2_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Triggers.WhileBool)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Triggers.WhileBool)obj).Value = v; }
}
sealed class v2_FuseControlsControl_Background_Property: Uno.UX.Property<Fuse.Drawing.Brush>
{
    [Uno.WeakReference] readonly Fuse.Controls.Control _obj;
    public v2_FuseControlsControl_Background_Property(Fuse.Controls.Control obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Drawing.Brush Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Control)obj).Background; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Control)obj).Background = v; }
}
sealed class v2_FuseControlsTextControl_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public v2_FuseControlsTextControl_Color_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public v2_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseControlsTextInputControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextInputControl _obj;
    public v2_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextInputControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextInputControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseControlsImage_Source_Property: Uno.UX.Property<Fuse.Resources.ImageSource>
{
    [Uno.WeakReference] readonly Fuse.Controls.Image _obj;
    public v2_FuseControlsImage_Source_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.Resources.ImageSource Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Image)obj).Source; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.Resources.ImageSource v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Image)obj).Source = v; }
}
sealed class v2_FuseControlsShape_Color_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Shape _obj;
    public v2_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Shape)obj).Color; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Shape)obj).SetColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseElementsElement_Opacity_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Elements.Element _obj;
    public v2_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Elements.Element)obj).Opacity; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Elements.Element)obj).SetOpacity(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseControlsShape_StrokeColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Fuse.Controls.Shape _obj;
    public v2_FuseControlsShape_StrokeColor_Property(Fuse.Controls.Shape obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Shape)obj).StrokeColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Shape)obj).StrokeColor = v; }
}
sealed class v2_AliveMediaScroller_TopBarColor_Property: Uno.UX.Property<float4>
{
    [Uno.WeakReference] readonly Alive.MediaScroller _obj;
    public v2_AliveMediaScroller_TopBarColor_Property(Alive.MediaScroller obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float4 Get(global::Uno.UX.PropertyObject obj) { return ((Alive.MediaScroller)obj).TopBarColor; }
    public override void Set(global::Uno.UX.PropertyObject obj, float4 v, global::Uno.UX.IPropertyListener origin) { ((Alive.MediaScroller)obj).SetTopBarColor(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseReactiveEach_Items_Property: Uno.UX.Property<object>
{
    [Uno.WeakReference] readonly Fuse.Reactive.Each _obj;
    public v2_FuseReactiveEach_Items_Property(Fuse.Reactive.Each obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override object Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Reactive.Each)obj).Items; }
    public override void Set(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Reactive.Each)obj).Items = v; }
}
sealed class v2_FuseControlsImage_Url_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.Image _obj;
    public v2_FuseControlsImage_Url_Property(Fuse.Controls.Image obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.Image)obj).Url; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.Image)obj).Url = v; }
}
sealed class v2_FuseControlsToggleControl_Value_Property: Uno.UX.Property<bool>
{
    [Uno.WeakReference] readonly Fuse.Controls.ToggleControl _obj;
    public v2_FuseControlsToggleControl_Value_Property(Fuse.Controls.ToggleControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override bool Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.ToggleControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, bool v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.ToggleControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseControlsRangeControl_Value_Property: Uno.UX.Property<double>
{
    [Uno.WeakReference] readonly Fuse.Controls.RangeControl _obj;
    public v2_FuseControlsRangeControl_Value_Property(Fuse.Controls.RangeControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override double Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.RangeControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, double v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.RangeControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class v2_FuseChartingDataSeries_Data_Property: Uno.UX.Property<Fuse.IArray>
{
    [Uno.WeakReference] readonly Fuse.Charting.DataSeries _obj;
    public v2_FuseChartingDataSeries_Data_Property(Fuse.Charting.DataSeries obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override Fuse.IArray Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Charting.DataSeries)obj).Data; }
    public override void Set(global::Uno.UX.PropertyObject obj, Fuse.IArray v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Charting.DataSeries)obj).Data = v; }
}
sealed class v2_FuseNavigationNavigationAnimation_Scale_Property: Uno.UX.Property<float>
{
    [Uno.WeakReference] readonly Fuse.Navigation.NavigationAnimation _obj;
    public v2_FuseNavigationNavigationAnimation_Scale_Property(Fuse.Navigation.NavigationAnimation obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override float Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Navigation.NavigationAnimation)obj).Scale; }
    public override void Set(global::Uno.UX.PropertyObject obj, float v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Navigation.NavigationAnimation)obj).Scale = v; }
}
