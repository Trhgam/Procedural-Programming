#include <stdio.h>
#include <stdlib.h>
/*
Nhập vào n
kiểm tra xem có phải
là số tới không
vd n = 249 true
n = 115 false
\
*/
int main(){
    int number, curr;
    int check = 1;
    int prev = 10;// khi xét % để bỏ qua bước gán đầu
                //và để check ko thành 0 khi xét số đầu tiên
    printf("\nEnter number ");
    scanf("%d", &number);

    for(; number>0; ){
            check = 1;//465  // 46
            curr = number % 10; // curr= 5 < prev = 10;//curr = 6
            if( curr > prev ){ //curr = 6   prev = 5
                check = 0;      //check = 0 va break khoi for loop
                break;
            }
            prev = curr;//prev = 5 // prev =5
            number /= 10;
        }
    if(check == 0 ){
        printf("\nKhong phai so toi");
    }else{
        printf("\nla so toi ");
    }
    return 0;
}
