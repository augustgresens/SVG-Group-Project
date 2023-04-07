/**
 * @file mockcanvas.cpp
 * @author Nikolai Breimon
 * @date 2022-10-21
 */

#include "mockcanvas.h"

void MockCanvas::draw_line(Position start, Position end, Style style){

    std::cout<<"You have drawn a line at (" << start.x << "," << start.y
    << ") and ends at (" << end.x << "," << end.y << "). It has a thickness of "
    << style.width << " and this color: " << style.color << '\n';
}

void MockCanvas::draw_ellipse(Position center, Position radii, Style style){
    std::cout<<"You have drawn an ellipse centered at (" << center.x << "," << center.y
    << ") and has radii of (" << radii.x << "," << radii.y << "). It has a border thickness of "
    << style.width << " and this color: " << style.color << '\n';
}