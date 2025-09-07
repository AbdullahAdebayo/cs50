#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int dollar = 1;
    while (true)

    {
        char f = get_char("Do you want to double your dollar or pass it to the next person?  ");
        if (f == 'P')
        {
            printf("Ok,that's fine.\n");
            continue;
        }
        else
        if (f == 'D')
        {
            dollar = dollar * 2;
        }
        {
            printf("Congratulations,you won %i dollars\n", dollar);
            break;
        }
    }
}
