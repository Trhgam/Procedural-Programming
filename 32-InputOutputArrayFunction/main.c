#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
/*
    viết hàm nhận vào mảng và kích thước của  mảng
    hàm xin người dùng kích thước và giá trị
    cho mảng inputArray

*/
void inputArray(int array[],int* size);
void outputArray(int array[],int size);
int main(){
    int arrMain[MAX];
    int sizeMain = 0;
    inputArray(arrMain, &sizeMain);
    outputArray(arrMain,sizeMain);
    return 0;
}
    //int array[] = arraMain == &arrMain[0] pointer
    // int *size = &sizeMain pointer

void inputArray(int array[],int* size){
    printf("\nNhap kich thuoc : ");
    scanf("%d", size );// dia chi bien bi tro
     //size = 5 but sizeMain still 0;
    for(int i = 0 ; i <= *size - 1; i++){
        printf("\nArray[%d] = ",i);
        scanf("%d",&array[i]);
    }
}
void outputArray(int array[],int size){

    printf("\nMang vua nhap la: ");
    for(int i =0;i <= size - 1 ;i++){
        printf("%5d",array[i]);
    }
}
