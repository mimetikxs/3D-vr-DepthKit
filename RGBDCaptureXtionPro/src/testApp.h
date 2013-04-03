#pragma once

#include "ofMain.h"
#include "ofxDepthImageRecorder.h"
#include "ofxMSAInteractiveObjectDelegate.h"
#include "ofxCvCheckerboardPreview.h"
#include "ofxTimeline.h"
#include "ofxTLDepthImageSequence.h"
#include "ofxGameCamera.h"
#include "ofxDepthImageProvider.h"
#include "ofxRGBDCaptureGui.h"

class testApp : public ofBaseApp {

  public:
	
	void setup();
	void update();
	void draw();

	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	void exit();
	
	ofxRGBDCaptureGui captureGui;
    
};
