#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;
void input(int arr[],int *size);
void output(int arr[],int size);
void cpyArray(int arrS[],int *sizeS,
              int arrM[] ,int sizeM);// gan doi xung
void cpyArrayV2(int arrS[],int *sizeS,
              int arrM[] ,int sizeM);//nhet
void concatArrayV2(int arrS[],int *sizeS,
              int arrM[] ,int sizeM);
int main()
{
    int arr1[100]={3,1,2,7,5};
    int size1 = 5;
    int arr2[100]={2, 6, 7};
    int size2 = 3;
    printf("\nMang 1 ne: ");
    output( arr1, size1);
    printf("\nMang 2 ne: ");
    output( arr2, size2);

    //use function
    concatArrayV2Array(arr1, &size1 ,arr2, size2);
    // size copy se thay doi
    //*sizeS = 0;

    //in ket qua
    printf("\nSau copy");
    printf("\nMang 1 ne: ");
    output( arr1,size1);
    printf("\nMang 2 ne: ");
    output( arr2,size2);

    //cpyArrayV2(arr1, &size1 ,arr2, size2);


    return 0;
}
void concatArrayV2(int arrS[],int *sizeS,int arrM[] ,int sizeM){

    for(int i = 0;i<= sizeM -1;i++){
        arrS[*sizeS] = arrM[i];
        (*sizeS)++;
    }
}
void cpyArrayV2(int arrS[],int *sizeS,int arrM[] ,int sizeM){
    //nhét để copy
    //1.xóa mảng đi rồi mới copy
    *sizeS = 0;// khong co dòng này thì nó thành nối 2 mảng
    for(int i = 0;i<= sizeM -1;i++){
        arrS[*sizeS] = arrM[i];
        (*sizeS)++;
    }
}
void cpyArray(int arrS[],int *sizeS,int arrM[] ,int sizeM){
    for(int i = 0; i <= sizeM - 1; i++){
        arrS[i] = arrM[i];
    }
    *sizeS = sizeM;

}
void output(int arr[],int size){
    for(int i = 0;i <= size - 1;i++){
        printf("%5d",arr[i]);
    }
}
void input(int arr[],int *size){
    printf("\nNhap kich thuoc: ");
    scanf("%d",size);
    for(int i = 0;i<= *size - 1;i++){
        printf("\nArray[%d] = ",i);
        scanf("%d",&arr[i]);
    }
}



/*Array Assigment : gán mảng | nhét mảng
    #cpyArray: sao chép mảng
         copy thì như nào ?
         a = 10;
         a = b;==> a copy b
            a là người đi copy: a thay đổi giá trị
            b là người bị copy: b không thay đổi gtri



    #concatArrayV2: nối mảng nhét

    #concatArrayV1: nối mảng
        hàm nhận vào mảng 1 | mảng | mảng 3
        hàm sau xử lý :    mảng 1 ko dổi
                            mảng 2 không đổi
                            mảng 3 sẽ là mảng 1 + mảng 2
            b1: xóa mảng 3
            b2: nhét mảng 1 vào 3
            b3: nhét mảng 2 vào 3 ( dùng nối )


    #reverseArray: đảo ngược mảng
        hàm nhận vào 1 mảng duy nhất
        sau xử lý mảng bị đảo ngược
    c1: nhét
    c2: swap đối xứng

    dán đối ứng| nhét| swap đối xứng | duyệt ngược



*/
