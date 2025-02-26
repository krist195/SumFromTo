#include <stdio.h>

int main(){

    int a;
    printf("Vvedi cifru ot:\n");
    scanf("%d", &a);

    int b;
    printf("Vvedi cifru do:\n");
    scanf("%d", &b);

    int c = 0;
    int sum = 0;

    if (a < b){
        c = b - a;
        for (int i = 0; i < c; i++){
            sum = sum + a;
            printf("Console: %d sum\n", sum);
            a = a + 1;
            printf("Console: %d a\n", a);
        }
    } else{
        c = a - b;
        for (int i = 0; i < c; i++){
            sum = sum + b;
            b = b + 1;
        }
    }
    printf("%d", sum);

    return 0;
}