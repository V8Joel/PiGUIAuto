package com.example.androidservice;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.util.Log;
import org.qtproject.qt.android.bindings.QtService;

public class QtAndroidService extends QtService {
    private static final String TAG = "QtAndroidService";

    @Override
    public void onCreate() {
        super.onCreate();
        Log.i(TAG, "Creating Service");
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        Log.i(TAG, "Destroying Service");
    }

    @Override
    public int onStartCommand(Intent intent, int flags, int startId) {
        int ret = super.onStartCommand(intent, flags, startId);

        launchApp();

        return ret;
    }

    private void launchApp() {
        try {
            String packageName = "cn.manstep.phonemirrorBox";
            Intent launchIntent = getApplicationContext().getPackageManager().getLaunchIntentForPackage(packageName);

            if (launchIntent != null) {
                launchIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK); // Add this flag
                getApplicationContext().startActivity(launchIntent);
            } else {
                Uri playStoreUri = Uri.parse("market://details?id=" + packageName);
                Intent playStoreIntent = new Intent(Intent.ACTION_VIEW, playStoreUri);
                playStoreIntent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK); // Add this flag
                getApplicationContext().startActivity(playStoreIntent);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
