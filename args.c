#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void is_num(char *argv[], int length)
{
    int nums[length - 1];
    for (int i = 1; i < length; i++)
    {
        if (!atoi(argv[i]) && atoi(argv[i]) == 0)
        {
            printf("Az argumentum %d. eleme nem szám.", i);
            exit(0);
        }
        else
        {
            nums[i - 1] = atoi(argv[i]);
        }
    }
}

int main(int argc, char *argv[])
{
    is_num(argv, argc);
    int mult = atoi(argv[1]);
    for (int i = 2; i < argc; i++)
    {
        mult *= atoi(argv[i]);
        printf("%d", atoi(argv[i]));
    }
    printf("Eredmény: %d", mult);

    return 0;
}