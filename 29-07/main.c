#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm nhận vào start và end
tính trung bình nhân các só trong đoạn
*/
float geoMetriMean(int s,int e);
int main()
{   int start,end;
    printf("\nEnter start: ");
    scanf("%d",&start);
    printf("\nEnter end: ");
    scanf("%d",&end);
    float result = geoMetriMean(start,end);
    printf("Result is %.2f",result);
    return 0;
}
float geoMetriMean(int s,int e){
    int tmp ;
    if(s > e){
        tmp = s ;
        s = e ;
        e = tmp ;
    }
    int count = 0;
    int mulAllNumber = 1;
    float result;
    for(int i = s ;i<= e ; i++){
        mulAllNumber *= i;
        count ++;
    }
    result = (1.0*mulAllNumber)/(1.0 * count) ;
    return result;

}
