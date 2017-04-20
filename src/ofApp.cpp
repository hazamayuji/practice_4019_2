#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    /*
    ofBackground(255,255,255);
    ofSetColor(0,0,0);
    
    /*
    soundplayer.load("sun.mp3");
    soundplayer.setLoop(true);
    soundplayer.setVolume(1.0);
    soundplayer.play();
     */
    
    //soundStream.setup(this, 0, 1, 44100, 256, 4);
    
    video.initGrabber(ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
    /*
    curVol = curVol * 2000;
    
    volume = ofSoundGetSpectrum(1);
    size_circle = volume[0] * 1300;
     */
    
    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, curVol);
    //ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, size_circle);
    
    video.draw(0,0);
}

//--------------------------------------------------------------
void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    curVol = 0.0;
    for(int i = 0; i < bufferSize; i++){
        curVol += input[i]*input[i];
    }
    curVol /= bufferSize;
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
