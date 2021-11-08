#include <stdio.h>
#include <stdint.h>

int main (void)
{
/*изначальное число*/
        unsigned int i_digit = 0;

/*Величин сдвига*/
        int shift_val = 0;

        printf ("Enter number and shift value\n");
        scanf ( "%X%d", &i_digit, &shift_val);

        if (shift_val < 0)
        {
/* Эта подозрительная операция инвертирует значение shift_val */
                shift_val = ~shift_val + 0b1;
                printf ("Input: 0x%x shift right %u \nResult: 0x%x\n", i_digit, shift_val, (i_digit >> shift_val) );
        }
        else if ( shift_val > 0 )
                {
                printf ("Input: 0x%x shift left %u \nResult: 0x%x\n", i_digit, shift_val, (i_digit << shift_val) );
                }
              else printf ("Zero shift is defined\n");

        return 0;
}

