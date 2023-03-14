#include<stdio.h>

int main(){
    int N;
    int i;
    int P;
    scanf("%d", &N);

        if (N <= 0){
            printf("Masukkan bernilai salah");
        }
        else{
            P = 0;
            for (i = 2; i <= N; i++){
                if (N % i == 0){
                    P = P + 1;
                    }
                }
            if (P == 1){
                printf("Bilangan Prima");
            }
            else{
                printf("Bukan Bilangan Prima");
            }
        }
        return 0;
}
