#include <stdio.h>

int main(){

    char N;
    int iA;
    int iB;
    int i;
    float F;
    float L;

    scanf("%d", &iA);
    scanf("%d", &iB);
    scanf("%c", &N);

    switch (N){
        case 'a' :
            i = iA + iB;
            printf("Hasil operasi a: %d", i);
            break;
        case 'b':
            i = iA - iB;
            printf("Hasil operasi b: %d", i);
            break;
        case 'c':
            i = iA * iB;
            printf("Hasil operasi c: %d", i);
            break;
        case 'd':
            L = iB;
            F = iA / L;
            printf("Hasil operasi d: %f", F);
            break;
        case 'e':
            i = iA / iB;
            printf("Hasil operasi e: %d", i);
            break;
        case 'f':
            i = iA % iB;
            printf("Hasil operasi f: %d", i);
            break;
        default:
            printf("Bukan pilihan menu yang benar");
            break;
    }


}
