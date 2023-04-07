/*Charley Fleek
    CSC-231-graphics-project
    10/26/2022*/

#include "position.h"

//takes cartesian coordinates, shifts them to the top, and inverts them to become image coordinates.
double Position::y_image(){
    return canvas_height - y;
}