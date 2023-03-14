#include<stdio.h>

int main(){
    int N;
    int i;
    int S;
    int Tp;
    scanf("%d", &N);

        if (N <= 0){
            printf("Masukkan bernilai salah");
        }
        else{
            for (i = 1; i <= N; i++){
                Tp = 0;
                for (S = 1; S < i; S++){
                    if (i % S == 0){
                    Tp = Tp + S;
                    }
                }
                if (Tp == i){
                    printf("%d ", i);
                }
            }
        }
    return 0;
}

