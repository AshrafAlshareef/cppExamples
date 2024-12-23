#pragma once
namespace geometric_shapes_drawing_2
{

    /*
    * Function: drawColumnStars
    * ---------------------------
    * Draws a specified number of stars in each line, with the number of lines specified.
    * Each line contains a fixed number of stars, and leading spaces are added for alignment.
    *
    * Parameters:
    *   - int numberLines: The total number of lines to draw.
    *   - int numberStars: The number of stars to draw in each line.
    *
    * Example Output (for numberLines = 5, numberStars = 5):
    *  *****
    *   *****
    *    *****
    *     *****
    *      *****
    */
    void drawColumnStars(int numberLines, int numberStars);


    /*
    * Function: isOdd
    * ---------------------------
    * Determines whether a given integer is odd.
    *
    * Parameters:
    *   - int number: The integer to check.
    *
    * Returns:
    *   - bool: True if the number is odd, false otherwise.
    */
    bool isOdd(int number);


    /*
    * Function: drawTriangle
    * ---------------------------
    * Draws a right-aligned triangle of stars with the specified number of lines.
    * Each line contains an increasing number of stars, starting from one star at the top.
    *
    * Parameters:
    *   - int numberLines: The total number of lines to draw.
    *
    * Example Output (for numberLines = 7):
    *          *
    *         ***
    *        *****
    *       *******
    *      *********
    *     ***********
    *    *************
    */
    void drawTriangle(int numberLines);

    /*
    * Function: drawReversedTriangle
    * ---------------------------
    * Draws an inverted right-aligned triangle of stars with the specified number of lines.
    * Each line contains a decreasing number of stars, starting from the maximum number of stars.
    *
    * Parameters:
    *   - int numberLines: The total number of lines to draw.
    *
    * Example Output (for numberLines = 7):
    *    *******
    *     *****
    *      ***
    *       *
    */
    void drawReversedTriangle(int numberLines);


    /*
    * Function: drawRightHeadTriangle
    * ---------------------------
    * Draws a right-headed triangle of stars, where the number of stars increases to a maximum
    * and then decreases symmetrically.
    *
    * Parameters:
    *   - int numberLines: The total number of lines to draw.
    *
    * Example Output (for numberLines = 5):
    *      *
    *     **
    *    ***
    *   ****
    *  *****
    *   ****
    *    ***
    *     **
    *      *
    */
    void drawRightHeadTriangle(int numberLines);

    /*
    * Function: drawLeftHeadTriangle
    * ---------------------------
    * Draws a left-headed triangle of stars, where the number of stars increases to a maximum
    * and then decreases symmetrically, with the triangle aligned to the left.
    *
    * Parameters:
    *   - int numberLines: The total number of lines to draw.
    *
    * Example Output (for numberLines = 5):
    *        *
    *       **
    *      ***
    *     ****
    *    *****
    *     ****
    *      ***
    *       **
    *        *
    */
    void drawLeftHeadTriangle(int numberLines);
}
