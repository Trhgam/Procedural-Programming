#include <stdio.h>
#include <stdlib.h>
/*
31-pointer
*/
int main()
{
    int a = 20;//value address
    int* z = &a;//value address hook
    printf("\n%d",a);//in giá trị
    printf("\n%p",&a);//in địa chỉ a dưới hexa
    printf("\n%p",z);//in ra gia tri bien z
    //%u in ra unsign
    *z -= 2; //dung z dieu khien a giam 2
    printf("\n%p",a);
    return 0;
}
