#include <stdio.h>
#include <stdlib.h>
/*
27-computeAreaV2 void-int
*/
void computeAreaV2( int w,int h,int S );
int main()
{
    int w,h;
    int S;
    printf("Enter hight :");
    scanf("%d",&h);
    printf("Enter weight :");
    scanf("%d",&w);
    computeAreaV2(w,h,S);
    return 0;
}
void computeAreaV2( int w,int h,int S ){
    if(w > h ){
        int tmp ;
        tmp = h;
        h = w;
        w = tmp;
    }
    S = h*w;
   printf("Area is %d",S);
}
