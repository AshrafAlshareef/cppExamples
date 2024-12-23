#include "geometric_shapes_drawing_1.h"

#include <iostream>

namespace geometric_shapes_drawing_1
{
    void drawLeftAlignedIncreasingStars(int numberLines)
    {
        for (int line = 1; line <= numberLines; line++)
        {
            for (int star = 0; star < line; star++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }   
    }

    void drawLeftAlignedDecreasingStars(int numberLines)
    {
        for (int line = numberLines; line >= 1; line--)
        {
            for (int star = 0; star < line; star++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }   
    }

    void drawRightAlignedIncreasingStars(int numberLines)
    {
        for (int line = 1; line <= numberLines; line++)
        {
            for (int space = 0; space < (numberLines - line); space++)
            {
                std::cout << " ";
            }
            for (int star = 0; star < line; star++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }   
    }


    void drawRightAlignedDecreasingStars(int numberLines)
    {
        for (int line = numberLines; line >= 1 ; line--)
        {
            for (int space = 0; space < (numberLines - line); space++)
            {
                std::cout << " ";
            }
            for (int star = 0; star < line; star++)
            {
                std::cout << "*";
            }
            std::cout << std::endl;
        }   
    }


    void drawColumnStars(int numberLines, int numberStars)
    {
        for (int line = 1; line <= numberLines; line++)
        {
            for (int space = 0; space < (numberLines - line); space++)
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
};
