/*
Peter Hermanson
CSC231-graphics-project
10/21/2022
*/

#pragma once

#include "line.h"
#include "position.h"
#include "shape.h"

class Quadrangle : public Shape {
public:

    // Quadrangle constructs 4 Lines from 4 given Positions, 
    // leverages the Position and Line classes
    Quadrangle(Position pt1, Position pt2, Position pt3, Position pt4);

    // outputs quadrangle on a Canvas
    void draw(Canvas& c) override;

    // shifts quadrangle by the offset in the direction given
    // acceptable directions are up, down, left, right
    void shift(int offset, std::string direction)
        override;  

private:
    Position pt1, pt2, pt3, pt4;
    Line l1, l2, l3, l4;
};