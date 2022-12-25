#include <stdio.h>
void main()
{  int size;
    size=7;
    int count=0;
    int marks[size];
    int unit=1;
    while(count<size)
    {
        printf("Enter mark for unit %d \n",unit);
        scanf("%d",& marks[count]);
        count++;
        unit++;
    }
    printf("Your grades for the units above are:\n");
    for(int i=0;i<7;i++)
    {
     if(marks[i]<40)
    {
        printf("%d \tE\n",marks[i]);
    }
     else if(marks[i]<50)
     {
         printf("%d \tD\n",marks[i]);
     }
     else if(marks[i]<60)
     {
         printf("%d \tC\n",marks[i]);
     }
     else if(marks[i]<70)
     {
         printf("%d \tB\n",marks[i]);
     }
     else if(marks[i]<100)
     {
         printf("%d \tA\n",marks[i]);
     }
     else
        printf("Invalid number\n");
    }



}
