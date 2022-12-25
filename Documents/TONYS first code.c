#include <stdio.h>

void main()
{
    char switchchopp;
    int num1,num2,total,product,difference;
    printf("Select an option\n A:Addition\n B:Multiplictaion \n C:Subtraction\n ");

    switchchopp=getchar();
    switch(switchchopp)
{
        case'A':
         printf("Addition\n");
        printf("Enter number 1\n");
        scanf("%d", &num1);
        printf("Enter number 2\n");
        scanf("%d", & num2);
         total=num1+num2;
        printf("Total=%d",total);
        break;

    case 'B':
        printf("Multiplication\n");
         printf("Enter number 1\n");
        scanf("%d", &num1);
        printf("Enter number 2\n");
        scanf("%d", & num2);
        product=num1*num2;
        printf("Product=%d",product);
        break;

    case 'C':
        printf("Subtraction\n");
        printf("Enter number 1\n");
        scanf("%d", &num1);
        printf("Enter number 2\n");
        scanf("%d", & num2);
        difference=num1-num2;
        printf("difference=%d",difference);

        break;

    default:
        printf("Invalid character");


    }
}

