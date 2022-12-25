#include <stdio.h>
int num;
int marks[4];
 int menu()
{
    printf("1.Add student details\n");
    printf("2.View student details\n");
    printf("3.Calculate the total student marks\n");
    printf("4.Calculate the average marks\n");
    printf("5.Display the unit with the highest mark\n");
    printf("6.Display the unit with the lowest mark\n");
    printf("7.Exit\n");
}
 int total(int marks[4])
 {
     for(int i=0;i<5;i++)
     {
       int total=+marks[i];
     }
     getchar();
     printf("The total marks is %d",total);
 }
  int aver()

 {
     for(int i=0;i<5;i++)
    {
        int total=+marks[i];
    }
    int average=total / 5
 }
 int sorting(int marks[4])
 {
     printf("Enter number 5 or 6 from the menu\n");
     scanf("%d",&num);
    switch(num)
    {
    case 5:
         if(marks[0]>=marks[1]&& marks[0]>=marks[2]&&marks[0]>=marks[3]&&marks[0]>=marks[4])
        {
            printf("%d",marks[0]);
        }
        else if(marks[1]>=marks[0]&& marks[1]>=marks[2]&&marks[1]>=marks[3]&&marks[1]>=marks[4])
        {
            printf("%d",marks[1]);
        }
        else if(marks[2]>=marks[0]&& marks[2]>=marks[1]&&marks[2]>=marks[3]&&marks[2]>=marks[4])
        {
            printf("%d",marks[2]);
        }
        else if(marks[3]>=marks[0]&& marks[3]>=marks[1]&&marks[3]>=marks[2]&&marks[3]>=marks[4])
                {
                    printf("%d",marks[3]);
                }
        else
            {
                printf("%d",marks[4]);
            }
            break;
    case 6:
        if(marks[0]<=marks[1]&& marks[0]<=marks[2]&&marks[0]<=marks[3]&&marks[0]<=marks[4])
        {
            printf("%d",marks[0]);
        }
        else if(marks[1]<=marks[0]&& marks[1]<=marks[2]&&marks[1]<=marks[3]&&marks[1]<=marks[4])
        {
            printf("%d",marks[1]);
        }
        else if(marks[2]<=marks[0]&& marks[2]<=marks[1]&&marks[2]<=marks[3]&&marks[2]<=marks[4])
        {
            printf("%d",marks[2]);
        }
        else if(marks[3]<=marks[0]&& marks[3]<=marks[1]&&marks[3]<=marks[2]&&marks[3]<=marks[4])
                {
                    printf("%d",marks[3]);
                }
        else
            {
                printf("%d",marks[4]);
            }
            break;
    }
 }
 void grade(int marks[4])
 {
     for(int i=0;i<4;i++)
     {
         if(marks[i]<40)
         {
             printf("%d E",marks[i]);
         }
         else if(marks[i]<50)
         {
             printf("%d D",marks[i]);
         }
         else if(marks[i]<60)
         {
             printf("%d C",marks[i]);
         }
         else if(marks[i<70])
         {
             printf("%d B",marks[i]);
         }
         else
         {
             printf("%d A", marks[i]);
         }
     }
 }
void main()
{int number;
int number2;
 char name[80];
 char regno[90];
 int marks[4];
 int unit[4];
 menu();
 printf("Select an option in the menu\n");
 scanf("%d",& number);
 if(number!=1)
 {
     printf("There is nothing to display");
 }
 else
 {
     getchar();
    printf("ENTER STUDENT DETAILS\n");
    printf("Enter students name:");
    scanf("%[^\n]s\n",& name);
    getchar();
    printf("Enter admmission number");
    fgets(regno,90,stdin);

    for(int i=0;i<5;i++)
    {
        printf("\nEnter code for unit\n");
        scanf("%d",& unit[i]);
        printf("Enter marks in unit %d\n",unit[i]);
        scanf("%d",&marks[i]);
    }
    menu();
    printf("Choose a a number on the menu\n");
    scanf("%d",& number);
    switch(number)
    {
case 1:

         getchar();
    printf("ENTER STUDENT DETAILS\n");
    printf("Enter students name:");
    scanf("%[^\n]s\n",& name);
    getchar();
    printf("Enter admmission number");
    fgets(regno,90,stdin);

    for(int i=0;i<5;i++)
    {
        printf("\nEnter code for unit\n");
        scanf("%d",& unit[i]);
        printf("Enter marks in unit %d\n",unit[i]);
        scanf("%d",&marks[i]);
    }

    menu();

      break;

   case 2:

    printf("%s",name);
    printf("%s",regno);
    for(int i=0;i<4;i++)
    {
        printf("The unit code is %d and marks is %d",unit[i],marks[i]);
    }
    break;

    case 3:
    total(marks[4]);
    break;

    case 4:
    aver(marks[4]);
    break;

    case 5:
    sorting(marks[4]);
    break;

    case 6:
    sorting(marks[4]);
    break;

    case 7:
    printf("You have succesfully exited");
    break;

    default:
    printf("No input\n");
    }

    }
}


///P15/1920/2022














































