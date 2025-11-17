#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*09-inductiveResult
nhập vào n tính 1^n + 2^n + ... + n^n
n =5  ==> 4425

 10-Fatorial
 nhập vào n tìm !
 5!=125

 11- Fibonancci
 nhập vào n tìm số fibonacci ở vị trí thứ n trong dãy
*/
int main()
{

    //I

    int number1;
    int sumInductiveResult = 0;
    printf("\nEnter number ");
    scanf("%d",&number1);

    //P and O
    for(int i = 0;i<=number1 ;i++ ){
        sumInductiveResult+= pow(i,number1);
    }
    printf("\nsumIncuctiveResult is %d",sumInductiveResult);


    //2

    int number2;
    printf("\nEnter number ");
    scanf("%d",&number2);
    int result=1;
    for(int i = 1;i<=number2 ;i++ ){
        result*=i;
    }
    printf("\n result is %d",result);



    //3
    int fibonnancciNumber;
    int result1, prev, curr;
    curr = 1;
    prev = 0;
    result1 = 1;
    printf("\nEnter number ");
    scanf("%d", &fibonnancciNumber);

    //i = 2 fibo
    for(int i = 1 ; i <= fibonnancciNumber - 1 ; i++ ){
            result1 = prev + curr;
            prev = curr;
            curr = result1;

    }
    printf("Result is %d",result1);
    /*
    int fibonnancciNumber;
    int result1,prev,curr;
    curr=1;
    prev=0;
    result1=0;
    printf("\nEnter number ");
    scanf("%d",&fibonnancciNumber);

    //i =2 fibo
    for(int i =1 ; i <=fibonnancciNumber ;i++){
                prev=curr;
                curr=result1;
                result1= prev+curr;

    }
    printf("Result is %d",result1);
    */



    return 0;

}
