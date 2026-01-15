#include <stdio.h>

void output(int arr[],int size);
void input( int arr[], int *size);
void copyArray(int arrM[], int *sizeM, int arrS[], int sizeS);
void concatArray(int arrM[],int *sizeM, int arrS[], int sizeS);
int compareInArray(int arrM[],int sizeM, int arrS[], int sizeS);
void reverseArray(int arrM[],int sizeM);
void divArray(int arrM[],int *sizeM,int pos,int arrS[],int *sizeS);
int DelOnePosInArray(int arrM[],int *sizeM,int pos);
int DelAllSameKey(int arrM[],int *sizeM,int key);
int DelKeyOnlyBringOne(int arrM[],int *sizeM);
int insertToArray(int arrM[], int *size, int pos , int value);
int findSubInSup(int arrM[],int sizeM, int arrS[], int sizeS);
int DelSubInSup(int arrM[],int *sizeM, int arrS[], int sizeS);
int maxSumThreeInArr(int arr[],int sizeM);
void sortInArray(int arr[],int size);
void sortInArrayYero(int arr[],int size);
int main(){
    int arrM[]={1,2,2,4,4,6};
    int sizeM = 6;
    int arrS[]={8,9,4,5};
    int sizeS = 4;
    //copyArray(arrM,&sizeM,arrS,sizeS);
    //concatArray(arrM,&sizeM,arrS,sizeS);
    int result = DelSameKey(arrM, &sizeM, 2);
    //printf("\nKet qua so sanh M va S la : %d", result);
    //reverseArray(arrM,sizeM);
    //divArray(arrM, &sizeM,2, arrS, &sizeS);

    printf("\nMang M ne:");
    output(arrM,sizeM);
    printf("\nMang S ne:");
    output(arrS, sizeS);
    return 0;
}
void input( int arr[], int *size){
    printf("\nNhap kich thuoc mang: ");
    scanf("%d",size);
    for(int i =0 ;i<= *size -1 ;i++){
        printf("\nArray[%d]",i);
        scanf("%d",&arr[i]);
    }
}
void copyArray(int arrM[], int *sizeM, int arrS[], int sizeS){
    *sizeM = 0;
    for(int i = 0; i<= sizeS -1; i++){
        arrM[*sizeM] = arrS[i];
        (*sizeM)++;
    }
}
void output(int arr[], int size){
    for(int i = 0;i<= size -1;i++){
        printf("%5d",arr[i]);
    }

}
void concatArray(int arrM[],int *sizeM, int arrS[], int sizeS){
    for(int i = 0 ; i <= sizeS - 1; i++){
        arrM[*sizeM] = arrS[i];
        (*sizeM)++;
    }
}
int compareInArray(int arrM[],int sizeM, int arrS[], int sizeS){
    int size = sizeM < sizeS ? sizeM : sizeS;
    for(int i = 0; i <= size - 1; i++){
        if(arrM[i] > arrS[i]){
            return 1;
        }else if(arrM[i]< arrS[i]){
            return -1;
        }
    }
    if(sizeM > sizeS) return 1;
    else if (sizeM == sizeS ) return 0;
    else return -1;
}
void reverseArray(int arrM[], int sizeM){
    for(int i = 0;i <= sizeM / 2 -1;i++){
        int tmp = arrM[i];
        arrM[i]= arrM[sizeM - 1 - i];
        arrM[sizeM - i - 1] = tmp;
    }
}
void divArray(int arrM[], int *sizeM, int pos,int arrS[],int *sizeS){
//    if( pos < 0 || pos > *sizeM ) return 0;
    *sizeS = 0;
    for(int i = pos ;i <= *sizeM - 1;i++){
        arrS[(*sizeS)] = arrM[i];
        (*sizeS)++;
    }
    *sizeM = pos;
}
int DelOnePosInArray(int arrM[], int *sizeM, int pos){
    if(pos < 0 || pos > *sizeM) return 0;
    for(int i = pos ; i <= *sizeM - 1; i++){
        arrM[i] = arrM[i+1];
    }
    (*sizeM)--;
}
int DelSameKey(int arrM[], int *sizeM, int key){
    int count = 0;
    for(int i = 0; i <= *sizeM - 1; i++){
        if(arrM[i] == key){
            int kq = DelOnePosInArray(arrM, sizeM,i);
            i--;
            count ++;
        }
    }
    return count;
}
int DelSameKeyOnlyBringOne(int arrM[], int *sizeM){
    for(int i = 0; i <= *sizeM - 2; i++){
        for(int j = 1; j<= *sizeM - 1; j++){
            if(arrM[i] == arrM[j]){
                int kq = DelOnePosInArray(arrM, sizeM, j);
            }
        }
    }
}
int insertToArray(int arrM[], int *size, int pos , int value){
    for(int i = *size - 1 ;i>= 0;i--){
            arrM[i + 1] = arrM[i];
    }
    arrM[pos] = value;
    (*size) ++;
}
int findSubInSup(int arrM[], int sizeM, int arrS[], int sizeS){
    for(int i = 0;i <= sizeM - 1;i++){
        int flag = 1;
        for(int j = 0 ;j<= sizeS -1; j++){
            if(arrM[i+j] != arrS[j]){
                flag = 0;
                break;
            }
        }
        if(flag) return i;
    }
    return -1;
}
int DelSubInSup(int arrM[], int *sizeM, int arrS[], int sizeS){
    int found =  findSubInSup(arrM, *sizeM,arrS,sizeS);
    printf("\nFound %d",found);
    if (found != -1 ){
        for(int i = found; i<= sizeS - 1;i++){
            arrM[i]= arrM[i+sizeS];
        }
    (*sizeM) -= sizeS;
    return 1;
    }
    return -1;
}
int maxSumThreeInArr(int arr[], int sizeM){
     if (sizeM < 3) {
        printf("Mảng phải có ít nhất 3 phần tử.\n");
        return -1; // Nếu mảng có ít hơn 3 phần tử, trả về lỗi.
    }
    int max = arr[0] + arr[1] +arr[2];
    printf("\nKet qua %d", max);
    for(int i = 0;i<= sizeM - 3;i++ ){
        for(int j = i + 1;j <= sizeM - 2 ; j++){
            for(int k = j + 1;k <= sizeM - 1;k++){
                if((arr[i] + arr[j] + arr[k]) > max){
                    max = (arr[i] + arr[j] + arr[k]);
                }
            }
        }
    }
    printf("\nKet qua %d", max);
    return max;
}
void sortInArray(int arr[], int size){
    for(int i = 0 ;i <= size - 2;i++){
        for(int j = i + 1;j <= size -1;j++){
            if(arr[i] < arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
void sortInArrayYero(int arr[], int size){
     for(int i = 0 ;i <= size - 2;i++){
        for(int j = i + 1;j <= size -1;j++){
            if(arr[i] != 0 && arr[j] != 0){
                if(arr[i] > arr[j]){
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }
}














/*
B1 xoa cac so bi trung trong mang
    arr: 5 7 7 7 5 4
    i  : 0 1 2 3 4 5

    ==> arr: 5 7 4

B2 nhet mang nho vao mnag lon o vi tri pos
    SubArr: 2 3 6
    pos   : 5
    SupArr: 9 5 7 9 7 1 5
    ==> SupArr: 9 5 7 9 7 2 3 6 7 1 5





*/







