#include <stdio.h>
int main(){

	int number1;
        int number2;

        printf("Enter the number1 = ");
        scanf("%d", &number1);

        printf("Enter the number2 = ");
        scanf("%d", &number2);

	if(number1 % number2 == 0){
		printf("Numbers are divisible by each other: \n");
	} else printf("Numbers aren't divisible by each other!!! \n");

	return 0;
}
