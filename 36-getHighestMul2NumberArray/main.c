#include <stdio.h>
#include <stdlib.h>
//36-getHighesMul2Array
const MAX = 100;
void input(int arr[],int *size);
void output(int arr[],int size);
void getHighesMul2Array(int arr[], int size);
int main()
{
    int arr[MAX];
    int size ;
    input(arr,&size);
    output(arr,size);
    getHighesMul2Array(arr,size);
    return 0;
}
void getHighesMul2Array(int arr[], int size){
    int max = arr[0] * arr[1];
    for(int i = 0;i <= size - 2;i++){
       for(int j = i + 1;j <= size - 1;j++){
            if(arr[i] * arr[j] > max){
                max = arr[i] * arr[j];
            }
       }
    }
    printf("\nTich lon nhat la % d ",max);
}
void output(int arr[],int size){
    printf("\nMang ne :4");
    for(int i = 0;i <= size - 1;i++){
        printf("%5d",arr[i]);
    }
}
void input(int arr[],int *size){
    printf("\nEnter kich thuoc :");
    scanf("%d",size);

    for(int i = 0;i<= *size -1;i++){
        printf("\nArray[%d]= ",i);
        scanf("%d",&arr[i]);
    }

}
