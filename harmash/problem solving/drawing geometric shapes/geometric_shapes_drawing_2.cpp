#include "geometric_shapes_drawing_2.h"
#include "geometric_shapes_drawing_1.h"

#include <iostream>
    
namespace geometric_shapes_drawing_2
{
    /*
    * Function: drawColumnStars
    * ---------------------------
    * Draws a specified number of stars in each line, with the number of lines specified.
    * Each line contains a fixed number of stars, and leading spaces are added for alignment.
    *
    * numberLines: The total number of lines to draw.
    * numberStars: The number of stars to draw in each line.
    * example:-
    *  *****
    *   *****
    *    *****
    *     *****
    *      *****
    */
    void drawColumnStars(int numberLines, int numberStars)
    {
        for (int line = 1; line <= numberLines; line++)
        {
            for (int space = 0; space < line; space++)
            {
                std::cout << " ";
            }
            for (int star = 0; star < numberStars; star++)
            {
                std::cout << "*";
            }
            
            
            std::cout << std::endl;
        }
    }


    bool isOdd(int number)
    {
        return number%2 != 0;
    }

    
    void drawTriangle(int numberLines)
    {
        if (!isOdd(numberLines) || numberLines <= 0)
        {
            return;
        }
        for (int line = 1; line <= numberLines; line++)
        {
            for (int space = 0; space < (numberLines - line); space++)
            {
                std::cout << " ";
            }
            for (int star = 0; star < (2 * line -1) ; star++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }



    void drawReversedTriangle(int numberLines)
    {
        if (!isOdd(numberLines) || numberLines <= 0)
        {
            return;
        }
        
        for (int line = 0; line < numberLines; line++)
        {
            for (int space = numberLines - line ; space < numberLines; space++)
            {
                std::cout << " ";
            }
            for (int star = (2 * (numberLines - line) -1) ; star > 0; star--)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
    }


    void drawRightHeadTriangle(int numberLines)
    {
        if (!isOdd(numberLines) || numberLines <= 0)
        {
            return;
        }
        geometric_shapes_drawing_1::drawLeftAlignedIncreasingStars(numberLines);
        geometric_shapes_drawing_1::drawLeftAlignedDecreasingStars(numberLines - 1);
    }

    void drawLeftHeadTriangle(int numberLines)
    {
        if (!isOdd(numberLines) || numberLines <= 0)
        {
            return;
        }

        geometric_shapes_drawing_1::drawRightAlignedIncreasingStars(numberLines);
        geometric_shapes_drawing_1::drawRightAlignedDecreasingStars(numberLines);

    }
}
