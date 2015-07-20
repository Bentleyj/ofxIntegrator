#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    col = new Integrator<ofVec2f>(ofVec2f(ofGetWidth()/2, ofGetHeight()/2), 0.5, 0.5);

    ofBackground(0);
    ofSetColor(255);
    ofFill();

}

//--------------------------------------------------------------
void ofApp::update(){
    col->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofCircle(ofVec2f(col->val.x, col->val.y), 20);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    col->target(ofVec2f(x, y));
}
