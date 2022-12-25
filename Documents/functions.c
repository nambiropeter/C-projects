#include <stdio.h>
int x,y;
int sum(int a,int b )
{
    int sum=a+b;
    return sum;
    
}

void get_numbers()
{
    printf("Enter num 1\n");
    scanf("%d",x);
    printf("Enter nym 2\n");
    scanf("%d",y);
}
void main()
{
    int total=sum(x,y);
    printf("Total is\n%d",total);
}