#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
28-checkPrimeV3 int-void
*/
int checkPrimeV3(void);
int main()
{
    int n;
    n = checkPrimeV3();
    if( n == 1 ){
        printf("is Prime ");
    }else{
        printf("not Prime ");
    }
    return 0;
}
int checkPrimeV3(void){
    int number ;
    int flag = 1 ;
    printf("Enter number: ");
    scanf("%d",&number);
    if( number >= 2 ){
        for(int i = 2 ; i <= sqrt(number); i++){
            if(number % i == 0){
                return 0 ;
            }
        }
        if(flag == 1){
           return 1 ;
        }
    }
    else{
        return 0 ;
    }
}
