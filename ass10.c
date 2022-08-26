#include <stdio.h>
#include <conio.h>
int len(char *s)
{
    int i;
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        ;
    return i;
}
int check(char *str, int j)
{
    int i;
    for (i = 0; i < j; i++)
    {
        if (str[j] == str[i])
        {
            return 0;
        }
    }
    return 1;
}
int count(char *str, char x)
{
    int i, count = 0;
    for (i = 0; i < len(str); i++)
    {
        if (str[i] == x)
            count++;
    }
    return count;
}
int main()
{
    int i = 0;
    char str[40];
printf("Enter the string : ");
    fgets(str, 40, stdin);
    for (i = 0; i < len(str); i++)
    {
        if (check(str, i))
        {
            if (str[i] == 32)
                printf("Frequency of space is %d\n", count(str, str[i]));
            else

                printf("Frequency of %c is %d\n", str[i], count(str, str[i]));
        }
    }
    getc(stdin);
    return 0;
}