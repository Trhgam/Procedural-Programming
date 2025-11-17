#include <stdio.h>
#include <stdlib.h>
#include <math.h>
  /*
  Nhap vao so nguyen number
  check n is prime or not?
  Số nguyên tố là số chia hết cho  1 và chính nó
  Số nguyên tố là gì
  B1 là số nguyên tố
  B2 number có chia hết cho ai từ 2 đến tiêm cận khong

  */
int main()
{
    int number;
    int flag = 1;//true
    printf("\nEnter number: ");
    scanf("%d",&number);
    //check
        if(number >= 2){
            for(int i=2; i<=number-1 ;i++){
                if(number % i == 0 ){
                   flag = 0;//false
                   break;
                }
            }
            if(flag==1){
                printf("\n %d is prime",number)
            }else{
                printf("\n %d is not prime",number)
            }
        }else{
            printf("\nNot prime");
        }

    return 0;
}
/*
        if(number >= 2){
            for(int i=2; i<=number-1 ;i++){
                if(number % i == 0 ){
                   flag = 0;//false
                   break;
                }
            }
            if(flag==1){
                printf("\n %d is prime",number)
            }else{
                printf("\n %d is not prime",number)
            }
        }else{
            printf("\nNot prime");
        }
*/
