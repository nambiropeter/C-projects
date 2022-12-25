#include <stdio.h>
void main()
{
    FILE *file;
    file=fopen("bank_details.txt","w");
    char names[4][70];
    char account_number[4][70];
    int account_balance[4];
    int age[4];
    int year[4];

    for(int i=0;i<=4;i++)
    {
        printf("Enter clients names\n");
        scanf("%[^\n]s\n",&names[i]);
        getchar();
        printf("Enter clients account number\n");
        scanf("%[^\n]s\n",& account_number[i]);

        printf("Enter clients account balance\n");
        scanf("%d",& account_balance);
        getchar();
        printf("Enter clients age\n");
        scanf("%d",& age[i]);
        printf("Enter date year\n");
        scanf("%d",& year[i]);
        getchar();
    }
    for(int x=0;x<=4;x++)
    {
    fprintf(file,"Name:%s\n",names[x]);
    fprintf(file,"Account number:%s\n",account_number[x]);
    fprintf(file,"Account balance:%d\n",account_balance[x]);
    fprintf(file,"Age:%d\n",age[x]);
    fprintf(file,"Year:%d\n",year[x]);

    }
    fclose(file);
    FILE * file2;
    file2=fopen("bank_details.txt","r");
    char data[100];
    while(!feof(file2)){
        fgets(data,100,file2);
        printf("%s",data);
    }
    fclose(file2);



}
