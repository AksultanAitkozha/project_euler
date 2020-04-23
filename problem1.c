#include <stdio.h>
#define li long int

int main()
{
        li sum = 0;
        for(int i = 3; i < 1000; i++)
        {
                if( (i % 3 == 0) || (i % 5 == 0) )
                        sum += i;
        }
        printf("%ld\n", sum);
        return 0;
}       



