#include <stdio.h>
int main(){
	int a;
	int b;
	int c;

	printf("Enter number a = ");
	scanf("%d", &a);

	printf("Enter number b = ");
        scanf("%d", &b);
        
	printf("Enter number c = ");
        scanf("%d", &c);

	if(a == b && a < c){
		printf("C is a large number: \n");
	} else 
		if(b == c && b < a){
		printf("A is a large number: \n");
	} else 
		if(a == c && a < b){
			printf("B is a large number: \n");
		}
		else printf("This is invalid value!!! \n");
}
