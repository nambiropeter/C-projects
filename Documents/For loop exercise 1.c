#include <stdio.h>
void main()
{
    int Num1;



    printf("Enter number \n");
    scanf("%d", & Num1);
    int total=0;

    for(int i=1;i<=Num1;i++)
    {
        total+=i;
    }
    printf("%d",total);
}
