# Graphics Project

## Frontend User Guide
*For those intrepid adventurers looking to use this program...*<br></br>

### Overview:
    A program to print your shapes, well some of your shapes, in .svg format! 
    The simple interface allows for easy expansion of shapes (see Developer's Guide).
    At the risk of over-selling, this is sure to become your one-stop-shop for all your shape needs.

### How to Create Shapes
- **Headers to include for Shapes:**
    - `shape.h`
    - `style.h`
    - `position.h`
    - `line.h` (need for any straight-line shapes)
    - Headers for any shapes the user would like to use (e.g., `circle.h`, `triangle.h`, `quadrangle.h`)
- **Implemented Shapes** 
    - Circle (_circle.h_)
        - `Circle(Position center, Postion radii)`
        - Takes two x,y coordinates as `Position` objects to construct shape
    - Triangle
        - `Triangle(Position pt1, Position pt2, Position pt3)`
        - Takes three x,y coordinates as `Position` objects to construct shape
    - Quadrangle
        - `Quadrangle(Position pt1, Position pt2, Position pt3, Position pt4)`
        - Takes four x,y coordinates as `Position` objects to construct shape<br></br>
- **All Shape Objects have the following functions**
    - `void draw(Canvas& c)`
        - This will draw the given shape on a Canvas object
    - `void shift(int offset, std::string direction)`
        - This will shift the given object by an `offset` in a `direction`
        - The `offset` is an `int` and the `direction` is a `string` and must be one of the 
        following keywords: `up`, `down`, `left`, `right` (all other input will throw an error).<br></br>
### How to output/print Shapes
- **Headers to include for outputting shapes:**
    - All Shape headers listed above
    - `svg.h` (used to output file as .svg)
    - optional: `mockcanvas.h` (used for testing `draw()` function; outputs text in terminal)
- **SVG output**
    - `SVG()` creates a canvas that can be output as a .svg file
    - How to "draw" and output:
        - `void save(std::string& filename)`
        - `filename` will be used to generate the file, which will be stored in the execution folder. 
        The .svg extension will be added automatically
- **MockCanvas output**
    - This object simply outputs into the terminal window what is to be drawn for the shape. 
    It can be used for troubleshooting or for further developer implementation.<br></br>

<br></br><br></br><br></br><br></br><br></br>
<sub>any use of this product assumes, by the user, all responsibilities; furthermore in the using 
the user implicitly and completely releases the developers, their agents, and all parties involved 
with the product, both at the time of the initial development and at any future time, completely 
and fully without exception, from any libablity that may result from direct or indirect use of said 
product, or any derivative thereof, including, but not limited to, any shape related accidents, 
mishaps, misdraws, unitending (or intended) violations of the laws of physics, etc.; furthermore 
the user of said product also implicitly agrees in their using of said product that the inital 
developers were, are, and always shall be excellent in the most [Bill and Ted's manner](https://youtu.be/-Dc6Pre77AY) imaginable  
