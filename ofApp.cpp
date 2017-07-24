/************************************************************
************************************************************/
#include "ofApp.h"

/************************************************************
************************************************************/

//--------------------------------------------------------------
void ofApp::setup(){
	/********************
	********************/
	ofSetWindowTitle( "test:FrameRate" );
	ofSetWindowShape( WIDTH, HEIGHT );
	
	/********************
	ofSetVerticalSync(true);
	ofSetFrameRate(xx)
		monitor refresh rateより速い値を設定してもmonitor refresh rateのそれとなる.
		
		monitor refresh rateより遅い値の場合は、ofSetFrameRate()の値が反映される。
		倍半分の制限もなし。
		例えば、
			monitor refresh rate = 60Hz
			ofSetFrameRate(50);
		などの場合、processは、50Hzで動作し、monitorのrefresh timingでprocessの内容が反映される。と言った具合のようだ。
	********************/
	ofSetVerticalSync(true);
	
	ofSetFrameRate(53);
	ofSetEscapeQuitsApp(false);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(30);
	
	char ch_Message[500];
	sprintf(ch_Message, "%5.1f\n", ofGetFrameRate());
	ofSetColor(255);
	ofDrawBitmapString(ch_Message, 10, 20);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
