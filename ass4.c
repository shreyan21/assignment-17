#include<stdio.h>
#include<conio.h>
void upper(char *s)
{
    if(*s>=97&&*s<=122)
    {
        *s-=32;
    }
    
}
int main()
{
char str[40];
    fgets(str,40,stdin);
    for(int i=0;str[i];i++)
    {
        upper(str+i);
    }
    puts(str);
    getch();
    return 0;
}