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

	
	if(a >= b && a >= c){
		printf("a is a large number: \n");
	}
	 
	if(b >= a && b >= c){
		 printf("b is a large number: \n");
	 }
	 
	if(c >= a && c >= b){
		 printf("c is a large number: \n");
	 }		  
}

