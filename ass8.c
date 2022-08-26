#include<stdio.h>
#include<conio.h>
int main()
{
    char p[20];
    char q[20]={0};
    printf("Enter the string : ");
    fgets(p,20,stdin);
    int i=0;
    while(p[i])
    {   
        
       q[i]=p[i];
       i++;
    }
  printf("%s",q);
  getch();
}