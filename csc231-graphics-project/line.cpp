/*
Peter Hermanson
CSC231-graphics-project
10/19/2022
*/

#include "line.h"

#include <iostream>

#include "mockcanvas.h"
#include "position.h"
#include "shape.h"

Line::Line(Position pt1, Position pt2) : pt1{pt1}, pt2{pt2} {}

void Line::set_line(Position x, Position y) {
    pt1 = x;
    pt2 = y;
}

// override function for Shape class
void Line::draw(Canvas& c) {
    c.draw_line(pt1, pt2, style);
}

// override function for Shape class
void Line::shift(int offest, std::string direction) {
    if (direction == "right" || direction == "left") {
        if (direction == "left") { offset = -offset; } // sets offest to negative for left shift
        pt1.x += offset;
        pt2.x += offset;
    } else if (direction == "up" || direction == "down") {
        if (direction == "down") { offset = -offset; } //set offset to negative for down shift
        pt1.y += offset;
        pt2.y += offset;
    } else {
        // outputs error message if direction is not up, down, left, right
        std::cout << direction << 
                  " is not a valid direction. Please enter right, left, up, or down.\n";
    }
}
