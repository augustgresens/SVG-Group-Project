/*
August Gresens and Nikolai Breimon
CSC231-graphics-project
10/19/2022
*/

#pragma once
#include <string>

class Style {
public:
    //default values selected based on svg's default values
    std::string color{"black"}; // color of bordering lines on shapes or any lines drawn
    std::string fill{"black"}; // inside of circles/ellipses/future shapes
    double width{5}; //width of all line strokes when drawing
};