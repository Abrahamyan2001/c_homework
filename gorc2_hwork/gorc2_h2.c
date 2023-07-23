#include <stdio.h>
int main() {

	int num1;
	int num2;
	
	printf("Enter number1 = ");
	scanf("%d", &num1);

	printf("Enter number2 = ");
	scanf("%d", &num2);

	if(num1 > num2){
		printf("Number1 is more large number than Number2 \n");
	} else {
		printf("Number2 is more large number than Number1 \n");
	}
}
