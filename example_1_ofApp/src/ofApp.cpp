#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cout << "setup" << endl;
}

//--------------------------------------------------------------
void ofApp::update(){
    cout << "---------------------------------frame " << ofGetFrameNum() << endl;
    cout << "update" << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
    cout << "draw" << endl;
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    cout << "keyPressed: " << key << endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    cout << "keyReleased: " << key << endl;
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    cout << "mouseMoved (" << x << ", " << y << ")" << endl;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    cout << "mouseDragged (" << x << ", " << y << ")" << endl;
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    cout << "mousePressed (" << x << ", " << y << ") button: " << button << endl;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    cout << "mouseReleased (" << x << ", " << y << ") button: " << button << endl;
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    cout << "windowResized (" << w << ", " << h << ")" << endl;
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    cout << "dragEvent (" << dragInfo.position.x << ", " << dragInfo.position.y << ")" << endl;
    
    for (int i = 0; i < dragInfo.files.size(); i++){
        cout << dragInfo.files[i] << endl;
    }
}


//--------------------------------------------------------------
void ofApp::exit(){
    cout << "exit" << endl;
}
