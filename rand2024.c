#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void array_upload(int array[], int length)
{
    srand(time(NULL));
    for (int i = 0; i < length; i++)
    {
        array[i] = rand() % (2024 - (-2023)+1) + (-2024);
        printf("%d ",array[i]);
    }
}

int minus(int array[], int length)
{
    int counter=0;
    for (int i = 0; i < length; i++)
    {
        if (array[i]<0)
        {
            counter++;
        }
        
    }
    return counter;
    
}

int main()
{
    int nums[10];
    int length = 10;
    array_upload(nums, length);
    printf("\n%d minusz szám van.",minus(nums,length));
    return 0;
}