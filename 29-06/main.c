#include <stdio.h>
#include <stdlib.h>
/*
Nhap n tinh tong so chan tu 1 den n
*/
int sumEvenNumber(int number );
int main()
{   int n;
    printf("\nEnter number ");
    scanf("%d",&n);
    n=sumEvenNumber(n);
    printf("\nResult is %d",n);
    return 0;
}
int sumEvenNumber(int number ){
    int sum = 0;
    for(int i =1;i<=number ;i++){
        if(i % 2 == 0){
            sum+=i;
        }
    }
    return sum;
}
