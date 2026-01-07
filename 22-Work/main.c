#include <stdio.h>
#include <stdlib.h>
/*
Nhập 1 khoảng có start và end
hãy tính tổng các
số nguyên tố trong khoảng này

*/
int main()
{
    int start, end, i;
    int flag = 1 ;
    int sumPrime = 0 ;
    printf("Enter start :");
    scanf("%d",&start);
    printf("Enter end :");
    scanf("%d",&end);

    if (start > end)
    {
        int tmp ;
        tmp = start ;
        start = end ;
        end = tmp ;
    }

    for ( int number = start ; number <= end ; number ++)
    {
        if(number >= 2)
        {
            flag = 1 ;
            for ( i = 2 ; i <= number - 1 ; i++)
            {
                if( number % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if ( flag == 1 )
            {
                sumPrime += number ;
            }
        }
    }
    printf("%d ", sumPrime );
    return 0;
}
