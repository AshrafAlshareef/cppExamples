#pragma once

namespace geometric_shapes_drawing_3
{
/*
    * Draws an empty rhombus shape with a specified number of lines.
    * The border is represented by `borderSignal`, and the empty spaces
    *  * are represented by `emptySignal`.
    * 
    *  Parameters:
    * - int numberLines: Total number of lines (should be odd for symmetry).
    * - const char* emptySignal: Character(s) for empty spaces (default: " ").
    * - const char* borderSignal: Character(s) for the border (default: "*").
    * example:-
    *     *
    *    * *
    *   *   *
    *  *     *
    * *       *
    *  *     *
    *   *   *
    *    * *
    *     *  
    */
    void drawEmptyRhombusShape(int numberLines, const char* emptySignal =" ", const char* borderSignal ="*");


/*
 * Draws a rectangle with specified height and width using asterisks (*) 
 * for the border and empty spaces inside.
 *
 * Parameters:
 * - int height: The height of the rectangle.
 * - int width: The width of the rectangle.
* example:-
* ***************
* *             *
* *             *
* *             *
* *             *
* ***************
*
*/
    void drawRectangle(int height, int width);

} // geometric_shapes_drawing_3
