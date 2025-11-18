#include <stdio.h>
#include <stdlib.h>
/*15-inputRightForm
ép người dùng nhập v số nguyên đích thực
,nhập sai ép nhập lại đến khi đúng thi thui

*/
int main()
{
    int number;
    char character1;

    do{
        printf("Enter number : ");
        scanf("%d",&number);
        scanf("%c",&character1);
        fflush(stdin);
    }while(character1 != 10);
    return 0;
}
