package org.toffee.rapidtouch;

import org.cocos2dx.lib.Cocos2dxActivity;
import android.os.Bundle;


public class RapidTouch extends Cocos2dxActivity {

	
	protected void onCreate( Bundle savedInstanceState ) {
		super.onCreate( savedInstanceState );
	}
	
	static {
		System.loadLibrary( "RapidTouch" );
	}
}
