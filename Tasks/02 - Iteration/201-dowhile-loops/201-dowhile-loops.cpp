#include <stdio.h>

int main()
{
    int i = 5;

    printf("Start while loop\n");

    do
    {
        printf("i = %d\n", i);
        i = i - 1;              // Alternatively, write i++;
    } while (i >= 0);            //Repeat if condition is met

    printf("Finished: i = %d\n", i);
}

//program looped 5 times from 0-4
//using while i < 5, the end value of i is 5
//when using i < 6, program loops 5 times, prints i = 6

//using i = 5, while i >= 0 program loops 5 times, prints i = -1

