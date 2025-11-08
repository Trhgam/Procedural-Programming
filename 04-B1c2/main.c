#include <stdio.h>
#include <stdlib.h>
void process(int number1,int number2,int number3);
int main()
{
    int number1,number2,number3;
    printf("Enter a:");
    scanf("%d", &number1);
    printf("Enter b:");
    scanf("%d", &number2);
    printf("Enter c:");
    scanf("%d", &number3);
    process(number1,number2,number3);
    return 0;
}
void process(int number1,int number2,int number3){

    if(number1 >= number2 && number1 >= number3 )
    {
        printf("%d is biggest number ", number1 );
    }else if(number2 >= number1 && number2 >= number3 ){
        printf("%d is biggest number ", number2 );
    }else
    {
        printf("%d is biggest number ", number3 );
    }
}
