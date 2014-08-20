#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //declared and initialized
    bool b = false; // boolean, true or false, 0 or 1
    int i = 0; //integer, or whole number
    float f = 0.0f; // floating point number, or real number.
    double d = 0.0; // double precision floating point number
    char c = 'a'; // character
    string s = "a"; // string. A null terminated array of chars. Not actually a type but and object
    
    //values of vars
    cout << "-------------Values of vars" << endl;
    cout << "b = " << b << endl
    << "i = " << i << endl
    << "f = " << f << endl
    << "d = " << d << endl
    << "c = " << c << endl
    << "s = " << s << endl << endl;

    
    cout << "-------------Size of types in bytes" << endl
    << "bool " << sizeof(b) << endl
    << "int " << sizeof(i) << endl
    << "float " << sizeof(f) << endl
    << "double " << sizeof(d) << endl
    << "char " << sizeof(c) << endl
    << "string " << sizeof(s) << endl << endl;
    
    //conversion
    cout << "-------------Conversion between types" << endl;
    cout << "From bool to int" << endl;
    b = true;
    i = b;
    cout << "b = " << b << ", i = " << i << endl;
    b = false;
    i = b;
    cout << "b = " << b << ", i = " << i << endl << endl;
    
    cout << "From int to bool" << endl;
    i = 0;
    b = i;
    cout << "i = " << i << ", b = " << b << endl;
    i = 1;
    b = i;
    cout << "i = " << i << ", b = " << b << endl;
    i = 3247189;
    b = i;
    cout << "i = " << i << ", b = " << b << endl;
    i = -1;
    b = i;
    cout << "i = " << i << ", b = " << b << endl << endl;
    
    cout << "From int to float" << endl;
    i = 1;
    f = i;
    cout << "i = " << i << ", f = " << f << endl << endl;
    
    cout << "From float to int" << endl;
    f = 1.0f;
    i = f;
    cout << "f = " << f << ", i = " << i << endl;
    f = 1.9f;
    i = f;
    cout << "f = " << f << ", i = " << i << endl << endl;

    cout << "From char to int" << endl;
    c = 'a';
    i = c;
    cout << "c = " << c << ", i = " << i << endl << endl;
    
    cout << "From int to char" << endl;
    i = 107;
    c = i;
    cout << "i = " << i << ", c = " << c << endl;
    i = 0;
    c = i;
    cout << "i = " << i << ", c = " << c << endl;
    i = 127;
    c = i;
    cout << "i = " << i << ", c = " << c << endl << endl;
    
    cout << "From char to string" << endl;
    c = 'o';
    s = c;
    cout << "c = " << c << ", s = " << s << endl;
    
    //....what about from string to char?

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
