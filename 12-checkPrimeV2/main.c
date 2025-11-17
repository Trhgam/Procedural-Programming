#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("\nEnter number: ");
    scanf("%d",&number);
    int flag =1;

   if(number >= 2){
    for(int i = 2; i<= number - 1;i++){
        if(number % i ==0){
           flag =0;
           printf("Not Prime");
           return 0;
        }
    }
        if(flag == 1){
            printf("Is Prime ");
        }
   }else{
        printf("Not Prime");
   }

    return 0;
}
