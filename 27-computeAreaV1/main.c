#include <stdio.h>
#include <stdlib.h>
/*
27-computeAreaV1 void-void
*/
void computeAreaV1(void);
int main()
{
    computeAreaV1();
    return 0;
}
void computeAreaV1(void){
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
    printf("Area is %d",S);
}
