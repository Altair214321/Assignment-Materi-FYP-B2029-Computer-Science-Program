// C program to calculate the area of a rectangle with user input
#include <stdio.h>

int main() {

    float length, width, area;
    
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);

    area = length * width;
    printf("Area of rectangle: %.2f\n", area);
    
    return 0;
}

// pseudo-code
//
// ALGORITHM CalculateRectangleArea
//     DECLARE length, width, area AS FLOAT
//
//     PRINT "Enter the length of rectangle: "
//     INPUT length
//     PRINT "Enter the width of rectangle: "   
//     INPUT width
//     SET area = length * width
//
//     PRINT "Area of rectangle: " + area
// END ALGORITHM