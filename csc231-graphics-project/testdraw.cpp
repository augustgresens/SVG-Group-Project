/*
Victoria Miller, Nikolai Breimon
CSC231-graphics-project
10/26/2022
*/

#include "svg.h"
#include "style.h"
#include <iostream>

int main() {
    //SVG helper function tests
    std::string word{"hello"};
    std::string test1 = wrap_command(word);
    std::string test2 = quote_wrap(word);
    std::string filename = "testoutput";

    std::cout << test1;
    std::cout << "\n";
    std::cout << test2;
    std::cout << "\n";

    //true canvas tests
    Position test_coordinates, test2_coordinates, radii;
    Style style;

    style.color = "red";
    style.width = 50;
    style.fill = "green";

    test_coordinates.x = 50;
    test_coordinates.y = 50;
    test2_coordinates.x = 500;
    test2_coordinates.y = 500;
    radii.x = 500;
    radii.y = 500;


    SVG drawer = SVG{};

    drawer.draw_ellipse(test2_coordinates, radii, style);
    drawer.draw_line(test_coordinates, test2_coordinates, style);
    drawer.save(filename);

}