# include <stdio.h>

void main()
{
    printf("Convert Kenyan shillings to dollars\n");

    float amount;
    printf("Enter amount in Kenyan shillings:\n");
    scanf("%f", &amount);

    float dollars=amount/121.10;

    printf("Amount in dollars is: %.2f",dollars);
}
