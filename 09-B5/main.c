#include <stdio.h>
#include <stdlib.h>


/*
Nhập vào số nguyên dương
Đảo ngược số
chỉ dùng if else / %
*/

int main()
{
    //I
    int number;
    printf("\nEnter number:");
    scanf("%d",&number);
    int inverNumber=0;
    int tmp,i;

    //P and O
    for(;number >0;){
        tmp=number%10;
        inverNumber= (inverNumber*10) + tmp;
        number/=10;
    }
    printf("\nValue after reverse is %d",inverNumber);
    return 0;
}
