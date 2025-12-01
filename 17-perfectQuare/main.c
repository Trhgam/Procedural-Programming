#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 18-perfectNumber
Nhập vào number ,kiểm tra xem number
 có phải là số chính phương không
số chính phương là kết quả của số nguyên nào đó ^2

*/

int main()
{   //I
   /* for(i = 1; i <= sqrt(number) ; i++){
    int number;
    int i;
    int flag = 0;
    printf("\nEnter number:");
    scanf("%d", &number);

    //P and O
        if( pow(i,2) == number ){
            flag = 1 ;
            break ;
        }
    }
    if( flag == 1 ){
        printf("\nIs Perfect Number ");
    }else{
         printf("\nNot Perfect Number ");
    }*/



    float number1;
    printf("\nEnter number:");
    scanf("%f", &number1);
    //int tmp = sqrt(number1);
    if( sqrt(number1) == (int)sqrt(number1) ) {
        printf(" %d Perfect Number ",number1);
    }else{
        printf(" %d not Perfect Number ",number1);
    }
    return 0;
}
