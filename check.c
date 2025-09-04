#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("What's a? ");
    int b = get_int("What's b? ");

    if (a >= b)
    {
        printf("a is greater than b\n");
    }


}