#include <stdio.h>
int num;
void displaymenu()
{
    printf("1.Get number.\n");
    printf("2Determine if number is even or odd\n");
    printf("3.Determine if number is positive or negative\n");
    printf("4.Determine how many digits are in the number\n");
    printf("5.Exit\n");
    return 0;


}
int x;
int get_input(getinput)
{
    printf("Enter number\n");
    scanf("%d", & x);
    printf("The number you have entered is %d\n", x);
    return x;
}



int oddeven()
{
 if(x%2==0)
 {
     printf("the number is even");
 }
 else{
    printf("The number is odd");
    return 0;
 }
}
void ispos()
{
    if(x<0)
    {
        printf("number is negative");
    }
    else{
        printf("number is positive");
    }
    return 0;
}
int count;
void no_digits()
    {

        while(x>0)
        {
            x=x/10;
            count++;

        }
         printf("The number of digits is %d", count);

    }

void main()
{
    int num;

    displaymenu();

 printf("Choose the number in the menu\n");
    scanf("%d" , & num);



    switch(num)
{

case 1:
    get_input();

    break;

case 2:
    get_input();
    oddeven();
    break;

case 3:
    get_input();
    ispos();
    break;

case 4:
    get_input();
    no_digits();
    break;

case 5:
    printf("You have successfully exited");
    break;

default:
    printf("You have picked an invalid number");
    break;
}

}
