#include <stdio.h>
#include <conio.h>
int len(char str[])
{
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[30], temp;
    printf("Enter the string : ");
    fgets(str, 30, stdin);
    int i, j;
    for (i = 0; i < len(str); i++)
    {
        for (j = 0; j < len(str) - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    printf("Sorted string : ");
    printf("%s", str);
    getc(stdin);
    return 0;
}