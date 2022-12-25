#include <stdio.h>

//Program to collect patient data at AAR Hospital
int main()
{
    printf("WELCOME TO AAR HOSPITAL\n");

   char Name[20];
   printf("Enter your first name: " );
   scanf("%s", &Name);

   int Age;
   printf("Enter your age:");
   scanf("%d",&Age);

   float Height;
   printf("Enter your height in meters:");
   scanf("%f",&Height);

   int Weight;
   printf("Enter your weight in Kilograms:");
   scanf("%d",&Weight);

   float Temperature;
    printf("Enter your temperature in degrees celcius:");
   scanf("%f",&Temperature);

   printf("\nYour patients name is %s \n",Name);
   printf("His age is %d\n years\n", Age);
   printf("His height is %f\n meters \n", Height);
   printf("His height weight is %d\n kilograms\n",Weight);
   printf("His temperature is %f\n degrees celcius \n",Temperature);


}
