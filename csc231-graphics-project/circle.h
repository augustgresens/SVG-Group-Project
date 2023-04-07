/*Charley Fleek
    CSC231-graphics-project
    10/21/22*/
#pragma once

#include "position.h"
#include "shape.h"

class Circle : public Shape {
public:
    Circle(Position center, Position radii);
    void draw(Canvas& c) override;
    void shift(int offset, std::string direction) override;

private:
    Position center, radii;
};