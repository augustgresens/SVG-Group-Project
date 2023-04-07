/*
Peter Hermanson
CSC231-graphics-project
10/19/2022
*/

#pragma once

#include "position.h"
#include "shape.h"

class Line : public Shape {
public:

    // constructs a line from 2 Positions for use in other Shape classes,
    // leverages the Position class
    Line(Position pt1, Position pt2);

    // setter function to allow other Shapes to reset lines
    void set_line(Position x, Position y);

    // outputs Line on a Canvas for use in other Shape classes
    void draw(Canvas& c) override;

    // shifts Line by the offset in the direction given
    // acceptable directions are up, down, left, right
    // not currently used by any Shape classes, but implemented
    // for future use
    void shift(int offset, std::string direction) override;

private:
    Position pt1, pt2;
};
