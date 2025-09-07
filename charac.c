#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char m = get_char("Is this a ball? ");
    if (m == 'y' || m == 'Y')
    {
        printf("You're right\n");
    }
    else if (m == 'n' || m == 'N')
    {
        printf("You're wrong\n");
    }


}