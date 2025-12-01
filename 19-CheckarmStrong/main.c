#include <stdio.h>
#include <stdlib.h>
/*
153 = 1^3  + 5^3 + 3^3
*/
int main()
{ //I
    int number,tmp ;
    int tmp2;
    int countDigit = 0;
    int armStrong = 0 ;
    printf("Enter Number:");
    scanf("%d",&number );
    int number2 = number;
    //O and P
    for ( ;number > 0;number /= 10 ){
        tmp = number % 10;
        countDigit++ ;
    }
    for ( ;number2 > 0;number2 /= 10 ){
        tmp2 = number2 % 10;
        armStrong += pow(tmp2,countDigit) ;
    }
    printf("%d",armStrong);


    return 0;
}
