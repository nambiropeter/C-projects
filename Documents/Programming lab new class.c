#include <stdio.h>

void main()
{
    char grade;
    int marks;
    int lv;
    for (lv=1;lv<=10;lv++)
    {
        printf("the execution number is %d\n",lv);

    printf("Enter marks\n");
    scanf("%d", &marks);

    if (marks>0 && marks<40)
    {
        grade='E';
        printf("Grade is %c\n", grade);
    }

    else if (marks>=40 && marks<50)
    {
        grade='D';
        printf("Grade is %c\n",grade);
    }
    else if (marks>=50 && marks<60)
    {
        grade='C';
        printf("Grade is %c\n",grade);
    }
    else if (marks>=60 && marks<70)
    {
        grade='B';
        printf("Grade is %c\n",grade);
    }
    else if (marks>=70 &&marks<=100)
    {
        grade='A';
        printf("Grade is %c\n",grade);
    }

    else
    printf("Invalid marks\n");
    }
    }



