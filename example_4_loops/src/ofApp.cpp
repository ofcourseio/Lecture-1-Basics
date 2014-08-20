#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    //start with a while loop and a counter
    cout << "------------while loop and a counter" << endl;
    int counter = 0;
    while (counter < 5){
        cout << "counter = " << counter << endl;
        counter++;
    }
    cout << endl << endl;
    
    //a for loop is a more concise and expressive way of writing a while loop with a counter
    //here are two for loops with slighty different conditions
    cout << "------------for (int i = 0; i < 5; i++)" << endl;
    for (int i = 0; i < 5; i++){
        cout << "i = " << i << endl;
    }
    cout << endl;
    
    cout << "------------for (int i = 0; i <= 5; i++)" << endl;
    for (int i = 0; i <= 5; i++){
        cout << "i = " << i << endl;
    }
    cout << endl;
    
    //a for loop with a descending counter
    cout << "------------for (int i = 5; i > 0; i--)" << endl;
    for (int i = 5; i > 0; i--){
        cout << "i = " << i << endl;
    }
    cout << endl;
    
    //a for loop with an increment greater than 1
    cout << "------------for (int i = 0; i < 5; i+=2)" << endl;
    for (int i = 0; i < 5; i+=2){
        cout << "i = " << i << endl;
    }
    cout << endl;
    
    cout << "------------for (int i = 0; i <= 5; i+=2)" << endl;
    for (int i = 0; i <= 5; i+=2){
        cout << "i = " << i << endl;
    }
    cout << endl;
    
    //a floating point counter
    cout << "------------for (float f = 0.0f; f < 0.5; f+=0.1)" << endl;
    for (float f = 0.0f; f < 0.5; f+=0.1){
        cout << "f = " << f << endl;
    }
    cout << endl;
    
    //a for loop where the counter decreases in a non-linear way
    cout << "------------for (float f = 1.0f; f > 0.1; f*=0.5)" << endl;
    for (float f = 1.0f; f > 0.1; f*=0.5){
        cout << "f = " << f << endl;
    }
    cout << endl << endl;
    
    cout << "------------a for loop within a for loop" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "i = " << i << " | j = " << j << endl;
        }
    }
    cout << endl;
    
    cout << "------------for loop inception!!!!!!" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                cout << "i = " << i << " | j = " << j << " | k = " << k << endl;
            }
        }
    }
    cout << endl;


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
