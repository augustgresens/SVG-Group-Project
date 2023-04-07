/*  Charley Fleek, Nikolai Breimon, and Victoria Miller
    CSC231-graphics-project
    10/19/22*/
#pragma once

// Cartesian coordinates
class Position {
public:
    double x{1}, y{1};
    double canvas_height{1000};
    double y_image(); //converts y to image coordinate systems
};
