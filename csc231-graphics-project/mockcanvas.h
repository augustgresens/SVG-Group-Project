/*
Victoria Miller
CSC231-graphics-project
10/19/2022
*/

#pragma once
#include "canvas.h"
#include <iostream>

class MockCanvas : public Canvas {
    public:
        void draw_line (Position start, Position end, Style style) override;
    
        void draw_ellipse (Position center, Position radii, Style style) override;
};