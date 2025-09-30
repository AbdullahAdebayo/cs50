#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>




int main(void)
{
    string card_number = get_string("Number: ");
 
    int len = strlen(card_number);
    int sum = 0;
    for (int i = len - 2; i >= 0; i -= 2)
    {
        int digit = card_number[i] - '0';
        int product = digit * 2;
 
        
        if (product > 9)
        {
            sum += product / 10; 
            sum += product % 10; 
        }
        else
        {
            sum += product;
        }
      
   
 
    }
 
     for (int i = len - 1; i >= 0; i -= 2)
    {
        int digit = card_number[i] - '0';
        sum += digit;
      
    }
 
    if (sum % 10 == 0)
    {
        if (len == 15 && card_number[0] == '3' && (card_number[1] == '4' || card_number[1] == '7'))
        {
            printf("AMEX\n");
        }
        else if (len == 16 && card_number[0] == '5' && (card_number[1] >= '1' && card_number[1] <= '5'))
        {
            printf("MASTERCARD\n");
        }
        else if ((len == 13 || len == 16) && card_number[0] == '4')
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}