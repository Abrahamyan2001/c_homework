#include <stdio.h>
int main(){
	
	char sym;
	int lowercase_vowel;
        int uppercase_vowel;

	printf("Enter the sym value = ");
	scanf("%c", &sym);

	lowercase_vowel = (sym == 'a' || sym == 'e' || sym == 'y' || sym == 'u' || sym == 'i' || sym == 'o');
       	uppercase_vowel = (sym == 'A' || sym == 'E' || sym == 'Y' || sym == 'U' || sym == 'I' || sym == 'O');


	if(lowercase_vowel || uppercase_vowel)
		printf("This is vowel letter! \n");
	 else 
		printf("This is consonant letter! \n");
	
}
