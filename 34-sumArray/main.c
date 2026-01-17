#include <stdio.h>
#include <stdlib.h>
/*34-sumArray
*/
const MAX = 100;
void inputarray(int arr[],int* size);
int outputArray(int arr[],int size);
float avgArray(int arr[],int size);
//sumEven in array
int sumEvenArray(int arr[],int size);
//SumIndexEvenArray
int sumIndexEvenArray(int arr[],int size);
int main()
{
    int arrMain[MAX];
    int sizeMain;
    inputarray(arrMain,&sizeMain);
    float  tmp =avgArray(arrMain,sizeMain);
    printf("\nResult :%.2f",tmp);
    printf("\nSum Even in Array is %d",sumEvenArray(arrMain,sizeMain));
    printf("\nSum Index Even in Array is %d",sumIndexEvenArray(arrMain,sizeMain));
    return 0;
}
int sumIndexEvenArray(int arr[],int size){
    int sumIdexEven = 0;
    for(int i =0;i<= size-1;i++){
       if( arr[i] % 2 == 0){
        sumIdexEven += i;
       }
    }
    return sumIdexEven;
}
void inputarray(int arr[],int* size){
    printf("Enter kich thuoc: ");
    scanf("%d", size);

    for(int i = 0 ; i <= *size - 1; i++){
        printf("\nArray[%d}",i);
        scanf("%d",&arr[i]);
    }

}
int outputArray(int arr[],int size){
    int sum = 0;
    printf("\nArray:");
    for(int i =0;i<= size-1;i++){
        printf("%d ",arr[i]);
        sum+= arr[i];
    }
    printf("\n");
   return sum;
}
float avgArray(int arr[],int size){
    int sum = outputArray(arr,size);
    return (float)sum/(float)size;
}
int sumEvenArray(int arr[],int size){
    int sumEven = 0;
    for(int i =0;i<= size-1;i++){
       if(arr[i] % 2 == 0){
        sumEven += arr[i];
       }
    }
   return sumEven;
}
