#include <stdio.h>
int main(){
	
	char sym;

	printf("Enter value = ");
	scanf("%c", &sym);

	if(sym == 'a' || sym == 'e' || sym == 'y' || sym == 'u' || sym == 'i' || sym == 'o'){
		printf("This is consonant letter! \n");
	} else {
		printf("This is vowel letter! \n");
	}
}
