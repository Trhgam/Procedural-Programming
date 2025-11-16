#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào số nguyên n
Tính giá trị biểu thức
 S = 1.2 + 2.3 + ... n.(n + 1)
 */
int caculate(int n);
int main()
{ //I
    int number;
    printf("\nEnter the number ");
    scanf("%d",&number);
    number=caculate(number);
    printf("\nValue of S expression is %d",number);
    return 0;
}
int caculate(int n){
    int sumOfExpression = 0;
    int valueAfterLoop = 0;
    for(int i = 1; i <= n; i++){
        valueAfterLoop=i*(i+1);
        sumOfExpression+= valueAfterLoop;
    }
    return sumOfExpression;
}
/*
int number,i;
    int sumOfExpression=0;
    int valueAfter1Loop=0;
    printf("\nEnter the number ");
    scanf("%d",&number);

    //P and O
    for(i=0;i<=number;i++){
        valueAfter1Loop=i*(i+1);
        sumOfExpression+=valueAfter1Loop;
    }
    printf("\nValue of S expression is %d",sumOfExpression);

*/
