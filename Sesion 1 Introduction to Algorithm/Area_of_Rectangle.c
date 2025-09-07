// C program to calculate the area of a rectangle
#include <stdio.h>

int main(){
    
    int length = 5;
    int width = 3;
    int area;

    area = length * width;

    printf("The area of the ecctangle is: %d\n", area);

    return 0;
}

// pseudo-code
//
// ALGORITHM CalculateRectangleArea
//     DECLARE length, width, area AS INTEGER
//    
//     SET length = 5
//     SET width = 3
//     SET area = length * width
//    
//     PRINT "Area of rectangle: " + area
// END ALGORITHM