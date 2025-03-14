#include<stdio.h>
#include<math.h>

int main()
{
    const float L =12, iva =0.16;
    float atrec, arom, at, Cmc, cbruto, cneto, IVA, A, c, b;

    printf("¿Cuanto es el costo por metro cuadrado? ");
    scanf("%f", &Cmc);

    c=(1.0/2.0)*L*2;
    b=c/2;
    A=sqrt(pow (c, 2)- pow (b,2));
    atrec=(b*A)/2.0;
    arom=((A/2.0)*L);
    at=atrec+arom;
    cbruto=at*Cmc;
    IVA=cbruto*iva;
    cneto=cbruto+IVA;

    printf("La hipotenusa completa es: %.2f\n", c);
    printf("La base es: %.2f\n", b);
    printf("La altura del triangulo es: %.2f\n", A);
    printf("El area del triangulo es: %.2f\n", atrec);
    printf("El area del romboide es: %.2f\n", arom);
    printf("Tus metros cuadrados son: %.2f\n", at);
    printf("El costo bruto es: %.2f\n", cbruto);
    printf("El IVA es: %.2f\n", IVA);
    printf("El costo neto es: %.2f\n", cneto);



    return 0;
}
