#include <stdio.h>
void menu(menu)
{
printf("1. Sorts the array in descending order\n");
printf("2. Finds the minimum number in the array\n");
printf("3. Finds the maximum number in the array\n");
printf("4. Calculates the average of the array numbers\n");
printf("5. Calculates the standard deviation of the numbers\n");
}
int i;
int j;
int a;
int n;
int k;

void oder()
{int number[i];
    printf("Enter the number of values yo want to put in\n");
    scanf("%d",&n);
    for(i=0;i<n;n++)
    {
    printf("Enter a number:\n");
    scanf("%d", & number[i]);

    for(j=i+1;j<n;j++)
    {
    if(number[i]<number[j])
    {
    a=number[i];
    number[i]=number[j];
    number[j]=a;
     }
    }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",number[i]);
    }
}
void main()
{
    oder();
}

