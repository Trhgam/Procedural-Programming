#include <stdio.h>
#include <stdlib.h>
/*
Nhan n
Tinh n giai thua

*/
int giaiThua(int number );
int giaiThuac2(int number );
int main()
{   int n;
    printf("\nEnter number ");
    scanf("%d",&n);
    n=giaiThuac2(n);
    printf("\nResult is %d",n);
    return 0;
}
int giaiThua(int number ){
    int result = 1;
    for(int i = 1;i<= number ;i++){
        result*=i;
    }
    return result;
}
int giaiThuac2(int number ){
    if(number == 1 || number == 0){
        return 1;
    }
    return number*giaiThuac2(number-1);
}
