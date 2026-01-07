#include <stdio.h>
#include <stdlib.h>
/*
Nhập n
tính số từ 1 tới n
--mô tả--
n = 4
1/1 + 1/2+3 + 1/1+2+3 +1/1+2+3+4= kết quả
*/
int main()
{
    //I
    int number;
    int sumNumber =0;
    float result = 0;
    char buff;
    do{
        printf("\nEnter number:");
        scanf("%d",&number);
        scanf("%c",&buff);
        if(buff != 10 ){
            printf("\nEnter Again ! ");
        }
    }while(  buff != 10 );
    //O and P
    for(int i=1;i <=number ; i++ ){
        sumNumber += i;
        result += 1.0/ (float)sumNumber;
    }
    printf("Result is %.2f",result);
    return 0;
}
