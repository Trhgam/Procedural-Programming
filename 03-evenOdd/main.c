#include <stdio.h>
#include <stdlib.h>
// xin người dùng cho mình một số nguyên từ bàn phím

// lưu trữ một số nguyên dương ,kiểm tra số nguyên dương đó xem là chẵn hay lẻ
//  in ra màn hình kết quả vừa kiểm tra
int OddEven(int n);
int main()
{
    //I
    int number;
    printf("\nEnter number :");
    scanf("%d",&number);
    int tmp = number;
    number = OddEven(number);
    //P và O
    if(number  == 0){
        printf("\n%d is Odd  number ",tmp);
    }else{
        printf("\n%d is Even number ", tmp);
    }

    //& và bynary + teraray operator
    return 0;
}
int OddEven(int n){
    if(n % 2 == 0){
        return 1;
    }else{
        return 0;
    }
}
/*
B1 xin người dùng nhập vào a b c là 3 số nguyen
tìm xem biến nào trong a b c đang có giá trị lớn nhất
    a có giá trị lớn : a>b && a > c
    a và b cùng lớn nhất : a == b && a > c
    3 biến bằng nhau  : a == b && b == c
B2 xin người dùng nhập a b c là đại diện độ dài của 3 cạnh
kiểm tra xem a b c đó có tạo thành tam giác không ?
nếu có thì phải là tam giác gì ?
+ if [2 cạnh còn lại cộng phải lớn hơn cạnh t3 :
 - cân
        * vuông. hoặc a vuông họặc b vuông hoặc c vuông
        * đều
        * ko có gì ==> tam giác thường ) ,
 - vuông
+ else
B3 QuadraticEquation giải pt bậc 2
xin người dùng nhập vài a b c
tìm x trong pt ax^2 +bx +c=0
3^7 => pow(3,7)
căn bậc 2 của 5 => qrt(5)

căn bậc 7 của 5 =>  pow(5,1.0/7)
*/



//B1

