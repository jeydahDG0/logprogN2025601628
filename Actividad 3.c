#include<stdio.h>
#include<math.h>

int main ()

{
    int L=2;
    float a,b,c,d,at;
    a=((L*3.0/2*(L))/2);
    b=(1.0/4)*L*L*2;
    c=L*L;
    d=(L*L)/2;
    at=a+b+c+(d*2);


    float pt,z,x,w,h1,h2;
    h1=sqrt((L*L)+(L*L));
    h2=sqrt((L*L)+(3.0/2*L*3.0*L));
    z=h1+L;
    x=h2+(3.0/2*L);
    w=2*((3.0/4*L))+(2*L);
    pt=z+x+w;

    printf("Area total: %.4f\n",at);
    printf("Perimetro total %.4f\n",pt);
    return 0;
}
