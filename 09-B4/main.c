#include <stdio.h>
#include <stdlib.h>

/*Nhập số nguyên dương n bất kỳ.
Viết chương trình vẽ tam giác cân "*" rỗng
có chiều cao là n hàng.
   *
  * *
 *   *
****
*/
int main()
{
    //I
    int n ;
    printf("\nEnter number :");
    scanf("%d",&n);
    int x,y;

    //P and O
    for(y=0;y<n;y++){
        for(x=0;x<2*n-1;x++){
            if(y == n-1 || x == n-y-1 || x == n + y -1   ){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;


    /*
    for(y=0;y<n;y++){
        for(x=0;x<2*n-1;x++){
            if(y == 0 && x == n-1 || y == n-1 && x == n-1   ){
                printf(" * ");//trụ
            }else if(y < n && x == n-y-1 || y < n && x == n+y-1 ){
                printf(" * ");
            }else if(x < 2*n && y == n-1){
                printf(" * ");
                // đáy
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;

    */
}
