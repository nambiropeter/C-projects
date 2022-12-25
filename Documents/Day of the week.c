#include <stdio.h>

void main()
{
 int day;
 printf("Pick a day:\n1\n2\n3\n4\n5\n6\n7\n");
 scanf("%d",& day);
 switch(day)
 {


case 1:
     printf("Sunday");
     break;

case 2:
    printf("Monday");
    break;

case 3:
    printf("Tuesday");
    break;

case 4:
    printf("Wednesday");
    break;

case 5:
    printf("Thursday");
    break;

case 6:
    printf("Friday");
    break;

case 7:
    printf("Saturday");
    break;


default:
    printf("Invalid Character");



 }





}
