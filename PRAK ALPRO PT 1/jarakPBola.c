#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus Lokal
    float v0;
    float t;
    float g;
    float y;

    //Algoritma
    printf("Masukkan nilai v0 : ");
    scanf("%f", &v0);

    printf("Masukkan nilai t : ");
    scanf("%f", &t);

    printf("Masukkan nilai g : ");
    scanf("%f", &g);

    printf("Diketahui : \n");
    printf("v0 : %f\n", v0);
    printf("t : %f\n", t);
    printf("g : %f\n", g);
    printf("y = v0*t + ((g*t*t)/2)\n");
    printf("y = %f*%f + ((%f*%f*%f)/2)\n",v0,t,g,t,t);

    y = v0*t + ((g*t*t)/2);
    printf("y = %f", y);

}

