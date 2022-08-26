#include<stdio.h>
#include<conio.h>
void lower(char *s)
{
    if(*s>=65&&*s<=90)
    {
        *s+=32;
    }
    
}
int main()
{
char str[40];
    fgets(str,40,stdin);
    for(int i=0;str[i];i++)
    {
        lower(str+i);
    }
    puts(str);
    getch();
    return 0;
}