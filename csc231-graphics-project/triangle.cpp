/* Caleb Economy
    CSC231-graphics-project
    10/21/2022
*/

#include "triangle.h"

#include <iostream>

#include "line.h"
#include "mockcanvas.h"

Triangle::Triangle(Position pt1, Position pt2, Position pt3)
    : pt1{pt1},
      pt2{pt2},
      pt3{pt3},
      l1{pt1, pt2},
      l2{pt2, pt3},
      l3{pt3, pt1} {
}  // Triangle taking in 3 points and drawing lines between them each

void Triangle::draw(Canvas& c) {
    /*c.draw_line(pt1, pt2, style);
      c.draw_line(pt2, pt3, style);
      c.draw_line(pt3, pt1, style); */
    l1.draw(c);  // l = line
    l2.draw(c);
    l3.draw(c);
}

void Triangle::shift(int offset, std::string direction) {
    if (direction == "right" ||
        direction == "left") {  // offset is the integer to shift the points in
                                // a given (string) direction
        if (direction == "left") {
            offset = -offset;  // offset is negative to shift to the left
        }
        pt1.x += offset;
        pt2.x += offset;
        pt3.x += offset;
    } else if (direction == "up" || direction == "down") {
        if (direction == "down") {
            offset = -offset;  // offset is negative to shift downwards
        }
        pt1.y += offset;
        pt2.y += offset;
        pt3.y += offset;
    } else {
        std::cout << direction
                  << " is not a valid direction. Please enter right, left, up, "
                     "or down.\n";
    }

    l1.set_line(pt1, pt2);
    l2.set_line(pt2, pt3);
    l3.set_line(pt3, pt1);
}