#include <iostream>

#include "circle.h"
#include "line.h"
#include "mockcanvas.h"
#include "position.h"
#include "quadrangle.h"
#include "shape.h"
#include "style.h"
#include "svg.h"
#include "triangle.h"

int main() {
    try {
        Position pt1, pt2, pt3, pt4;
        pt1.x = 100;
        pt1.y = 100;
        pt2.x = 200;
        pt2.y = 200;
        pt3.x = 200;
        pt3.y = 200;
        pt4.x = 200;
        pt4.y = 100;

        /* Toggle for testing different shapes */
        // Line test{pt1, pt2};
        // Quadrangle test{pt1, pt2, pt3, pt4};
        // Triangle test{pt1, pt2, pt3};
        Circle test{pt1, pt2};

        /* Toggle between MockCanvas and SVG for testing purposes */
        // MockCanvas c;
        SVG c;

        test.draw(c);

        /* Set shift direction: up down left right */
        std::string direction = "down";
        test.shift(10, direction);
        test.draw(c);

        /* file name when testing SVG */
        std::string file_name = "circle_test";

        /* ****Toggle on when testing SVG to save file**** */
        c.save(file_name);

    } catch (std::exception& e) {
        std::cout << e.what() << '\n';
    }
}