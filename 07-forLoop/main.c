#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*vòng lặp for
    sytax : cú pháp
    for ( khởi đầu ; điều kiện ; bứơc nhảy ){
        do something
    }
    */
    int i = 1;
    // scope
    // có int trong for thì i ngoài và i trong khác nhau
    // nếu kco thì i ngoài và i trong là i

    for( i=1;i<=6;i++){
        printf("\n%d. Nguyen The Hoang",i);
    }
    printf("\nI sau for la %d",i);
    return 0;
}
