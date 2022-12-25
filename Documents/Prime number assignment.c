#include <stdio.h>

void main()
{
     int inum1;
     printf("Please enter a number:\n");
     scanf("%d",& inum1);



    if(inum1==2)
    {
        printf("That is a prime number");

    }
    if(inum1==3)
    {
        printf("That is a prime number");

    }
    if(inum1==5)
    {
        printf("That is a prime number");

    }
    if(inum1==7)
    {
        printf("That is a prime number");

    }
    else if(inum1%2==0 && inum1!=2)
    {
        printf("That is not a prime number");
    }

    else if(inum1%3==0 && inum1!=3)
    {
        printf("That is not a prime number");
    }
    else if(inum1%5==0 && inum1!=5)
    {
        printf("That is not a prime number");
    }
    else if(inum1%7==0 && inum1!=7)
    {
        printf("That is not a prime number");
    }
    else if(inum1%9==0)
    {
        printf("That is not a prime number");
    }
    else if(inum1==1)
    {
        printf("That is not a prime number");
    }
    else

        printf("\nThat is a prime number");

    }




