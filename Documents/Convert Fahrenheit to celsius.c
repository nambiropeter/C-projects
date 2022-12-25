#include <stdio.h>
void main()
{
printf("\n\n\nCONVERT FARENHEIT TO DEGRESS CELSIUS");
float degrees,farenheight;

printf("\nWhat is the temperature in degrees Farenheit\n");
scanf("%f", &farenheight);

degrees = (farenheight-32)*5/9;

printf("\nThe temperature in degrees celsius is %f",degrees);

}
