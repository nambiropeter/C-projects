#include <stdio.h>

void main()
{
    int mark;
    char unit[30];
    int i=1;
    for (i=1;i<=7;i++)
    {
        printf("Enter the name of the unit\n");
        scanf("%[^\n]s",& unit);
        printf("Enter the marks you got in that unit\n");
        scanf("%d",& mark);
        getchar();
        printf("The marks for unit %s are: %d\n",unit,mark);

    }

}
