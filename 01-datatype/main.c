#include <stdio.h>
#include <stdlib.h>

//comment: ghi chú

/*
    công nghệ thông tin là gì :
    I :input đầu vào | lưu trữ
    P :Process : xử lý
    O :Output : đầu ra | báo cáo

    số và kí tự là khác nhau
    số 12 được biểu diễn bằng kí tự '1' và '2'
    datatype : kiểu dữ liệu
    ký tự  character 1byte
    số nguyên int integer 4byte
    số thực float float 4byte
    số thực double | long float 8byte
    sequence
    procedure đi theo từng bậc

*/
// dấu nhắc hệ args

int main()
{
    // I :input đầu vào | lưu trữ
    // muốn lưu cái gì đó cũng phải có đồ chứa
    // variable : chứa value | biến | cái ly,cốc
    // lưu kí tự  đầu tiên trong tên của em đi

    // cách tạo biến
    // 1.xác định kiểu  của value sẽ lưu
    // 2.Đặt tên
        // danh từ thể hiện value đang chứa
        // cammelCase
        // không có số ở đầu
        // không chứa kí tự đặc biệt ngoại trừ ( _ và  $ )
    char firstCharOfName = 'G';
    // tạo ra biến có tên là firstCharOfName  là character 1byte
    // 'd' gán vào firstCharOfName
    // '=' assigment ; phép gán
    int myAge = 19;
    float myMarkOfMath = 7.6;
    double score = 6.5;
    // Process ; xử lý
    score = score + 2;
    // Output : đầu ra | báo cáo
    // in ra màn hình | format
    // printf ("nội dung cần hiện thị");
    // hardcode : code cứng ,đúng nay chết mai
    // softcode : code mềm
    printf("Ky tu dau tien la %c\n", firstCharOfName);
    printf("My age is %i \n", myAge);
    printf("Diem Toan la %.3f\n", myMarkOfMath);
    printf("Score la %.2lf \n", score);
    printf("My age is %u\n", &myAge);
    printf("My age is %u\n", &myMarkOfMath);

    // %i là hằng số hiển thị integer
    // %d là decimal vì số nguyên tồn tại dưới dạng hệ thập phân
    // thanh ram
    // % u là unsign int
    // tạo 2 biến số nguyen bất kỳ tính tổng 2 biến đó
    // I
    int number1=10;
    int number2=3;
    // P
    float result;
    result = number1 /(float)number2;

    // O
    printf("\n%d + %d = %f",number1,number2,result);

    // swap hoán vị ;
    // lưu 2 biến số nguyên ,đổi giá trị bên trong của 2 số nguyên này
    int numb1=13;
    int sting=12;
    //p
    /*int tmp;
    tmp=sting;
    sting = numb1;
    numb1=tmp;
    */
    numb1=numb1+sting;
    sting=numb1-sting;
    numb1=numb1-sting;
    //o
    printf("\nNumer1 la %d va Sting la %d ", numb1, sting);


    return 0;// đưa cho window số 0
}



