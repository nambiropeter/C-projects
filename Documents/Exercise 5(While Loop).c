#include <stdio.h>

void main()
{
    float sales;
    float total;
    float average;
    float no_sales=1;

    while(no_sales<=10)
    {
        printf("Enter amount earned from sales for day%.0f:\n",no_sales);
        scanf("%f", &sales);
        total+=sales;
        no_sales=no_sales+1;
    getchar();
    }

    printf("The total number of sales is:%.2f\n",total);
    average=total/10;
    printf("The average sales for the past 10 days is:%.2f",average);
}
