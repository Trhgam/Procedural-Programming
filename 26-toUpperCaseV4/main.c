#include <stdio.h>
#include <stdlib.h>
/*26-toUpperCaseV4
*/
char toUppeerCaseV4(char character);
int main()
{   char ch;
    printf("Enter char:");
    scanf("%c",&ch);
    fflush(stdin);
    ch=toUppeerCaseV4(ch);
    printf("%c",ch);
    return 0;
}
char toUppeerCaseV4(char character){
    if( character >= 97 && character <= 122 ){
        character-= 32 ;
    }
    return character;
}
/*
27 Compute area
enter w and h ;tính diện tích hcn



*/
