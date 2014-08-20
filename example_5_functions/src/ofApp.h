#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();
    
    //a funtion that returns a value
    int add(int a, int b);
    
    //a function that modifies a value
    void add(int a, int b, int &c);
 
    //functions to break up a complicated structure
    void loopception();
    void innerLoop(int i);
    void innerInnerLoop(int i, int j);


    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
		
};
