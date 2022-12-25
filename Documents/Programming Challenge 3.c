#include <stdio.h>
typedef struct book
{
    char book_title[1000];
    char book_author[1000];
    int quantity;
    int price;
}things;
void details(int num)
{    things inclusive[100];
 for(int x=0;x<num;x++)
 {  getchar();
    printf("Enter the book title\n ");
    scanf("%[^\n]s",& inclusive[x].book_title);
    getchar();
    printf("Enter the name of the author\n");
    scanf("%[^\n]s",& inclusive[x].book_author);
    getchar();
    printf("Enter the quantity of books\n");
    scanf("%d",& inclusive[x].quantity);
    printf("Enter the price of the books\n");
    scanf("%d",& inclusive[x].price);
 }
}
void save(int num)
 {  things inclusive[100];
  FILE*fpointer;
    fpointer=fopen("book detail.txt","w");
for(int y=0;y<num;y++)
 {
    fprintf(fpointer,"Book title:%s\n",inclusive[y].book_title);
    fprintf(fpointer,"Book author:%s\n",inclusive[y].book_author);
    fprintf(fpointer,"Book in stock:%d\n",inclusive[y].quantity);
    fprintf(fpointer,"Book price:%d\n",inclusive[y].price);
 }
 fclose(fpointer);
}
void view()
{
    char data[10000];
    FILE*fpointer1;
    fpointer1=fopen("book detail.txt","r");
    while(!feof(fpointer1))
   {
    fgets(data,1000,fpointer1);
    printf("%s",data);
   }
    fclose(fpointer1);
}
int tot(int num,things inclusive[])
{int total;
for(int b=0;b<num;b++)
{
   total+= inclusive[b].quantity;
}
return total;
}
void main()
{  things inclusive[100];
    int num1;
    int opp;
    printf("Enter the number of books you wish to record\n");
    scanf("%d",& num1);
while(opp!=5)
{
    printf("1.Add book details\n");
    printf("2.Save the book details\n");
    printf("3.View the book details\n");
    printf("4.View total number of books in the book store\n");
    printf("5.exit\n");
    printf("\nPick an option in the menu\n");
    scanf("%d",& opp);

    switch(opp)
    {
        case 1:
        details(num1);
        break;

        case 2:
        save(num1);
        break;

        case 3:
        view();
        break;

        case 4:
        printf("%d\n",tot(num1,inclusive));
        break;

        default:
        printf("invalid number");
    }

}

}