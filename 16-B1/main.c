#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào start + end
Tính tổng các prime
trong đoạn từ start đến end

*/
int main()
{
    int start,end;
    int flag = 1;
    int sumPrime = 0;
    printf("Enter start:");
    scanf("%d",&start);
    printf("Enter end:");
    scanf("%d",&end);

    int i,number;
    for(number = start; number <= end; number++){
        flag = 1;
        if( number >= 2){
            for( i=2 ; i <= number - 1 ; i++ ){
                if(number % i == 0){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1){
            sumPrime += number;
        }
    }
    printf("Sum of all prime numbers is %d ", sumPrime);
    return 0;
}
