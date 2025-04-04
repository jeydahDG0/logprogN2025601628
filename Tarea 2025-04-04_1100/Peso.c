#include <stdio.h>

int main() {
    float peso, altura, imc;
    int categoria;

    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("\nSu IMC es: %.2f", imc);

    if(imc <= 18.4) categoria = 1;
    else if(imc >= 18.5 && imc <= 24.9) categoria = 2;
    else if(imc >= 25.0 && imc <= 29.9) categoria = 3;
    else if(imc >= 30.0 && imc <= 34.9) categoria = 4;
    else if(imc >= 35.0 && imc <= 39.9) categoria = 5;
    else categoria = 6;

    switch(categoria) {
        case 1:
            printf(" Bajo peso\n");
            break;
        case 2:
            printf(" Peso normal\n");
            break;
        case 3:
            printf(" Sobrepeso\n");
            break;
        case 4:
            printf(" Obesidad clase 1\n");
            break;
        case 5:
            printf(" Obesidad clase 2\n");
            break;
        case 6:
            printf(" Obesidad clase 3\n");
            break;
        default:
            printf(" Error en el cálculo\n");
    }

    return 0;
}
