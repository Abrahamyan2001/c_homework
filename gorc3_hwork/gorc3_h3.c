#include <stdio.h>

int main() {

        int number = 0;
        puts("Enter the number: ");
        scanf("%i", &number);

        int number2 = 1 << 5;

        if((number ^ number2) - number2 == number){
                number ^= number2;
                printf("New number is` %i\n", number);
        }
        else {
                printf("Bit is not a 0!\n");
        }

        return 0;
}



/*
int main(){

        int arr[32];
        int a;
        scanf("%d", &a);

        for(int i=0; i<32; i++){
                arr[i] = 0;
        }

        for(int i=0; i<32; i++){
                if(a == 1){
                        arr[31-i] = 1;
                        break;
                } else {
                        arr[31-i] = a % 2;
                        a /= 2;
                }
        }

        if(arr[31-5] == 0){
                arr[31-5] = 1;
        }

        for(int i=0; i<32; i++){
                printf("%d", arr[i]);
        }

        int sum = 0;
        int q = 1;

        for(int i=31; i>=0; i--){
                sum += arr[i] * q;
                q *= 2;
        }

        printf("\n sum = %d \n", sum);

        return 0;
}
*/
