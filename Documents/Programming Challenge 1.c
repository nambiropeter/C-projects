#include <stdio.h>

void main()
{
    char fnames[90];
    float salary;
    float commission;
    char payrollno[70];
    float retainer=25000;
    float amountofsales;
    int n;
    int i;

    printf("Enter number of sales people:\n");
    scanf("%d",&n);
    getchar();
  for (i=0;i<=n;i++)
 {

 printf("Enter full name:\n");
 scanf("%[^\n]s", &fnames);

 getchar();
 printf("Enter payroll number\n");
 fgets(payrollno,70,stdin);

 printf("Enter your total sales this month\n");
 scanf("%f", &amountofsales);

 printf("Employee Name: %s\n", fnames);
 printf("Employee Payroll Number: %s\n",payrollno);

 if(amountofsales<1000)
 {
     commission=amountofsales * 0.01;
     salary= commission+ retainer;
     printf("Your total salary is:%.2f\n Your commission is:%.2f",salary,commission);
 }
 else if(amountofsales<5000)
 {
    commission=amountofsales*0.03;
    salary=commission+retainer;
    printf("Your total salary is:%.2f\nYour commission is %.2f",salary,commission);
 }
 else if(amountofsales<1000)
 {
    commission=amountofsales*0.05;
    salary=commission+retainer;
    printf("Your total salary is %.2f\n Your commission is %.2f",salary,commission);
 }
 else
 {
    commission=amountofsales*0.1;
    salary=commission+retainer;
    printf("Your total salary is %.2f \n Your commission is %.2f\n",salary,commission);
 }
 getchar();
 }




}

