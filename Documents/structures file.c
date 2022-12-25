
#include<stdio.h>
struct student
{
    char names[20];
    char regno[20];
    int age;
    int marks[7];
};
void main()
{
    struct student s[5];
    printf("Enter student details as follows\n");
  for(int i=0;i<5;i++)
  {
    printf("Enter the name of student %d:\n",i+1);
    fgets(s[i].names,20,stdin);
    printf("Enter the regno:\n");
    fgets(s[i].regno,20,stdin);
    printf("Enter the age:\n");
    scanf("%d",&s[i].age);
      for(int j=0;j<7;j++)
      {
        printf("Enter the marks of subject %d:\n",j+1);
        scanf("%d",&s[i].marks[j]);//fullstop shows that we are working within a variable within our struct
      }
      getchar();
  }
    FILE*mywork;//mywork is a pointer
    mywork=fopen("student.txt","w");
  fprintf(mywork,"\nthe students details are as follows\n");
  for(int i=0;i<5;i++)
  {
    fprintf(mywork,"\n\tname:%s\n",s[i].names);
    fprintf(mywork,"\tregno:%s\n",s[i].regno);
    fprintf(mywork,"\tage:%d\n",s[i].age);
    for (int j=0;j<7;j++)
    {
        fprintf(mywork,"\t\tmarks in subject %d are %d\n",j+1,s[i].marks[j]);
    }
  }
  fclose(mywork);
  mywork=fopen("student.txt","r");
  char data[100];
  while(!feof(mywork))//!feof means not end of file
{
    fgets(data,100,mywork);
    printf("%s",data);
}
    fclose(mywork);
}
