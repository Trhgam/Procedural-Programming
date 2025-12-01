#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter number ");
    scanf("%d",&number);
    int i,j;
    for( i=0;i <= ((number*2)-2) ; i++){
        for(j = 0;j <= ((number*2)-2); j++){
            if(i == number - 1 || j == number - 1 ||
                ( j == i && j != 0 && j != number +1)  ||
                (i+j <= number-1 && i != 0  && j != 0    ) ){
                printf(" * ");

            }else{
                printf("   ");

            }
        }
        printf("\n");
    }


    return 0;
}
