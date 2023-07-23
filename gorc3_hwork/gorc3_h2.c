#include<stdio.h>

// gcd - greatest common divisor

int gcd1(int a, int b){

	if(b == 0){
		return a;
	} else {
		return gcd1(b, a%b);
	}
}

int gcd2(int c, int a, int b){

	return gcd1(c, gcd1(a,b));
}


int main(){

	int a, b, c;

	printf("Enter the a = ");
	scanf("%d", &a);
	printf("Enter the b = ");
	scanf("%d", &b);
	printf("Enter the c = ");
	scanf("%d", &c);

	int gcd = gcd2(a, b, c);
	printf("gcd = %d \n", gcd);
}


