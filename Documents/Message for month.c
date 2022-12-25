#include <stdio.h>

void main()
{
  int google;

  printf("Pick your birth month:\n 1.January\n 2.February\n 3.March\n 4.April\n 5.May\n 6.June\n 7.July\n 8.August\n 9.September\n 10.October\n 11.November\n 12.December\n");
   scanf("%d", &google);
   switch(google)
   {
   case 1:
    printf("You are a Capricorn");
    break;

   case 2:
    printf("You are a Aquarius");
    break;

   case 3:
    printf("You are a Pisces");
    break;

   case 4:
    printf("You are a Aires");
    break;

   case 5:
    printf("You are a Taurus");
    break;

   case 6:
    printf("You are a Gemini");
    break;

   case 7:
    printf("You are a Cancer");
    break;

   case 8:
    printf("You are a Leo");
    break;

   case 9:
    printf("You are a Virgo");
    break;

   case 10:
    printf("You are a Libra");
    break;

   case 11:
    printf("You are a Scorpio");
    break;

    case 12:
    printf("You are a Sagittarus");
    break;

    default:
        printf("Invalid month no star sign");








   }







}
