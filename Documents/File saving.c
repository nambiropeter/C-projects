#include <stdio.h>
void main()
{
 char name[70];
 char regno[70];
 int mark[4];
 printf("Enter name:\n");
 scanf("%[^\n]s",& name);
 getchar();
 printf("Enter registration number:\n");
 scanf("%[^\n]s\n",&regno);
 printf("Enter marks for the units you are doing:\n");

 for(int i=0;i<=6;i++)
 {
     scanf("%d",&mark[i]);
 }
  FILE*fpointer;
  fpointer=fopen("Graded marks.txt","w");
  fprintf(fpointer,"Name:%s\nRegistrationNumber:%s\nMarks are:\n,",name,regno);
  int x=1;
  for(int i=0;i<=6;i++)
  {
      if(mark[i]<40)
  {
       fprintf(fpointer,"CSS%d %d  E\n",x,mark[i]);
  }
  else if(mark[i]<50)
  {
      fprintf(fpointer,"CSS%d %d  D\n",x,mark[i]);
  }
   else if(mark[i]<60)
  {
      fprintf(fpointer,"CSS%d %d  C\n",x,mark[i]);
  }
      else if(mark[i]<70)
  {
      fprintf(fpointer,"CSS%d %d  B\n",x,mark[i]);
  }
   else if(mark[i]<100)
  {
      fprintf(fpointer,"CSS%d %d  A\n",x,mark[i]);
  }
  else
  {
      fprintf(fpointer,"invalid marks");
  }
      x++;
  }

  fclose(fpointer);



}
