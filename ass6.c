#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char*a,char*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
char* reverse(char*s)
{   
    char x=strlen(s);
    for(int i=0;i<strlen(s)/2;i++)
    {
        swap(&s[i],&s[x-i-1]);
    }
    return s;
}
int main()
{
char str[40];
    fgets(str,40,stdin);
    printf("%s",reverse(str));
    getch();
    return 0;
}