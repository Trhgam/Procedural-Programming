#include <stdio.h>
#include <stdlib.h>
/* Nhập vào n là số nguyên dương
có 2 chữ số trở lên
và Z là 1 chữ số
tìm trong n xem z xuất hiện bao nhiêu lần */

int main()
{
    //I
    int number,countNumberZ,Z;
    printf("\nEnter positive number:");
    scanf("%d",&number);
    printf("\nEnter positive number has 1 digit:");
    scanf("%d",&Z);
    int tmp;

    //P and O
    for(;number >0;){

        tmp=number%10;
        if(tmp == Z){
            countNumberZ ++;
        }
        number/=10;
    }
    printf("\nSo lan Z xuat hien o so number la:%d ",countNumberZ);
    return 0;
}
