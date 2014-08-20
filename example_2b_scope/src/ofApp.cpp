#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    i = 10;
    cout << "ofApp scope" << endl << "i = " << i << endl << endl;
    
    int i = 20;
    cout << "setup() scope" << endl << "i = " << i << endl << endl;
    
    
    cout << "for loop scope" << endl;
    for (int i = 0; i < 2; i++){
        cout << "i = " << i << endl;
    }
    cout << endl;
    
    cout << "setup() scope" << endl << "i = " << i << endl << endl;
}

//--------------------------------------------------------------
void ofApp::exit(){
    cout << "ofApp scope" << endl << "i = " << i << endl << endl;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
