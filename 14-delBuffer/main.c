#include <stdio.h>
#include <stdlib.h>
/*14. delBuffer

*/

int main()
{
    int age ;
    char name;
    do{
    printf("\nEnter age: ");
    scanf("%d",&age);
    scanf("%c%*s",&name);
    //fflush(stdin); //xóa bộ nhớ đệm
    }while(name != 10);

    printf("%d",age);
    printf("%c",name);

    return 0;
}
