#include <stdio.h>
#include <stdlib.h>
/*24-printPatert
    Nhập width và height
    height = 5
    width = 7
    in ra
    *******
    *     *
    *     *
    *     *
    *******

*/
int main()
{
    int height,width;
    printf("Enter heigth : ");
    scanf("%d",&height);
    printf("Enter width : ");
    scanf("%d",&width);
    for (int h = 1;h <= height;h++){
        for(int w =1 ;w <= width ;w++){
            if(w == 1 || h == height || w == width || h == 1 ){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
