#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào số n
in ra số fibonacci thứ n
*/
//void isFibonacci(int n);
int isFibonacci(int n);
int main()
{
    int number ;
    printf("\nEnter number: ");
    scanf("%d",&number);
    isFibonacci(number);
    number = isFibonacci(number );
    printf("%d",number);
    return 0;
}
/*void isFibonacci(int n){
    int curr = 1;
    int result = 1;
    int prev = 0;
    for(int i = 1;i<= n - 1;i++){
        result = curr + prev;
        curr = result ;
        prev = curr;
    }
    printf("\nResult is %d\n",result);

}*/
int isFibonacci(int n){
   if(n == 1 || n == 2) return 1;
    return isFibonacci(n-1)+ isFibonacci(n-2);
}
