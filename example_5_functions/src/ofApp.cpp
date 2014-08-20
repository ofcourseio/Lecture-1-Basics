#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    int a = 2;
    int b = 3;
    int c = 0;
  
    cout << "--------------Two ways for functions to communicate values" << endl;
    //assigning the return value of add to c;
    c = add(a, b);
    cout << "a = " << a << " b = " << b << " c = " << c << endl ;
    
    a = 10;
    b = 5;
    c = 0;
    
    //function assign the result of the calculation to c
    add(a, b, c);
    cout << "a = " << a << " b = " << b << " c = " << c << endl << endl;

    
    
    //loopception from example 4
    cout << "--------------Messy triple nested loop" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                cout << "i = " << i << " | j = " << j << " | k = " << k << endl;
            }
        }
    }
    cout << endl;
    //vs a single function call. Now we have room to work
    cout << "--------------Clean function call" << endl;
    loopception();
    
}

//--------------------------------------------------------------
int ofApp::add(int a, int b){
    return a + b;
}

//--------------------------------------------------------------
void ofApp::add(int a, int b, int &c){
    c = a + b;
}

//--------------------------------------------------------------
void ofApp::loopception(){
     for (int i = 0; i < 3; i++){
         innerLoop(i);
     }
}

//--------------------------------------------------------------
void ofApp::innerLoop(int i){
    for (int j = 0; j < 3; j++){
        innerInnerLoop(i, j);
    }
}

//--------------------------------------------------------------
void ofApp::innerInnerLoop(int i, int j){
    for (int k = 0; k < 3; k++){
        cout << "i = " << i << " | j = " << j << " | k = " << k << endl;
    }
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
