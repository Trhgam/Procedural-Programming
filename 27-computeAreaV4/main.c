#include <stdio.h>
#include <stdlib.h>
/*
27-computeAreaV4 int-int
*/
int computeAreaV4(int weight ,int hight);
int main()
{
    int w,h;
    int dienTich;
    printf("Enter hight :");
    scanf("%d",&h);
    printf("Enter weight :");
    scanf("%d",&w);
    dienTich=computeAreaV4(w,h);
    printf("Area is %d",dienTich);
    return 0;
}
int computeAreaV4(int weight,int hight){
    int S ;
    if(weight > hight ){
        int tmp ;
        tmp = hight;
        hight = weight;
        weight= tmp;
    }
    S = hight*weight;
    return S;
}
