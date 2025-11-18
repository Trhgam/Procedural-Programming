#include <stdio.h>
#include <stdlib.h>
/*Nhập vào start và end
tính tổng các số nguyên tố
trong đọan từ start đến end

*/

int main()
{
    int start,end;
    int count =0;
    int flag = 1;
    printf("\nEnter start number : ");
    scanf("%d",&start);
    printf("\nEnter end number : ");
    scanf("%d",&end);

    for(int number = start;number<= end;number ++){
        flag=1;
        if(number >= 2){
            for(int i = 2;i <= number -1;i++){
                if( number % i == 0){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                count++;
            }
        }
    }
        printf("\nSo nguyen to tu start den end la %d",count);
    return 0;
}
