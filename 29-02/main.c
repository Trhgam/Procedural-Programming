#include <stdio.h>
#include <stdlib.h>
/*
Viết hàm nhờ người dùng nhập vào một số
kiểm tra xem số đó có phải là số chẵn ko
nếu phải return 1 ko thì 0;

*/
int isEven(void);
    int number;
int main()
{
    if(isEven()){
        printf("%d is even number.",number);
    }else{
        printf("%d is not even number.",number);
    }
    return 0;
}
int isEven(void){
    printf("Enter Number:");
    scanf("%d",&number);

    if(number % 2 == 0 ){
        return 1;
    }else {
        return 0;
    }
}
