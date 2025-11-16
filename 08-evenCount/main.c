#include <stdio.h>
#include <stdlib.h>
/* 08 - eveCount
Nhập vào số nguyên star và end
in ra màn hình các số chẵn  trong đoạn từ star đến end
-- mô tả phần mềm
nhập start 2
nhập end 10
*/
int main()
{
    //I
    int start,end ;
    printf("Enter start :");
    scanf("%d",&start);
    printf("Enter end :");
    scanf("%d",&end);
    //P va O
    int i;
    int count = 0;
    if(start > end){
        int tmp=start;
        start = end;
        end =tmp;
    }

    for(i=start;i<=end;i++){
        if( i%2 == 0 ){
            printf("%-5d",i);
            count++;
        }
    }
    printf("\nSum so chan = %d",count);
    return 0;
}
