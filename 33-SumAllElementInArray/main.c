#include <stdio.h>
#include <stdlib.h>
const MAX = 100;
void inputArray(int arr[],int* size);
void outputArray(int arr[],int size);
//sumAllElementInArray
int sumAllElementInArray(int arr[],int size);
float tbcArray(int arr[],int size);

int main()
{
    int arrMain[ MAX ];
    int sizeM = 5;
    int *z = &sizeM ;


    inputArray(arrMain,&sizeM);
    outputArray(arrMain,sizeM);
    int result = sumAllElementInArray(arrMain,sizeM);
    printf("\nSum of Element of Array is %d ",result);
    printf("\nTbc cua cac phan tu trong mang  = %.3f",tbcArray(arrMain,sizeM));
    return 0;
}
void inputArray(int arr[5],int* size ){
    printf("\nNhap do dai mang : ");
    scanf("%d",size);


    for(int i = 0 ;i <= *size - 1;i++ ){
        printf("\nNhap array[%d]= ",i);
        scanf("%d",&arr[i]);
    }

}
void outputArray(int arr[],int size){
    printf("\nMang sau khi nhap la: ");
    for(int i = 0 ;i <= size - 1;i++ ){
        printf("%5d",arr[i]);
    }
}
int sumAllElementInArray(int arr[],int size){
    int sum = 0;
    for(int i = 0 ;i <= size - 1 ; i++ ){
        sum+= arr[i];
    }
    return sum;
}
float tbcArray(int arr[],int size){
    return (sumAllElementInArray(arr,size)*1.0 / (float)size );
}
