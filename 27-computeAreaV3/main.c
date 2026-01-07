#include <stdio.h>
#include <stdlib.h>
/*
27-computeAreaV3 int-void
*/
int computeAreaV3(void);
int main()
{
    int dienTich;
    dienTich=computeAreaV3();
    printf("Area is %d",dienTich);
    return 0;
}
int computeAreaV3(void){
    int w,h;
    int S;
    printf("Enter hight :");
    scanf("%d",&h);
    printf("Enter weight :");
    scanf("%d",&w);
    if(w > h ){
        int tmp ;
        tmp = h;
        h = w;
        w = tmp;
    }
    S = h*w;
    return S;

}
