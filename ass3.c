#include<stdio.h>
#include<conio.h>
char lower(char s)
{
    if(s>=65&&s<=90)
    {
        s+=32;
    }
    return s;
}
int main()
{
    char str[40];
    fgets(str,40,stdin);
    int i=0,count=0;
    char x;
    while(str[i])
    {
        if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
        {
             x=lower(str[i]);
             if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
             {
                  count++;
             }
        }
        i++;
    }
    printf("Total vowels are %d\n",count);
    getch();
    return 0;
}