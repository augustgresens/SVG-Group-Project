/*Charley Fleek
    CSC231-graphics-project
    10/21/22*/

#include "circle.h"

#include "mockcanvas.h"
#include "position.h"
#include "shape.h"

Circle::Circle(Position center, Position radii)
    : center{center}, radii{radii} {}

void Circle::draw(Canvas& c) {
    c.draw_ellipse(center, radii, style);
}
void Circle::shift(int offset, std::string direction) {
    if (direction == "right" || direction == "left") {
        if (direction == "left") {
            offset = -offset;
        }
        center.x += offset;
    } else if (direction == "up" || direction == "down") {
        if (direction == "down") {
            offset = -offset;
        }
        center.y += offset;
    } else {
        std::cout << direction
                  << " is not a valid direction. Please enter right, left, up, "
                     "or down.\n";
    }
}