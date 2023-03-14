#include<stdio.h>

int main(){
    int N;
    int i;
    int S;
    scanf("%d", &N);

        if (N <= 0){
            printf("Masukkan bernilai salah");
        }
        else{
            for (i = 1; i < N; i++){
                if (N % i == 0){
                    S = S + i;
                    }
                }
            if (S == N){
                printf("Bilangan Sempurna");
            }
            else{
                printf("Bukan Bilangan Sempurna");
            }
        }
        return 0;
}
