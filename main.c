#include <stdio.h>

int main() {
    float num1,num2,media;
    printf("inserisci primo numero:");
    scanf("%f", &num1);
    printf("inserisci secondo numero:");
    scanf("%f", &num2);
    media=(num1+num2)/2;
    printf("media = %.2f", media);
    return 0;
}
