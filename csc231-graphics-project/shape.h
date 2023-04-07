/* Caleb Economy
    CSC231-graphics-project
    10/19/2022
*/

#pragma once
#include "style.h"

class Canvas;

class Shape {
public:
    virtual void draw(Canvas& c) = 0;
    virtual void shift(int offset, std::string direction) = 0;

protected:
    Style style;  // Style includes color, fill, and width
    int offset;
    std::string direction;
};
