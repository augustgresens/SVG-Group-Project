# Graphics Project

## Backend User Guide

Steps for using SVG class:

- create instance of an SVG() class
- create Positions (and set values)that fit the line/ellipse you desire
- make a style that is suitable (usable colors are lower case words of common colors like "red" or "blue" or the default "black"). A more extensive list of colors can be found at https://www.december.com/html/spec/colorsvg.html
- use the svg class's draw_line() and draw_ellipse() functions to draw what you can come up with (but beware we specified a canvas size of 1000x1000, so no negative numbers or no numbers greater than 1000)
- use save() when you have finished (FILE WILL NOT GENERATE IF YOU DO NOT SAVE)
- compile code necessary using the canvas library in CMakeLists
- Run program you made, and it will generate the svg file in the same directory as your executable
- Open svg file that you generated in a browser, and it will show the shape you have made so long as it is valid.