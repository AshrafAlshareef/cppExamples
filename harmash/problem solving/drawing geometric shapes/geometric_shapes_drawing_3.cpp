#include "geometric_shapes_drawing_3.h"
#include "geometric_shapes_drawing_2.h"
#include <iostream>

namespace geometric_shapes_drawing_3
{
    
void drawEmptyRhombusShape(int numberLines, const char* emptySignal, const char* borderSignal)
{
    // geometric_shapes_drawing_2::drawTriangle(numberLines);

    if (!geometric_shapes_drawing_2::isOdd(numberLines) || numberLines <= 0)
        {
            return;
        }
    for (int line = 1; line <= numberLines; line++)
    {
        for (int space = 0; space < (numberLines - line); space++)
        {
            std::cout << emptySignal;
        }
        for (int star = 0; star < (2 * line -1) ; star++)
        {
            if (star == 0 || star ==(2 * line -2))
            {
                std::cout << borderSignal;
            }
            else
            {
                std::cout << " ";
            }            
        }
        for (int space = 0; space < (numberLines - line); space++)
        {
            std::cout << emptySignal;
        }
        std::cout << std::endl;
    }

    for (int line = 1; line < numberLines; line++)
    {
        for (int space = numberLines - line ; space < numberLines; space++)
        {
            std::cout << emptySignal;
        }
        for (int star = (2 * (numberLines - line) -1) ; star > 0; star--)
        {
            if (star == (2 * (numberLines - line) -1) || star == 1)
            {
                std::cout << borderSignal;
            }
            else
            {
                std::cout << " ";
            }
        }
        for (int space = numberLines - line ; space < numberLines; space++)
        {
            std::cout << emptySignal;
        }
        std::cout << std::endl;
    }
}

void drawRectangle(int height, int width)
{
    if (height <= 1 || width <= 1)
    {
        return;
    }

    for (int stars = 0; stars < width; stars++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;

    for (int line = 0; line < height -2; line++)
    {
        for (int stars = 0; stars < width; stars++)
        {
            if (stars == 0 || stars == width -1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
            
        }
        std::cout << std::endl;
    }
    
    for (int stars = 0; stars < width; stars++)
    {
        std::cout << "*";
    }
    std::cout << std::endl;
}

}
