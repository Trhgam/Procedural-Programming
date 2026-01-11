#include <stdio.h>
#include <stdlib.h>
/*
28-checkPrimeV4 int-int
*/
int checkPrimeV4(int n);
int main()
{
    int number ;
    printf("\nEnter number: ");
    scanf("%d",&number);
    checkPrimeV4(number);
    if( checkPrimeV4(number) == 1 ){
        printf("\n%d is Prime ",number);
    }else{
        printf("\n%d is not Prime ",number);
    }
    return 0;
}
int checkPrimeV4(int n){
    int flag = 1;
    if( n >= 2 ){
        for(int i = 2 ; i <= n-1 ; i++){
            if( n % i == 0){
                return 0 ;
            }
        }
        if( flag == 1 ){
           return 1;
        }
    }
    else{
        return 0 ;
    }
}
