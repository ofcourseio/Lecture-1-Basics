#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key >= 48 && key <= 57) {
        cout << "key pressed was a number" << endl;
    }
    else if (key >= 65 && key <= 90) {
        cout << "key pressed was an uppercase letter" << endl;
    }
    else if (key >= 97 && key <= 122) {
        cout << "key pressed was a lowercase letter" << endl;
    }
    
    switch (key){
        case OF_KEY_UP:
            cout << "up key was pressed" << endl;
            break;
            
        case OF_KEY_DOWN:
            cout << "down key was pressed" << endl;
            break;
            
        case OF_KEY_LEFT:
            cout << "left key was pressed" << endl;
            break;
            
        case OF_KEY_RIGHT:
            cout << "right key was pressed" << endl;
            break;
    }
    
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
    if (y < ofGetHeight() * 0.5) {
        cout << "Mouse was clicked in the top half of the window" << endl;
    }
    else {
        cout << "Mouse was clicked in the bottom half of the window" << endl;
    }
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
