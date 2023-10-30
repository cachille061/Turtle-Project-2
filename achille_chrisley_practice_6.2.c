#include <stdio.h>
#include<stdbool.h>
#include<time.h>
#define SIZE 20
int main()
{
    int num, value;
    int numbers[SIZE];
    for (int i = 0; i < 20; i++)
    {
        printf("Please enter a number between 10 and 100: \n");
        scanf("%d", &num);
        while (num < 10 || num > 100)
        {
            printf("Invalid number! Try again: ");
            scanf("%d", &num);
        }
        numbers[i] = num;
        for (int j = i-1; j <= i; j++)
        {
            if (num == numbers[j])
            {
                continue;
            }
            else
            {
                printf("The number was: %d\n", num);
                break;
            }
        }
    }
}
