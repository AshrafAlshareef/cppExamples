#include <iostream>
#include "geometric_shapes_drawing_2.h"

// test for geometric_shapes_drawing_1
// int main()
// {
//     int lineNumbers = 5; 
//     drawLeftAlignedIncreasingStars(lineNumbers);
//     drawLeftAlignedDecreasingStars(lineNumbers);
//     drawRightAlignedIncreasingStars(lineNumbers);
//     drawRightAlignedDecreasingStars(lineNumbers);
//     drawColumnStars(lineNumbers, 2 /*Columns*/);
//     system("pause");
//     return 0;
// }


// test for geometric_shapes_drawing_2
int main()
{
    int lineNumbers = 9;
    int numberStars = 5;
    geometric_shapes_drawing_2::drawColumnStars(lineNumbers, numberStars);
    geometric_shapes_drawing_2::drawTriangle(lineNumbers);
    geometric_shapes_drawing_2::drawReversedTriangle(lineNumbers);
    geometric_shapes_drawing_2::drawRightHeadTriangle(lineNumbers);
    geometric_shapes_drawing_2::drawLeftHeadTriangle(lineNumbers);
    system("pause");
    return 0;
}
