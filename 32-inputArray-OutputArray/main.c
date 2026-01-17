#include <stdio.h>
#include <stdlib.h>
void input(int arr[], int *size);
void output(int arr[], int size);
int main(){
    int arr[100];
    int size;
    input(arr, &size);
    output(arr, size);
    return 0;
}

void input(int arr[], int *size){
    printf("\nEnter kich thuoc cua mang: ");
    scanf("%d", size);

    for(int i = 0;i <= *size - 1 ; i++){
        printf("Arr[%d]= ",i);
        scanf("%d", &arr[i]);
    }
}
void output(int arr[],int size){
    printf("\nMang vua nhap la ");
    for(int i = 0 ; i <= size -1 ; i++){
        printf("%5d", arr[i]);
    }

}




/*int main()
{
    int n = 5;
    int arr[MAX];// 1 mang co 100 phan tu ll
    int size ;// kich thuoc gia
    printf("\nNhap so luong ban muon luu tru: ");
    scanf("%d",&size);//7

    //input
    for(int i = 0 ;i<= size - 1 ;i++){
        printf("\nNhap gia tri cho arr[%d]= ",i );
        scanf("%d",&arr[i]);
    }
    //output
    printf("\nMang vua nhap la:");
    for(int i = 0;i <= size -1;i++){
        printf("%3d",arr[i]);
    }

    return 0;
}
*/
//int n = 5;
//int arr[n]= {12,3,4,2,7};
//ở trường hợp truyền số phần tử
//trong array vô thì ko đc gán biến biến thiên vào
//khi khai báo giá trị của các phần tử trong aray
// chỉ đc gán trực tiếp
/*
còn nếu truyên size 5 nhưng chỉ truyền vô 2 ptu
 thì các số còn lại  là 0
khi truyền ptu thì size phải là hằng số
*/
