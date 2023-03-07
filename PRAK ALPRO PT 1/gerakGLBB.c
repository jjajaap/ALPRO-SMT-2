#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus Lokal
    float v0;
    float t;
    float a;
    float S;

    //Algoritma
    printf("Masukkan nilai v0 : ");
    scanf("%f", &v0);

    printf("Masukkan nilai t : ");
    scanf("%f", &t);

    printf("Masukkan nilai a : ");
    scanf("%f", &a);

    printf("Diketahui : \n");
    printf("v0 : %f\n", v0);
    printf("t : %f\n", t);
    printf("a : %f\n", a);
    printf("S = v0*t + ((a*t*t)/2)\n");
    printf("S = %f*%f + ((%f*%f*%f)/2)\n",v0,t,a,t,t);

    S = v0*t + ((a*t*t)/2);
    printf("S = %f", S);

}
