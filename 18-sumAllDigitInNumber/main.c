#include <stdio.h>
#include <stdlib.h>
//18-sumAllDigitInNumber
/*
Nhập vào số nguyên number ,
tính tổng các chữ số nguyên đó
Nhập number 2317==>13
*/
int main()
{   /*B1
    int number;
    int i;
    int tmp;
    int sumDigit = 0;
    printf("\nEnter number:");
    scanf("%d", &number);
    for (;number > 0;){
        sumDigit += number % 10 ;
        number /= 10 ;
    }
    printf("Sum of digit in number is %d",sumDigit );

    */
    /* B2 + B3
    int number;
    int tmp;
    int curr;
    printf("\nEnter number:");
    scanf("%d", &number);
    int numberMain = number ;
    for(;number > 0;){
        tmp= number % 10;
        curr = (curr*10) + tmp;
        number /= 10;
    }
    if( curr == numberMain){
        printf("La so dao nguoc");
    }else{
        printf("Ko phai so dao nguoc");
    }
    */

    int number;
    int tmp,tmp2 = -2;
    printf("\nEnter number:");
    scanf("%d", &number);
    for(;number > 0;){
        tmp = number % 10;
        if(tmp >= tmp2){
            tmp2 = tmp;
        }
        number /= 10;
    }



    return 0;
}
/*
2.Nhập vào number tìm số đảo ngươc của nó
3.Nhập vào number kiểm tra xem có phải dãy anna không
2112 32123
4.Nhập vào number xóa các digit trong number
    1513237 ==> 15327
5.Nhập vào number tìm dãy tiến con có tổng các chữ số lớn nhất
    101927125 ==> 19

*/
