#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    char str[40];
    fgets(str,40,stdin);
    for(;str[i];i++);
    printf("Length is %d\n",i-1);
    getch();
    return 0;
    
}