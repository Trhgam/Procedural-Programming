#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 /*
 Cho người dùng nhập vào một số
 kiểm tra xem số đó ko
 có phải số nguyên tố hay
 số nguyên tố chỉ chia 1 và chính nó

 */
int main()
{
    int number,i;
    int prime =0;
     printf("Enter number:");
    scanf("%d",&number);

    for(i = 2;i< sqrt(number);i++){
            if(number / i == 0 ){
               prime = 1;
            }
        }
    if(number < 2){
        printf("\nNot prime number");
    }else if(number > 2 ){
        if(prime != 1){
            printf(" Is Prime");
        }else{
            printf("Not Prime");

        }
    }else{
        printf("\n Prime number");
    }
    return 0;
}
