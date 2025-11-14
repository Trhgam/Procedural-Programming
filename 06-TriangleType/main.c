#include <stdio.h>
#include <stdlib.h>
/* 06 -triangleType
Xin người dùng nhập vào a b c lần lươt là 3 cạnh tam giác .
kiểm tra xem có là tam giác khong?
kiểm tra xem nó là tam giác gì ?
*/
int main()
{
    //I
    float a, b, c;
    printf("\nEnter a: ");
    scanf("%f",&a);
    printf("\nEnter b: ");
    scanf("%f",&b);
    printf("\nEnter c: ");
    scanf("%f",&c);

    //P va O
    if( a+b > c && a+c > b && b+c > a ){
        // tam giác gì ?
        if( a==b || b==c || a ==c){
            // can
            if(a == b && b == c){
                //deu
                printf("Tam giac deu");
            }else if( a*a + b*b == c*c ||
                   a*a + c*c == b*b ||
                   c*c + b*b == a*a  ){
                //vuong can
                printf("Tam giac vuong can");
            }else{
                //can
                printf("Tam giac can");
            }
        }else if ( a*a + b*b == c*c ||
                   a*a + c*c == b*b ||
                   c*c + b*b == a*a  ){
            printf("Tam giac vuong ");
        }else{
            printf("Tam giac thuong");
        }
    }else{
        printf("\nNot have triangle");
    }
    return 0;
}
