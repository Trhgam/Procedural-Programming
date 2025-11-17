#include <stdio.h>
#include <stdlib.h>
/* Nhap vao start va end
in ra man hinh cac so nguyen to tu star den end
*/
int main()
{
    //I
    int flag = 1;
    int start,end,tmp,number;
    printf("Enter start :");
    scanf("%d", &start);
    printf("Enter end :");
    scanf("%d", &end);
    if(start > end ){
        tmp = start;
        start = end;
        end = tmp;
    }
    //P and O

    for(int number = start; number <= end; number++){
        if(number >= 2){
            for(int i = 2 ;i < number - 1 ; i++){
                    flag =1;
                if(number % i == 0){
                    flag = 0;
                    break;
                }
            }
            if( flag == 1  ){
                printf("%d ",number);
            }
        }
    }
    return 0;
}
