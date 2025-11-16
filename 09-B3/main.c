#include <stdio.h>
#include <stdlib.h>

/* Nhập vào số nguyên n
tìm digit lớn nhất
tìm kí tự lớn thư 2
*/
int secondDigitBig(int n);
int main()
{
    int number;
    printf("\nEnter number :");
    scanf( "%d",&number);
    int tmp = number;
    number = secondDigitBig(number);
    if (number == -1) {
        printf("\nKhong co chu so lon thu hai.\n");
    } else {
        printf("\nChu so lon thu hai trong %d la: %d\n",tmp, number);
    }
    return 0;
}
int secondDigitBig(int n){
    int firsstbig=-1;
    int secondbig =-1;
    int tmp;
    for(;n != 0;n /= 10){
        tmp = n % 10;
        if(tmp >= firsstbig){
            secondbig=firsstbig;
            firsstbig=tmp;
        }
        else if (tmp > secondbig && tmp < firsstbig){
            secondbig = tmp;
        }

    }
    return secondbig;
}
/* in ra kí tự lớn nhất
  //I
    int number;
    int maxDigit;
    maxDigit = -1 ;
    int tmp;
    printf("Enter number :");
    scanf( "%d",&number);

    //P and O
        for(;number != 0;){
            tmp=number%10;
            if(tmp > maxDigit){
                maxDigit = tmp;
            }
            number/=10;
        }
    printf("%d",maxDigit);


*/
