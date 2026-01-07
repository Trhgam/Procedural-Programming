#include <stdio.h>
#include <stdlib.h>
//26-toUpperCaseV2
void toUpperCaseV2 (char ch);
int main()
{
    char character;
    printf("Enter char:");
    scanf("%c",&character);
    fflush(stdin);
    toUpperCaseV2(character);
    return 0;
}
void toUpperCaseV2(char ch){
    // char ch = character
    //tham số là số tham khảo gtri đối số
    //đối số là số cho tham số đối chiếu
    if( ch >= 97 && ch <= 122 ){
        ch-= 32 ;
    }
    printf("%c",ch);
}
