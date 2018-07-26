[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("SignIn", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::SignIn(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 49;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "SignIn";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base("Device", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::Device(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 50;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Device";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base("schedule", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::Alive.ExampleApp.SchedulePage(__parent.router);
            __self.Name = __selector0;
            __self.SourceLineNumber = 51;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "schedule";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base("settings", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Alive.ExampleApp.SettingsPage();
            __self.Name = __selector0;
            __self.SourceLineNumber = 52;
            __self.SourceFileName = "MainView.ux";
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "settings";
    }
    global::Uno.UX.Property<bool> temp_Value_inst;
    global::Uno.UX.Property<bool> temp1_Value_inst;
    internal global::Fuse.Navigation.Router router;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    internal global::Fuse.Reactive.FuseJS.DiagnosticsImplModule FuseReactiveFuseJSDiagnosticsImplModule;
    internal global::Fuse.Reactive.FuseJS.Http FuseReactiveFuseJSHttp;
    internal global::Fuse.Reactive.FuseJS.TimerModule FuseReactiveFuseJSTimerModule;
    internal global::Fuse.Drawing.BrushConverter FuseDrawingBrushConverter;
    internal global::Fuse.Triggers.BusyTaskModule FuseTriggersBusyTaskModule;
    internal global::Fuse.Testing.UnoTestingHelper FuseTestingUnoTestingHelper;
    internal global::Fuse.FileSystem.FileSystemModule FuseFileSystemFileSystemModule;
    internal global::Fuse.Storage.StorageModule FuseStorageStorageModule;
    internal global::Fuse.WebSocket.WebSocketClientModule FuseWebSocketWebSocketClientModule;
    internal global::Polyfills.Window.WindowModule PolyfillsWindowWindowModule;
    internal global::FuseJS.Globals FuseJSGlobals;
    internal global::FuseJS.Lifecycle FuseJSLifecycle;
    internal global::FuseJS.Environment FuseJSEnvironment;
    internal global::FuseJS.Base64 FuseJSBase64;
    internal global::FuseJS.Bundle FuseJSBundle;
    internal global::FuseJS.FileReaderImpl FuseJSFileReaderImpl;
    internal global::FuseJS.UserEvents FuseJSUserEvents;
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Reactive.DeviceCaps.Device, "Device");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.QuickUnload, "QuickUnload");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.ExampleApp.SchedulePage.oswald, "oswald");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.RadarPlot.AliveElasticAttractor, "Alive.ElasticAttractor");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.TextStyles.AliveRegularFont, "Alive.RegularFont");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.TextStyles.AliveBoldFont, "Alive.BoldFont");
        global::Uno.UX.Resource.SetGlobalKey(global::Alive.TextStyles.AliveMediumFont, "Alive.MediumFont");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_IconFont_res.AliveIconFont, "Alive.IconFont");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray100, "Alive.Gray100");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray200, "Alive.Gray200");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray300, "Alive.Gray300");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray400, "Alive.Gray400");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray500, "Alive.Gray500");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGray600, "Alive.Gray600");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient1StartColor, "Alive.Gradient1.StartColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient1EndColor, "Alive.Gradient1.EndColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient2StartColor, "Alive.Gradient2.StartColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient2EndColor, "Alive.Gradient2.EndColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient3StartColor, "Alive.Gradient3.StartColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveGradient3EndColor, "Alive.Gradient3.EndColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightBlue, "Alive.Light.Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightOrange, "Alive.Light.Orange");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightGreen, "Alive.Light.Green");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightPurple, "Alive.Light.Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightYellow, "Alive.Light.Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightRed, "Alive.Light.Red");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightAccentColor, "Alive.Light.AccentColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightBodyTextColor, "Alive.Light.BodyTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightTitleTextColor, "Alive.Light.TitleTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightCardBackgroundColor, "Alive.Light.CardBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightCardShadowColor, "Alive.Light.CardShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightPrimaryBackgroundColor, "Alive.Light.PrimaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightSecondaryBackgroundColor, "Alive.Light.SecondaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightPageIndicatorDotColor, "Alive.Light.PageIndicatorDotColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightDrawerBackgroundColor, "Alive.Light.DrawerBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightInactiveSwitchBackgroundColor, "Alive.Light.InactiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightBubbleStrokeColor, "Alive.Light.BubbleStrokeColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightListViewItemColor, "Alive.Light.ListViewItemColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveLightListViewItemAlternateColor, "Alive.Light.ListViewItemAlternateColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkRed, "Alive.Dark.Red");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkBlue, "Alive.Dark.Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkOrange, "Alive.Dark.Orange");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkGreen, "Alive.Dark.Green");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkPurple, "Alive.Dark.Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkYellow, "Alive.Dark.Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkAccentColor, "Alive.Dark.AccentColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkBodyTextColor, "Alive.Dark.BodyTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkTitleTextColor, "Alive.Dark.TitleTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkCardBackgroundColor, "Alive.Dark.CardBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkCardShadowColor, "Alive.Dark.CardShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkPrimaryBackgroundColor, "Alive.Dark.PrimaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkSecondaryBackgroundColor, "Alive.Dark.SecondaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkPageIndicatorDotColor, "Alive.Dark.PageIndicatorDotColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkDrawerBackgroundColor, "Alive.Dark.DrawerBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkInactiveSwitchBackgroundColor, "Alive.Dark.InactiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkBubbleStrokeColor, "Alive.Dark.BubbleStrokeColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkListViewItemColor, "Alive.Dark.ListViewItemColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorPalette_res.AliveDarkListViewItemAlternateColor, "Alive.Dark.ListViewItemAlternateColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveBlue, "Alive.Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveOrange, "Alive.Orange");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveGreen, "Alive.Green");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AlivePurple, "Alive.Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveYellow, "Alive.Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveRed, "Alive.Red");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveAccentColor, "Alive.AccentColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveTitleTextColor, "Alive.TitleTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveBodyTextColor, "Alive.BodyTextColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AlivePrimaryBackgroundColor, "Alive.PrimaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveSecondaryBackgroundColor, "Alive.SecondaryBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveCardBackgroundColor, "Alive.CardBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveCardShadowColor, "Alive.CardShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AlivePageIndicatorDotColor, "Alive.PageIndicatorDotColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveDrawerBackgroundColor, "Alive.DrawerBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveSliderThumbColor, "Alive.SliderThumbColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveSliderThumbShadowColor, "Alive.SliderThumbShadowColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveInactiveSwitchThumbColor, "Alive.InactiveSwitchThumbColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveInactiveSwitchBackgroundColor, "Alive.InactiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveActiveSwitchThumbColor, "Alive.ActiveSwitchThumbColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveActiveSwitchBackgroundColor, "Alive.ActiveSwitchBackgroundColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveBubbleStrokeColor, "Alive.BubbleStrokeColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveListViewItemColor, "Alive.ListViewItemColor");
        global::Uno.UX.Resource.SetGlobalKey(global::FuseUXKitsAlive_ColorThemes_res.AliveListViewItemAlternateColor, "Alive.ListViewItemAlternateColor");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        FuseReactiveFuseJSDiagnosticsImplModule = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        FuseReactiveFuseJSHttp = new global::Fuse.Reactive.FuseJS.Http();
        FuseReactiveFuseJSTimerModule = new global::Fuse.Reactive.FuseJS.TimerModule();
        FuseDrawingBrushConverter = new global::Fuse.Drawing.BrushConverter();
        FuseTriggersBusyTaskModule = new global::Fuse.Triggers.BusyTaskModule();
        FuseTestingUnoTestingHelper = new global::Fuse.Testing.UnoTestingHelper();
        FuseFileSystemFileSystemModule = new global::Fuse.FileSystem.FileSystemModule();
        FuseStorageStorageModule = new global::Fuse.Storage.StorageModule();
        FuseWebSocketWebSocketClientModule = new global::Fuse.WebSocket.WebSocketClientModule();
        PolyfillsWindowWindowModule = new global::Polyfills.Window.WindowModule();
        FuseJSGlobals = new global::FuseJS.Globals();
        FuseJSLifecycle = new global::FuseJS.Lifecycle();
        FuseJSEnvironment = new global::FuseJS.Environment();
        FuseJSBase64 = new global::FuseJS.Base64();
        FuseJSBundle = new global::FuseJS.Bundle();
        FuseJSFileReaderImpl = new global::FuseJS.FileReaderImpl();
        FuseJSUserEvents = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Triggers.WhileTrue();
        temp_Value_inst = new v2_FuseTriggersWhileBool_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("darkThemeEnabled");
        var temp1 = new global::Fuse.Triggers.WhileFalse();
        temp1_Value_inst = new v2_FuseTriggersWhileBool_Value_Property(temp1, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("darkThemeEnabled");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Alive.FallbackTheme();
        var temp6 = new global::Fuse.Controls.Panel();
        var temp7 = new global::Alive.DarkTheme();
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp9 = new global::Alive.LightTheme();
        var temp10 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp3, Fuse.Reactive.BindingMode.Read);
        router = new global::Fuse.Navigation.Router();
        var temp11 = new global::Fuse.Controls.Navigator();
        var SignIn = new Template(this, this);
        var Device = new Template1(this, this);
        var schedule = new Template2(this, this);
        var settings = new Template3(this, this);
        temp4.Code = "\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\t\n\t\texports.darkThemeEnabled = Observable(false);\n\t\t\n\t\texports.closeMenu = function () { drawer.close(); };\n\t\texports.toggleMenuButton = function () { drawer.toggleMenu(); };\n\n\t\tfunction createGoToHandler(route) {\n\t\t\treturn function() {\n\t\t\t\trouter.goto(route);\n\t\t\t\tdrawer.close();\n\t\t\t}\n\t\t}\n\t\tfunction  logout(route){\n\t\t\treturn function() {\n\t\t\t\trouter.goto(route);\n\t\t\t\tdrawer.close();\n\t\t\t}\n\t\t}\n\t\t//exports.goToSelect = createGoToHandler(\"select\");\n\t\texports.goToLogout = logout(\"SignIn\");\n\t\texports.goToSchedule = createGoToHandler(\"schedule\");\n\t\texports.goToSettings = createGoToHandler(\"settings\");\n\t\t//exports.goToStats = createGoToHandler(\"stats\");\n\t";
        temp4.LineNumber = 2;
        temp4.FileName = "MainView.ux";
        temp4.SourceLineNumber = 2;
        temp4.SourceFileName = "MainView.ux";
        temp5.SourceLineNumber = 34;
        temp5.SourceFileName = "MainView.ux";
        temp6.SourceLineNumber = 36;
        temp6.SourceFileName = "MainView.ux";
        temp6.Children.Add(temp);
        temp6.Children.Add(temp1);
        temp6.Children.Add(router);
        temp6.Children.Add(temp11);
        temp.SourceLineNumber = 38;
        temp.SourceFileName = "MainView.ux";
        temp.Nodes.Add(temp7);
        temp.Bindings.Add(temp8);
        temp7.SourceLineNumber = 39;
        temp7.SourceFileName = "MainView.ux";
        temp2.SourceLineNumber = 38;
        temp2.SourceFileName = "MainView.ux";
        temp1.SourceLineNumber = 41;
        temp1.SourceFileName = "MainView.ux";
        temp1.Nodes.Add(temp9);
        temp1.Bindings.Add(temp10);
        temp9.SourceLineNumber = 42;
        temp9.SourceFileName = "MainView.ux";
        temp3.SourceLineNumber = 41;
        temp3.SourceFileName = "MainView.ux";
        router.Name = __selector1;
        router.SourceLineNumber = 45;
        router.SourceFileName = "MainView.ux";
        temp11.DefaultPath = "SignIn";
        temp11.SourceLineNumber = 48;
        temp11.SourceFileName = "MainView.ux";
        temp11.Templates.Add(SignIn);
        temp11.Templates.Add(Device);
        temp11.Templates.Add(schedule);
        temp11.Templates.Add(settings);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "router";
}
