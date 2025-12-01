#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào số nguyên s
từ s tính ra thành giờ phút gây
s có thể
*/
int main()
{
    //I
    int number, hours, minutes, seconds;
    printf("Enter number ");
    scanf("%d", &number);

    //P and O
    // change from hours
    hours = ( number / 3600 ) % 24;
    minutes = ( number % 3600 ) / 60;
    seconds =( number % 3600 ) % 60 ;
    printf(" %02d:02%d:02%d", hours, minutes, seconds);


    return 0;
}
