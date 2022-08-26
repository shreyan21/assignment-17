#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char p[40];
    printf("Enter the string : ");
    fgets(p,40,stdin);
    int i=0;
    int count1=0,count2=0;
    int count3=0;
    while(p[i]!='\0')
    {
        if(p[i]>=65&&p[i]<=90||p[i]>=97&&p[i]<=122)
        {
              count1++;
        }
        else if(p[i]>=48&&p[i]<=57)
        {
            count2++;
        }
        else if(p[i]!='\n')
        {
            count3++;
        }
        i++;
    }
    printf("Total number of alphabets : %d\n",count1);
    printf("Total number of digits : %d\n",count2);
    printf("Total number of special characters : %d\n",count3);
   
    getch();
    return 0;
}