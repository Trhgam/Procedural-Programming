#include <stdio.h>
#include <stdlib.h>
//20-printFormat
/*
Ép nguoi dùng nhập 1 ký tự (alphabet a-)
nếu nhập sai ép nhập lại
sau khi nhp đúng thì in ra màn hình
*/
int main()
{
    char kiTu;
    char buffer;
    do{
    printf("\nEnter character :");
    scanf("%c", &kiTu);
    fflush(stdin);
    if( kiTu >= 'z' || kiTu <= 'a'){
        printf("Enter again ");
    }
    }while( kiTu >= 'z' || kiTu <= 'a' );


    return 0;
}
/*
*primeProgram
ép người dùng nhập số nguyên đích thực
nhập sai ép nhập lại cho đến khi nào
đúng thì thôi
sau khi nhập đúng thì check xem
nó có phải số nguyen tố hay không
kiểm tra xong thì ql ép người dùng nhập tiếp n
cho đến khi nào người dùng nhập số 0 thì ngừng ctrinh
chào tạm biệt
 -------- mô tả ứng dụng -------
nhập number : 12
12 not prime
nhập number : 12a
ko bt nhập hả
nhập number : 13
13 is prime
nhập number 9
9 not prime
nhập number : 0
byeee


*/
