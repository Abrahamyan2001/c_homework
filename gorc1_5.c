#include <stdio.h>
int main(){

int num;
int i;

printf("Enter number = ");
scanf(" %d", &num);

int m = num/2;
int flag = 0;

	if(num == 0 || num == 1){
		printf("Is not price number! \n");
	} else {
		for(i = 2; i <= m; i++){
			if(num % i == 0){
				printf("Is not prime number! \n");
				flag = 0;
				break;
			} else {
				flag=1;
			}
		}
	}
      
	if(num == 2 || num == 3){
		printf("Is prime number! \n");
	}

	if(flag == 1){
		printf("Is prime number! \n");
	} else {
	       	return 0;
	}

	return 0;
}
