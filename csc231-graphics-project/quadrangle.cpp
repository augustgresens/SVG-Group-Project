/*
Peter Hermanson
CSC231-graphics-project
10/21/2022
*/

#include "quadrangle.h"

#include <iostream>

#include "line.h"
#include "position.h"
#include "shape.h"

Quadrangle::Quadrangle(Position pt1, Position pt2, Position pt3, Position pt4)
    : pt1{pt1},
      pt2{pt2},
      pt3{pt3},
      pt4{pt4},
      l1{pt1, pt2},
      l2{pt2, pt3},
      l3{pt3, pt4},
      l4{pt4, pt1} {}

// override function for Shape class
void Quadrangle::draw(Canvas& c) {
    l1.draw(c);
    l2.draw(c);
    l3.draw(c);
    l4.draw(c);
}

// override function for Shape class
void Quadrangle::shift(int offset, std::string direction) {
    if (direction == "right" || direction == "left") {
        if (direction == "left") {
            offset = -offset; // sets offest to negative for left shift
        }
        pt1.x += offset;
        pt2.x += offset;
        pt3.x += offset;
        pt4.x += offset;
    } else if (direction == "up" || direction == "down") {
        if (direction == "down") {
            offset = -offset; //set offset to negative for down shift
        }
        pt1.y += offset;
        pt2.y += offset;
        pt3.y += offset;
        pt4.y += offset;
    } else {
        // outputs error message if direction is not up, down, left, right
        std::cout << direction
                  << " is not a valid direction. Please enter right, left, up, "
                     "or down.\n";
    }

    // uses the Line setter function to reset the lines of the shape
    l1.set_line(pt1, pt2);
    l2.set_line(pt2, pt3);
    l3.set_line(pt3, pt4);
    l4.set_line(pt4, pt1);
}