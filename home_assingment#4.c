#include <stdio.h>
#include <stdint.h>

int main (void)
{
        unsigned int i_digit = 0; // initial digit
        int p = 0; // value of shift

        printf ("Enter number and shift value\n");
        scanf ( "%X%d", &i_digit, &p);

        if (p < 0)
        {
                p = ~p + 0b1; // this strange operation to invert value of p
                printf ("Input: 0x%x shift right %u \nResult: 0x%x\n", i_digit, p, (i_digit >> p) );
        }
        else if ( p > 0 )
                {
                printf ("Input: 0x%x shift left %u \nResult: 0x%x\n", i_digit, p, (i_digit << p) );
                }
              else printf ("Zero shift is defined\n");

        return 0;
}

