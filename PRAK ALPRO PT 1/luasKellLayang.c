#include <stdio.h>
#include <stdbool.h>

int main (){
    //Kamus Lokal
    float s1;
    float s2;
    float d1;
    float d2;
    float Luas;
    float Keliling;

    //Algoritma
    printf("Masukkan nilai s1 : ");
    scanf("%f", &s1);

    printf("Masukkan nilai s2 : ");
    scanf("%f", &s2);

    printf("Masukkan nilai d1 : ");
    scanf("%f", &d1);

    printf("Masukkan nilai d2 : ");
    scanf("%f", &d2);

    printf("Diketahui : \n");
    printf("s1 : %f\n", s1);
    printf("s2 : %f\n", s2);
    printf("d1 : %f\n", d1);
    printf("d2 : %f\n", d2);

    printf("Menghitung Luas Layang-Layang \n");
    printf("Luas = (d1*d2)/2\n");
    printf("Luas = (%f*%f)/2\n", d1,d2);

    Luas = (d1*d2)/2;
    printf("Luas = %f \n", Luas);

    printf("Menghitung Keliling Layang-Layang \n");
    printf("Keliling = (s1+s2)*2\n");
    printf("Keliling = (%f+%f)*2\n");

    Keliling = (s1+s2)*2;
    printf("Keliling = %f \n", Keliling);
}

