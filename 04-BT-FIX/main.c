#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 05-QuadraticEquaoltion
xin người dùng nhập vào a b c
tìm nghiệm của pt ax^2 + bx + c = 0
*/
int main()
{
    //I
    float a ,b , c;
    printf("\nNhap a: ");
    scanf("%f",&a);
    printf("\nNhap b: ");
    scanf("%f",&b);
    printf("\nNhap c: ");
    scanf("%f",&c);

    //SOLID - Single responsive priciple

    //P và O
     float delta = b*b - (4*a*c);
     if( a == 0){
        if(b == 0){ // c=0
                if(c==0){
                    printf("\nPt vo so nghiem");
                }else{
                    printf("Pt vo nghiem");
                }
        }else{ // b!= 0
            printf("\nPt 1 nghiem x= %f ", -c/b);
        }
     }else{
        float delta = b*b - 4 *a*c;
        //xet delta voi 0
        if(delta > 0){
            float x1 = (-b + sqrt(delta))/ 2*a;
            float x2 = (-b - sqrt(delta))/ 2*a;
            printf("Ptrinh co 2 nghiem phan biet %.2f ", x1);
            printf("Ptrinh co 2 nghiem phan biet %.2f ", x2);
        }else if(delta == 0){
            printf("Phuong trinh cos nghiem kep %.2f", -b/(2*a) );
        }else{
            printf("Pt vo nghiem");
        }
     }
    return 0;
}
