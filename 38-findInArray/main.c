#include <stdio.h>
#include <stdlib.h>
//38-findInArray

const int MAX = 100;
void input(int arr[],int *size);
void output(int arr[],int size);
int findFisrtIndex( int arr[],int size,int key);
void findListIndex(int arr[],int size,int key,int arrR[],int *sizeR);
int main()
{
    int arr[MAX];
    int size;
    int arrR[MAX];
    int sizeR;
    int key;
    input(arr,&size);
    output(arr,size);

    printf("\nNhap so can tim: ");
    scanf("%d",&key);

//          xai ham findFisrt
//    int pos = findFisrtIndex(arr,size,key);
//    if(pos == -1){
//        printf("%d is not exist ",key);
//    }else{
//        printf("%d is existed at %d",key,pos);
//    }
    findListIndex(arr,size, key, arrR, &sizeR);
    output(arrR,sizeR);
    return 0;
}
void findListIndex(int arr[],int size,int key,int arrR[],int *sizeR){
    *sizeR = 0;
    for(int i = 0;i <= size -1 ; i++){
        if(arr[i] == key ){
            arrR[*sizeR] = i;
            (*sizeR)++;
        }
    }

}
int findFisrtIndex(int arr[],int size,int key){

    for(int i = 0;i <= size -1 ; i++){
        if(arr[i] == key ) return i;
    }
    return -1;
}
void output(int arr[],int size){
    printf("\nMang ne:");
    for(int i = 0;i<= size -1 ;i++){
        printf("%5d",arr[i]);
    }
}
void input(int arr[], int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);

    for(int i = 0 ;i <= *size - 1 ; i++){
        printf("\nArray[%d]=",i);
        scanf("%d", &arr[i]);
    }

}

/*
    @Find First Index:
            hàm nhận vào arr và tìm key ( số )
            xem thử key có tồn tại arr không
            nếu có tồn tại thì ném ra vị trí phát hiện
            nếu không tồn tại thì return -1
            arr : 2 1 3 5 7 3 4 size : 7
            i    : 0 1 2 3 4 5 6  key : 3
            return 2

    @Find List Index:
            hàm nhận vào arr ,key ,arrR
            tìm xem key tồn tại ở
                các vị trí nào trong arr
            lưu các vị trí đó vào arR
            arr: 3 2 1 4 5 2 7 key: 2
            i  : 0 1 2 3 4 5 6 size : 7
            => arr 1 5

    @Array In Array:
            tìm mảng trong mẩng
            hàm này nhận vào ar[], key[]
            tìm mảng key có tồn tại trong mảng ar hay không
            nếu có return index
            nếu không return -1
        arr  : 2 3 2 1 3 2 5 2 2
        index: 0 1 2 3 4 5 6 7 8
        key  : 2 5
        retrun 5

    Bài 2 compareArray : so sánh mảng
    hàm nhận vòa ar1[] ,ar2[]
    so sánh 2 mảng return 1 arr1 > arr2
                          -1 arr 1 < arr2
                          0 arr 1 = arr2

    arr1 2 1 5 7
    arr  2 1 3 7 6 9 => arr1 lớn hơn => retrun 1

*/
