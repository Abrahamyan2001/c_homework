#include <stdio.h>
int main(){

	int number1;
        int number2;
	int number3;
        int number4;
	int sum = 0;

	printf("Enter the number1 = ");
	scanf("%d", &number1);

	printf("Enter the number2 = ");
        scanf("%d", &number2);
	
	printf("Enter the number3 = ");
        scanf("%d", &number3);
	
	printf("Enter the number4 = ");
        scanf("%d", &number4);
        
        sum = number1 + number2 + number3 + number4;	
	
	if(sum == 0){
	
		if(number1 < number2 && number1 < number3 && number1 < number4){
			printf("The smallest number is number1 = %d \n", number1);
		} else 
			if(number2 < number3 && number2 < number4){
			printf("The smallest number is number2 = %d \n", number2);
		} else 
			if(number3 < number4){
			printf("The smallest number is number3 = %d \n", number3);
		} else printf("The smallest number is number4 = %d \n", number4);
	} 
	
	else printf("The sum of the numbers is not equal to 0! \n");

	return 0;
}
