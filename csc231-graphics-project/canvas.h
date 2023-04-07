/**
 * @file canvas.h
 * @author Nikolai Breimon
 * @date 2022-10-19
 * 
 */

#pragma once
#include "position.h"
#include "style.h"
#include <string>

class Canvas {
public:
    virtual void draw_line(Position start, Position end, Style style) = 0; //draws any STRAIGHT line within the canvas.
    virtual void draw_ellipse(Position center, Position radii, Style style) = 0;  // circles are just equal radii ellipses
};