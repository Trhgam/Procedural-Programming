#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;
    float x1, x2;
    float delta;
    printf("Enter value a , b ,c to resolve QuadraticEquation\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    delta = (b * b) - (4.0*a*c);

    if( a==0 ){
            if( b == 0 ){
                printf("Inconsistent");
            }else{
                x1=(-c)/b;
                printf("%.2f",x1);
            }
    }else{
            if(b == 0){
                if(c==0){
                    x1 = 0;
                    printf("%.2f",x1);
                }else if(c > 0){
                    printf("Inconsistent");
                }else{
                    x1 = sqrt(-c / a);
                    printf ("\nNghiem cua phuong trinh la x1 = %.2f va x2 = %.2f ", x1, -x1);
                }
            }
            else{
                 x1 =(-b - sqrt(delta)) / (2.0 * a);
                 x2 =(-b + sqrt(delta)) / (2.0 * a);
                 printf ("\nNghiem cua phuong trinh la x1 = %f va x2 = %f ", x1, x2);
            }
    }
    return 0;
}
