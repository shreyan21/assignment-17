#include <stdio.h>
#include <conio.h>
int occurences(char x, char *s)
{
    int i = 0;
    int count = 0;
    while (s[i])
    {
        if (x == s[i])
        {
            count++;
        }
        i++;
    }
    return count;
}
int main()
{
    char str[40],x;
    printf("Enter the string : ");
    fgets(str,40,stdin);
    printf("Enter the character : ");
    scanf("%c",&x);
    printf("Occurences of %c is %d\n",x, occurences(x, str));
    getch();
    return 0;
}