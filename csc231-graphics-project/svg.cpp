/*
August Gresens, Nikolai Breimon, and Victoria Miller
CSC231-graphics-project
10/19/2022
*/

#include "svg.h"

#include <fstream>
#include <iostream>

SVG::SVG() {
    total_file = //needed on every svg file to work
        '<' + set_key_value_pair("svg version", "1.1") + '\n' +
        set_key_value_pair(
            "viewBox",
            std::to_string(0) + " " + std::to_string(0) + " " +
            std::to_string(1000) + " " + std::to_string(1000)) + " " +
        set_key_value_pair("xmlns", "http://www.w3.org/2000/svg") + '>' + '\n';
    /*<svg version="1.1"
     xmlns="http://www.w3.org/2000/svg"> is the output here */
}

//every svg line that involves drawing something must be wrapped.
std::string wrap_command(std::string to_wrap) {
    std::string wrapped_text = "<" + to_wrap + " />";
    return wrapped_text;
}
//svg needs key value pairs wrapped in quotes
std::string quote_wrap(std::string to_wrap) {
    return "\"" + to_wrap + "\"";

    //output of quote_wrap("something") = "something" (quotes exist in the output, not just showing it is a string)
}

//requestor is the type of data, and information is a valid value of data of that type.
std::string set_key_value_pair(std::string requestor, std::string information) {
    return requestor + "=" + quote_wrap(information);

    //output for a set_key_value_pair("Hi", "There") looks like this:
    // Hi = "There"
}

// generates an svg file with specified filename and any needed svg text to make the file work, and can be used multiple times (same file name will overwrite)
void SVG::save(std::string& filename) {
    std::string to_save =  "\n</svg>\n"; //needed to end a svg
    std::ofstream file_maker{filename + ".svg"};
    file_maker << total_file << to_save;
}

//writes the svg command and adds it to total_file to draw the specified ellipse. Must be saved to use svg.
//all positions have user edited cartesian coordinates. This function uses y_image() in position to shift to image coordinates for svg.
void SVG::draw_ellipse(Position center, Position radii, Style style) {
    total_file += //adds ellipse to the end of total file string
    wrap_command("ellipse " +
                 set_key_value_pair("cx", std::to_string(center.x)) + " " +
                 set_key_value_pair("cy", std::to_string(center.y_image())) + " " +
                 set_key_value_pair("rx", std::to_string(radii.x)) + " " +
                 set_key_value_pair("ry", std::to_string(radii.y_image())) + " " + 
                 set_key_value_pair("stroke", style.color) + " " + 
                 set_key_value_pair("stroke-width", std::to_string(style.width)) + " " + 
                 set_key_value_pair("fill", style.fill));
}
//writes the svg command and adds it to total_file to draw the specified line segment. Must be saved to use svg.
// Start consists of an x and y coordinate and end consists of a different x and y coordinate
// Draws a line from start to end position, with style included as color and width
void SVG::draw_line(Position start, Position end, Style style) {
    total_file += //adds line to the end of the total file string
    wrap_command("line " + set_key_value_pair("x1", std::to_string(start.x)) +
                 " " + set_key_value_pair("x2", std::to_string(end.x)) + " " +
                 set_key_value_pair("y1", std::to_string(start.y_image())) + " " +
                 set_key_value_pair("y2", std::to_string(end.y_image())) + " " + 
                 set_key_value_pair("stroke", style.color) + " " + 
                 set_key_value_pair("stroke-width", std::to_string(style.width)));
}