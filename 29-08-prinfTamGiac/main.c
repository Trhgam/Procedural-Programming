#include <stdio.h>
#include <stdlib.h>
/*
in tam giac
*/
void printfStrangle(int n);
int main()
{   int number;
    printf("Enter number: ");
    scanf("%d",&number);
   printfStrangle(number);

    return 0;
}
void printfStrangle(int n){
    for( int i = 0;i<n;i++){
        for(int j =0;j< 2*n -1;j++){
            if(i==n-1 || j == n-i-1 || j == n +i-1){
                printf("%d",j);
            }else{
                printf("#");
            }
        }
            printf("\n");
    }
}
