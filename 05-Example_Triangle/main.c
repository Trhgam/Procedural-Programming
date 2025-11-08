#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float a,b,c;
    printf("Enter sequential the length of three sides ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if( a+b > c && a+c > b && b+c > a){
            if(a == b || b == c || a == c) {
                if(a && b || b && c || a && c ){
                    printf("Tam giac deu ");
                }else if( pow(a,2) + pow(b,2)== pow(c,2) || pow(b,2) + pow(c,2)== pow(a,2) || pow(a,2) + pow(c,2)== pow(b,2) ){
                    printf("Tam giac vuong can");
                }else{
                    printf("Tam giac can");
                }
            }else if(pow(a,2) + pow(b,2)== pow(c,2) || pow(b,2) + pow(c,2)== pow(a,2) || pow(a,2) + pow(c,2)== pow(b,2)){
                printf("Tam giac vuong");
            }else{
                printf("Tam giac thuong");
            }
    }else{
        printf("Khong phai tam giac");
    }
    return 0;
}

