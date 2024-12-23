#pragma once

namespace geometric_shapes_drawing_1
{
   /*
    * Function: drawLeftAlignedIncreasingStars
    * -------------------------------
    * Draws a right-angled triangle of stars where the number of stars 
    * in each line corresponds to the line number. The first line has 
    * one star, the second line has two stars, and so on.
    *
    * numberLines: The total number of lines to draw.
    * example:-
    * *
    * **
    * ***
    * ****
    * *****
    * 
    */
    void drawLeftAlignedIncreasingStars(int numberLines);


    /*
    * Function: drawLeftAlignedDecreasingStars
    * -------------------------------
    * 
    *
    * Draws a left-aligned triangle of stars where the number of stars 
    * in each line corresponds to the line number. The first line has 
    * the maximum number of stars, and each subsequent line has one less 
    * star.
    * 
    * numberLines: The total number of lines to draw.
    * example:-
    * *****
    * ****
    * ***
    * **
    * *
    * 
    */
    void drawLeftAlignedDecreasingStars(int numberLines);


    /*
    * Function: drawRightAlignedIncreasingStars
    * -------------------------------------------
    * Draws a right-angled triangle of stars in reverse order, where 
    * the first line has the maximum number of stars and each subsequent 
    * line has one more star.
    *
    * numberLines: The total number of lines to draw.
    * example:-
    *     *
    *    **
    *   ***
    *  ****
    * *****
    * 
    */
    void drawRightAlignedIncreasingStars(int numberLines);



    /*
    * Function: drawRightAlignedDecreasingStars
    * -------------------------------------------
    * Draws a right-aligned triangle of stars in reverse order, where 
    * the first line has the maximum number of stars and each subsequent 
    * line has one less star, with leading spaces to align the stars to 
    * the right.
    *
    * numberLines: The total number of lines to draw.
    * example:-
    * *****
    *  ****
    *   ***
    *    **
    *     *
    */
    void drawRightAlignedDecreasingStars(int numberLines);


    /*
    * Function: drawColumnStars
    * ---------------------------
    * Draws a specified number of stars in each line, aligned to the 
    * right, with the number of lines specified. Each line contains a 
    * fixed number of stars, and leading spaces are added for alignment.
    *
    * numberLines: The total number of lines to draw.
    * numberStars: The number of stars to draw in each line.
    * example:-
    *     **
    *    **
    *   **
    *  **
    * **
    */
    void drawColumnStars(int numberLines, int numberStars);
};
