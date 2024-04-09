#include <stdio.h>
#include <string.h>


int main()
{
    char user_string[100];
    char user_char;
    printf("Kérem a szöveget: ");
    fgets(user_string,100,stdin);
    printf("Kérem a keresett karatert: ");
    scanf("%c", &user_char);
    for (int i = 0; i < strlen(user_string); i++)
    {
        if (user_string[i]==user_char)
        {
            user_string[i]='*';
        }
        
    }
    printf("%s",user_string);
    return 0;
}