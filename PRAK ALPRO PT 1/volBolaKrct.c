#include <stdio.h>
#include <stdbool.h>

int main(){
    //Kamus Lokal
    float r;
    float vb;
    float vk;
    float phi;

    //Algoritma
    printf("Masukkan nilai r : ");
    scanf("%f", &r);

    printf("Masukkan nilai phi : ");
    scanf("%f", &phi);

    printf("Diketahui : \n");
    printf("r : %f\n", r);
    printf("phi : %f\n", phi);

    printf("Menghitung nilai volume bola \n");
    printf("vb = 4*(phi*r*r*r)/3\n");
    printf("vb = 4*(%f*%f*%f*%f)/3 \n",phi,r);

    vb = 4*(phi*r*r*r)/3;
    printf("vb = %f \n", vb);

    printf("Menghitung nilai volume kerucut \n");
    printf("vk = vb/2\n");
    printf("vk = %f/2\n",vb);

    vk = vb/2;
    printf("vk=%f", vk);
}

