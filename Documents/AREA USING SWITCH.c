#include <stdio.h>

void main()
{
    int INUMBER;
    float area,radius,height,length,width;
    printf("\nWhat are you calculating\n 1.Area of triangle\n 2.Area of rectangle\n 3.Area of circle\n");

    scanf("%d", & INUMBER);
    switch(INUMBER)
{
    case 1:
        printf("Area of the triangle\n");
        printf("Enter the length:\n");
        scanf("%f", &length);
        printf("Enter the height:\n");
        scanf("%f",&height);
        area=0.5*length*height;
        printf("Your area is %f",area);
        break;


        case 2:
        printf("Area of rectangle\n");
        printf("Enter the length:\n");
        scanf("%f", &length);
        printf("Enter the width:\n");
        scanf("%f", &width);
        area=length*width;
        printf("Your area is %f",area);
        break;

        case 3:
        printf("Area of a circle\n");
        printf("Enter the radius of the circle\n");
        scanf("%f", & radius);
        area= 3.14159265359 * radius*radius;
        printf("Your is area %f ",area);
        break;

        default:
            printf("\nThe character is not recognized\n");
            break;
    }




}
