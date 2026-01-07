#include <stdio.h>
#include <stdlib.h>
/*24-upperCase
Nhập vàp 1 kí tự
nếu ký tự đó là chữ thường
hãy biến nó thành hoa
dù là kí tự gì cũng in ra màn hình

*/
int main()
{
    printf("\nEnter character :");
    char ch;
    scanf("%c",&ch);
    if(ch >=97 && ch <= 122 ){
        ch-= 32;
    }
    printf("\nCharacter is %c ", ch);
    return 0;
}
