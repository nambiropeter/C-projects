#include <stdio.h>

void main()
{
    char fnames[70];
    char  idnumber[50];
    int CSS111;
    int CSS112;
    int CSS113;
    int CSS115;
    int CSS126;

    printf("Enter your full name: \n");
    scanf("%[^\n]s", & fnames);

    getchar();
    printf ("Enter your id number\n");
    fgets(idnumber,50,stdin);



    printf("Enter marks for CSS111:\n");
    scanf("%d", & CSS111);
    printf("Enter marks for CSS112:\n");
    scanf("%d", & CSS112);
    printf("Enter marks for CSS113:\n");
    scanf("%d", & CSS113);
    printf("Enter marks for CSS115:\n");
    scanf("%d", & CSS115);
    printf("Enter marks for CSS126:\n");
    scanf("%d", & CSS126);

    printf("STUDENT NAME:%s\n",fnames);
    printf("STUDENTS IDNO:%s\n",idnumber);
    printf("COURSECODE\tMARKS\tGRADE\n");

    if (CSS111<40)
    {
    printf("\nCSS111\t\t%d\t F",CSS111);
    }

    else if (CSS111<50)
    {
    printf("\nCSS111 \t\t%d \tD",CSS111);
    }
    else if (CSS111<60)
    {
    printf("\nCSS111 \t\t%d \tC",CSS111);
    }
    else if (CSS111<70)
    {
    printf("\nCSS111 \t\t%d \tB",CSS111);
    }
    else if (CSS111>70)
    {
    printf("\nCSS111 \t\t%d \tA",CSS111);
    }
     if (CSS112<40)
    {
    printf("\nCSS112\t\t%d\t F",CSS112);
    }

    else if (CSS112<50)
    {
    printf("\nCSS112 \t\t%d \tD",CSS112);
    }
    else if (CSS112<60)
    {
    printf("\nCSS112 \t\t%d \tC",CSS112);
    }
    else if (CSS112<70)
    {
    printf("\nCSS112 \t\t%d \tB",CSS112);
    }
    else if (CSS112>70)
    {
    printf("\nCSS112 \t\t%d \tA",CSS112);
    }
    if (CSS113<40)
    {
    printf("\nCSS113\t\t%d\t F",CSS113);
    }

    else if (CSS113<50)
    {
    printf("\nCSS113 \t\t%d \tD",CSS113);
    }
    else if (CSS113<60)
    {
    printf("\nCSS113 \t\t%d \tC",CSS113);
    }
    else if (CSS113<70)
    {
    printf("\nCSS113 \t\t%d \tB",CSS113);
    }
    else if (CSS113>70)
    {
    printf("\nCSS113 \t\t%d \tA",CSS113);
    }
    if (CSS115<40)
    {
    printf("\nCSS115\t\t%d\t F",CSS115);
    }

    else if (CSS115<50)
    {
    printf("\nCSS115 \t\t%d \tD",CSS115);
    }
    else if (CSS115<60)
    {
    printf("\nCSS115 \t\t%d \tC",CSS115);
    }
    else if (CSS115<70)
    {
    printf("\nCSS115 \t\t%d \tB",CSS115);
    }
    else if (CSS115>70)
    {
    printf("\nCSS115 \t\t%d \tA",CSS115);
    }
     if (CSS126<40)
    {
    printf("\nCSS126\t\t%d\t F",CSS126);
    }

    else if (CSS126<50)
    {
    printf("\nCSS126 \t\t%d \tD",CSS126);
    }
    else if (CSS126<60)
    {
    printf("\nCSS126 \t\t%d \tC",CSS126);
    }
    else if (CSS126<70)
    {
    printf("\nCSS126 \t\t%d \tB",CSS126);
    }
    else if (CSS126>70)
    {
    printf("\nCSS126 \t\t%d \tA",CSS126);
    }




}



