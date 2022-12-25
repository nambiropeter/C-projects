# include <stdio.h>

void main()
{
    printf("The numbers entered in the program will go through mathematical operation respective of how they are entered\n");

    float inum1,inum2,sum,difference,divident,multiple;


    printf("Enter first number:\n");
    scanf("%f", &inum1);
    printf("Enter second number:\n");
    scanf("%f", &inum2);

    sum=inum1 + inum2;
    difference=inum1 - inum2;
    divident=inum1/inum2;
    multiple=inum1 * inum2;

    printf("\nAddition: %f + %f = %f\n", inum1,inum2,sum);
    printf("Subtaraction: %f - %f = %f\n", inum1,inum2,difference);
    printf("Division: %f/%f = %f\n", inum1,inum2,divident);
    printf("Multiplication: %f * %f = %f\n", inum1,inum2,multiple);





}
