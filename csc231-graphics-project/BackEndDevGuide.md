<!-- August Gresens -->
# Graphics Project

## Backend Developer Guide

### How to add a new shape to draw

In the canvas.h file, add a void function in the Canvas class to draw the desired shape.  For example, a draw ellipse function is used.
```c++
class Canvas {
public:
    virtual void draw_ellipse(Position center, Position radii, Style style) = 0;
};
```
In the svg.h file, add a matching void function in the SVG class to draw the desired shape.
```c++
class SVG : public Canvas {
public:
    void draw_ellipse(Position center, Position radii, Style style) override;
};
```
When constructing the SVG() class, the std::string total_file has initial information placed into it that defines the size of the canvas to be drawn here.

```cpp
 set_key_value_pair(
            "viewBox",
            std::to_string(0) + " " + std::to_string(0) + " " +
            std::to_string(1000) + " " + std::to_string(1000))
```

This limits the canvas to 1000x1000, so if you want to make a different canvas, the values can be modified. 
### Positions
To use the Position class, the user must set two numbers (x and y) that will be used as coordinates in the form of an ordered pair. 

### Drawing in SVG
In the svg.cpp class, to define the function, the goal of the SVG for an ellipse function is to end up like `<ellipse cx="100" cy="50" rx="100" ry="50" >` and to do that you wrap command which wraps the whole line of SVG in < + />. Inside the wrap command you write in quotations the SVG element that is desirable to use.  After concatenating, you put the parameters that the svg element's template uses, all inside a `set_key_value_pair`.  To do this, hardcode the name of the parameter, and set it equal to the chosen value. All of this is added to the total_file string for future generation.
```c++
void SVG::draw_ellipse(Position center, Position radii, Style style) {
    total_file += wrap_command("ellipse " +
        set_key_value_pair("cx", std::to_string(center.x)) + " " +
        set_key_value_pair("cy", std::to_string(center.y_image())) + " " +
        set_key_value_pair("rx", std::to_string(radii.x)) + " " +
        set_key_value_pair("ry", std::to_string(radii.y_image())));
}
```
### Saving
When one desires to save a file to output in the svg class, one will use the save(Filename) function to make the file with Filename.svg. It does this by adding the end tag for all svg files then outputting all saved information to a file stream. Save can be used as many times as the user wants (auto_save sounds like a good feature right about now)


### Potential Shapes
In order to make new functions in the svg class, see this link as to how svg works in general. https://developer.mozilla.org/en-US/docs/Web/SVG/Tutorial 

Some examples of utilizing this would be using things like paths, or making dedicated shapes like rectangles or even polygons with specified coordinates for each corner.
