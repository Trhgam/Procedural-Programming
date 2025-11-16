#include <stdio.h>
#include <stdlib.h>

/*
Nhập vào start và end ;
in ra màn hình

*/
void sumCountEven( void );
int main()
{
    sumCountEven();

    return 0;
}
void sumCountEven( void ){
    int start,end;
        int sumOdd = 0;
        int countEven = 0;
        int count = 0 ;
        printf("\nNhap start : ");
        scanf("%d",&start);
        printf("\nNhap end : ");
        scanf("%d",&end);

        //P and O
        for(int i = start; i <= end ;i++){
            if(i % 2 != 0){
                printf("%d ",i);
                sumOdd+=i;
            }else{
                countEven++;
            }
            count++;
        }
        printf("\nTong so le la %d",sumOdd);
        printf("\nCo %d so chan ",countEven);
        printf("\nCo %d so trong khoang %d den %d",count,start,end);

}
/*
int start,end;
    int sumOdd = 0;
    int countEven = 0;
    int count = 0 ;
    printf("\nNhap start : ");
    scanf("%d",&start);
    printf("\nNhap end : ");
    scanf("%d",&end);

    //P and O
    for(int i = start; i <= end ;i++){
        if(i%2!=0){
            printf("%5d",i);
            sumOdd+=i;
        }else{
            countEven++;
        }
        count++;
    }
    printf("%d",sumOdd);
    printf("%d",countEven);
    printf("%d",count);
    */
