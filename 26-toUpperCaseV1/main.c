#include <stdio.h>
#include <stdlib.h>
/*27-toUpperCase

*/
void toUpperCase( void );
int main()
{
    toUpperCase();
    return 0;
}

void toUpperCase(void){
    char ch;
    printf("\nEnter characters: ");
    scanf("%c",&ch);
    fflush(stdin);
    if( ch >= 97 && ch <= 122 ){
        ch-= 32 ;
    }
    printf("%c",ch);

}
