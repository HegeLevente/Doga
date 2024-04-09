#include <stdio.h>
#include <string.h>

int valid_email(int length, char email[])
{
    for (int i = 1; i < length; i++)
    {
        if (email[i] == '@')
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char user_string[100];
    int nums_of_email = 0;
    do
    {
        fgets(user_string, 100, stdin);
        nums_of_email += valid_email(strlen(user_string), user_string);

    } while (strlen(user_string) != 2 && user_string[0] != '*');

    printf("%d db email van\n", nums_of_email);
    return 0;
}