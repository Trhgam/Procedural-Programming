#include <stdio.h>
#include <stdlib.h>
/*29-countPrime

*/
int isPrimeV4 (int number );
int main()
{   int start , end ;
    int count = 0;
    int sum = 0;
    printf("\nEnter start: ");
    scanf("%d",&start);
    printf("\nEnter end: ");
    scanf("%d",&end);

    if(start > end){
        int tmp = start;
        start = end;
        end = tmp;
    }

    for(int i = start ;i <= end ;i++){
        if(isPrimeV4(i)){
            printf("%d ",i);
            count++;
            sum += i;
      }
    }
    printf("\nAll prime is %d ",count);
    printf("\nSum prime is %d ",sum);
    return 0;
}
int isPrimeV4 (int number ){
    for( int j = 2;j <= number - 1;j++){
        if(number % j == 0){
            return 0;
        }
    }
        return number >= 2;
}
