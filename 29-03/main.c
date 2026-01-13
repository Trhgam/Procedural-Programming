#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm nhập n
Tính tổng các chữ số của n
Nhan = int

*/
int sumDigitInNumber( int number );
int main()
{   int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int result = sumDigitInNumber(n);
    printf("Result is %d.",result);
    return 0;
}
int sumDigitInNumber( int number ){
    int tmp;
    int sum = 0;
    for(; number > 0 ; number /= 10 ){
        tmp = number % 10;
        sum += tmp;
    }
    return sum;
}
