#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào số n
Kiểm tra xem tổng các chữ số của n nguyên
có tạo thành 1 số nguyên tố
*/
int main()
{
    //I
    int number,tmp;
    printf("Enter positive number:");
    scanf("%d",&number);
    int flag = 1;
    int checkPrime=0;

    //P and O
    for(;number > 0;){
        tmp=number%10;
        checkPrime+=tmp;
        number/=10;
    }
    printf("%d",checkPrime);
    if(checkPrime > 1){
        for(int i=2;i<=checkPrime - 1;i++){
            if(checkPrime % i == 0){
                flag = 0;
            }
        }
        if(flag == 1){
            printf("\nCan");
        }else{
            printf("\nCan not");
        }
    }else{
        printf("\nCan not");
    }
    return 0;
}
