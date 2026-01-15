#include <stdio.h>
#include <stdlib.h>
/*Viết 1 hàm nhận vào 2 biến
hàm đó swap gtri 2 bien

*/
void swapValue2(int* n1,int* n2);
int main()
{
    int a,b;
    a = 5;
    b = 6;
    swapValue2(&a,&b); //chỉ chơi với địa chỉ nên truyền vào agrument là địa chỉ
    //của biến thì giá trị trong biến khi qua hàm sẽ thay đổi
    printf("Enter number a %d and b %d: ",a,b);
    return 0;
}
void swapValue2(int* n1,int* n2){
    //int *n1 = &a;
    //int * n2 = &b;
    //*n1 <=> a
    int tmp = *n1;
    *n1 = *n2;
    *n2 = tmp;
}
