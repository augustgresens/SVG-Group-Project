/* Caleb Economy
    CSC231-graphics-project
    10/21/2022
*/

#include "line.h"
#include "position.h"
#include "shape.h"

class Triangle : public Shape {
public:
    Triangle(Position pt1, Position pt2,
             Position pt3);  // Triangle needs these 3 points to draw and
                             // implement the other functions
    void draw(
        Canvas& c) override;  // Outputs the shape (triangle) onto the canvas
    void shift(int offset, std::string direction)
        override;  // Shifts triangle by the offset integer and direction

private:
    Position pt1, pt2, pt3;
    Line l1, l2, l3;
};