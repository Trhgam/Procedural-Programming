#include <stdio.h>
#include <stdlib.h>
/*Viết hàm nhập vào(ko xin) start và end
tính tổng các phần tử
trong khoảng và in ra mh

*/
void sumDigit(int s,int e);
int main()
{   int start , end ;
    printf("\nEnter start: ");
    scanf("%d",&start);
    printf("\nEnter end: ");
    scanf("%d",&end);
    sumDigit(start,end);
    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }
    return 0;
}
void sumDigit(int s, int e){
    int sum = 0;
    for (int i = s;i<= e ;i++ ){
        sum += i;
        printf("%d ",i);
    }
    printf("\nSum all digit is %d",sum);
}
