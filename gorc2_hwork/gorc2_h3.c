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

int max = a;

        if( (a == b) || (b == c) || (a == c) ){
                
                if(max < b){
                        max = b;
        } else if (max < c){
                max = c;
        } else { 
		max = a;
	}
		
		printf("max = %d\n", max);
	}
        else {
                printf("Aren't equvale numbers !!! \n");
        }
        
                
                
                
}     
