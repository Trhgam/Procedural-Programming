#include <stdio.h>
#include <stdlib.h>
/*
primeProgram
ép nguoi dùng nhap so nguyên dich thuc
nhap sai ép nhap lai cho toi khi nào
ðúng thi thôi
sau khi nhap ðúng thi check xem
nó có phai so nguyen to hay không
kiem tra xong thi ql ép nguoi  dùng nhap tiep n
cho den khi nào nguoi dùng nhap so 0 thi ngung ctrinh
chào tam biet


 -------- mô ta ung dung -------
nhap number : 12
12 not prime
nhap number : 12a
ko bt nhap ha ?
nhap number : 13
13 is prime
nhap number 9
9 not prime
nhap number : 0
byeee


*/

int main(int argc, char *argv[]) {
	//I
	int number, i;
	int flag = 1;
	char buffer;

	do{
	 	printf("\nEnter interger number : ");
	 	scanf("%d", &number );
	 	scanf("%c",&buffer );
	 	if(buffer != '\n' && printf("Enter again ! ") ){
	 		fflush (stdin) ;
	 		do{
	 			printf("\nEnter interger number : ");
	 			scanf("%d", &number );
	 			scanf("%c",&buffer );
			}while( getchar() != '\n'  );
		}else{
		 	if(number >= 2 ){
		 		for( i = 2 ; i <= number-1 ; i++){
		 			flag = 1;
		 			if(number % i == 0){
		 				flag = 0;
		 			}	break;
				}
			}else{
				flag = 0;
			}
		}
		if(number == 0 ){
			printf("\nByeee");
			return 0;
		}
		if(flag == 0){
			printf("\n%d is not  Prime ", number );
		}else{
			printf("\n%d is Prime ", number );
		}

	}while( number != 0 );


	return 0;
}
