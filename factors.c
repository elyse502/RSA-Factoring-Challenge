#include <stdio.h>

int main()
{
    long long int num = 239809320265259;
    long int Factor_1 = 2;
    long int Factor_2;

    while (num % Factor_1)
    {
        if (Factor_1 <= num)
        {
            Factor_1++;
        }
        else {
            return (-1);
        }
    }

    Factor_2 = num / Factor_1;
    printf("%lld = %ld * %ld\n", num, Factor_2, Factor_1);
    return (0);
}

