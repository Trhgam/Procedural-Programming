#include <stdio.h>
#include <stdlib.h>
/*23-MulSumOdd
tính tích các số lẻ và chẵn
 từ 1 đến n

*/
int main()
{
    int number ;
    int mulOdd = 1;
    int mulEven = 1;
    char buff;
    do{
        printf("\nEnter number : ");
        scanf("%d",&number);
        scanf("%c",&buff);
        if(buff != 10 || number < 2){
            printf("\nEnter Again");
        }
    }while(buff != 10 || number < 2);

    for(int i = 1 ;i < number ; i++ ){
        if(i % 2 == 0){
            mulEven *= i;
        }else{
            mulOdd *= i;
        }
    }
    printf("\nTich cac so chan la %d ",mulEven);
    printf("\nTich cac so chan la %d ",mulOdd);
    return 0;
}
