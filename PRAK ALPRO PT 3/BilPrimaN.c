#include<stdio.h>

int main(){
    int N;
    int i;
    int P;
    int Tp;
    scanf("%d", &N);

        if (N <= 0){
            printf("Masukkan bernilai salah");
        }
        else{
            for (i = 1; i <= N; i++){
                Tp = 0;
                for (P = 1; P <= i; P++){
                    if (i % P == 0){
                    Tp = Tp + 1;
                    }
                }
                if (Tp == 2){
                    printf("%d ", i);
                }
            }
        }
    return 0;
}
