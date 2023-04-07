/**
 * @file svg.h
 * @author Nikolai Breimon
 * @date 2022-10-24
 *
 */

#pragma once
#include "canvas.h"

class SVG : public Canvas {
public:
    SVG(); //Creates the bare minimum to write to an svg file. canvas size will be 1000 x 1000
    void draw_line(Position start, Position end, Style style) override; // writes a line in svg that will draw the specified line
    void draw_ellipse(Position center, Position radii, Style style) override; //generates a line of svg that will create the specified ellipse
    void save(std::string& filename); //generates file with desired filename in the same directory as the executable.

private:
    std::string total_file; //string containing all the information of the svg file.
};

//helper functions
std::string set_key_value_pair(std::string requestor, std::string information);
std::string quote_wrap(std::string to_wrap);
std::string set_style(Style& style);
std::string wrap_command(std::string command);