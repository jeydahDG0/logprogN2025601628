#include<stdio.h>
#include<math.h>

int main()
{
    int x = 7;
    float pi,y,pt,a,b,c,at;
    //Esto es para sacar el perimetro total
    pi=3.1416;
    pt=(23.0/5.0)*x+(pi*x)/2;
    //Esto es para sacar el area total
    a=x*x;
    b=(1.0/5.0)*x*(3.0/5.0)*x;
    c=(1.0/5.0)*x*(1.0/5.0)*x;

    at=a+(2*b)+(2*c)+(pi * pow(x/2.0 , 2))/2.0;
    printf("El perimetro total de la figura es: %.4f\n",pt);
    printf("El area total de la figura es: %.4f\n",at);
    return 0;

}
