#include <stdio.h>
int main(){

	int n = 0;
	int sum = 0;

	do{
		
	printf("Enter the number`");
	scanf("%d", &n);

	}
	while(n < 12);

	while(n != 0)
	{
	        sum += n % 10;
		n = n / 10;
	
	}
	printf("%d \n", sum);
	

	return 0;
}
