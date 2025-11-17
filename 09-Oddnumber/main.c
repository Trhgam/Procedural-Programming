#include <stdio.h>
#include <stdlib.h>

/*
In ra màn hình các số lẻ trong đoạn
Đếm xem có bao nhiêu số trong đoạn
tính tổng các số lẻ trong đoạn
đếm xem có bao nhiêu số chẵn trong đoạn

*/
int main()
{
    //I
    int start, end;
    printf("Enter start number ");
    scanf("%d", &start);
    printf("Enter end number ");
    scanf("%d", &end);

    //P and O
    int i;
    int countAllNumber = 0;
    int sumOddNumber = 0;
    int countEvenNumber = 0;
    for(i=start;i<=end;i++){
        if( i%2 == 1 ){
            printf("%d ",i);
            sumOddNumber +=i;
        }else{
            printf("%d ",i);
            countEvenNumber ++;
        }
        countAllNumber++;
    }
     printf("\nTrong doan co %d so",countAllNumber);
     printf("\nTong cua cac so le la %d ",sumOddNumber);
     printf("\nTrong doan co %d so chan",countEvenNumber);

    return 0;
}
