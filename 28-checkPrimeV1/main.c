#include <stdio.h>
#include <stdlib.h>
/*
28-checkPrimeV1
*/
void checkPrime(void);
int main()
{
    checkPrime();
    return 0;
}
void checkPrime(void)
{
    int number ;
    int flag = 1 ;
    printf("Enter number: ");
    scanf("%d",&number);
    if(number >= 2 ){
        for(int i = 2 ; i <= number-1; i++){
            if(number % i == 0)
            {
                flag = 0;
                break;
            }

        }
        if(flag == 0){
            printf("%d is not Prime ",number);
        }
        else{
            printf("%d is Prime ",number);
        }
    }
    else{
        printf("%d is not Prime ",number);
    }

}
