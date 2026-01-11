#include <stdio.h>
#include <stdlib.h>
/*
28-checkPrimeV2 void-int
*/
void checkPrimeV2 (int n);
int main()
{   int number ;
    printf("Enter number: ");
    scanf("%d",&number);
    checkPrimeV2(number);
    return 0;
}
void checkPrimeV2 (int n ){
    int flag = 1;
    if(n >= 2 ){
        for(int i = 2 ; i <= n-1; i++){
            if(n % i == 0)
            {
                flag = 0;
                break;
            }

        }
        if(flag == 0){
            printf("%d is not Prime ",n);
        }
        else{
            printf("%d is Prime ",n);
        }
    }
    else{
        printf("%d is not Prime ",n);
    }

}
