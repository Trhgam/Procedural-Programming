#include <stdio.h>
#include <stdlib.h>

int main()
{
    //conditional clause : mệnh đề điều kiện
    /* if(conditional){
        do something
        }
        else{
        do something
        }
    */
    int car =7;
    printf("\nSai gon");
    // gặp biển báo
    if(car <= 7){
        printf("\nPrenn");
    }else if(car==7){
        printf("\nSacom");
    }else{
        printf("\nMimosa");
    }
    //dù đi đường nào
    // if lưới
    //if else if else đỉnh 3 nhánh
    //if if 2 lưới và 1 đường thẳng
    printf("\nDa Lat");


    // tìm hiểu riêng về điều kiện
    // comparison operator : toán tư so sacnh
    // == : so sánh bằng a== b
    // != : so sánh khác a != b
    // > < >= <=
    // mather operator toán tử toán hạng
    // = - * / %
    // increment operator toán tử gia tăng
    // ++ -- += -= %=
    // 0 null . 10 /n 32 space 47 / 48 0 .57 9  65 A 90

    int number = 2;
    number = number + 1;//3
    number+=1;//4
    number++;//5
    ++number;//6
    number *=2;
    int a = 10;
    int b = a++ + ++a - --a - a-- - --a + a--;
    // b = 10 + 12 -11 - 11- 9 + 9
    // a = 8
    //logical operator : toán tử logic
    // AND : Cả 2 mệnh đề đều true ==. tổng  true
    //  && đi tìm false ,nếu tìm được ==> tổng false
    // nếu tìm mãi không được false ==> true
    // || : đi tìm true ,nếu tìm được true ==> tổng true
    // nếu tìm mãi không được true ==> tổng false
    // | chạy cho đến khi hết mới kết luận
    // & : cố gắng đi cho bằng hết rồi mới kết luận
    // OR : 1 trong 2 mệnh đề có true ==> tổng true

    int age = 21;
    int money = 1750000;
    //đi vào bar
    if(age >= 18 && money >= 2000000){
        //được vào
        printf("\nWelcome");
    }else{
        printf("\nCut");
    }

    // demo && và & :
    a = 12;
    b = 5;
    if(a == 10 && b++ > 2){
        printf("\n True a ne %d va b ne %d", a, b);
    }else{
        printf("\n False a ne %d va b ne %d", a, b);
    }

    // demo || và | :
    a = 10;
    b = 5;
    if(a == 10 || b++ > 2){
        printf("\n True a ne %d va b ne %d", a, b);
    }else{
        printf("\n False a ne %d va b ne %d", a, b);
    }

   return 0;
}
