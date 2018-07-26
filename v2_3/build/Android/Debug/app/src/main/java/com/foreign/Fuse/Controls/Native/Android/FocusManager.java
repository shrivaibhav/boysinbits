package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class FocusManager
{
    static void debug_log(Object message)
    {
        android.util.Log.d("v2", (message==null ? "null" : message.toString()));
    }

    public static Object GetContext133(final Object viewHandle)
    {
        return ((android.view.View)viewHandle).getContext();
    }
    
    public static Object GetWindowToken134(final Object viewHandle)
    {
        return ((android.view.View)viewHandle).getWindowToken();
    }
    
    public static boolean HasFocus135(final Object viewHandle)
    {
        return ((android.view.View)viewHandle).hasFocus();
    }
    
    public static void RequestRootViewFocus136(final Object viewHandle)
    {
        ((android.view.View)viewHandle).getRootView().requestFocus();
    }
    
}
