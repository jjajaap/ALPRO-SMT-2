#include <stdio.h>

int main(){

    int N;
    int i;
    int T;
    scanf("%d", &N);

    if (N <= 0){
        printf("Masukkan bernilai salah");
        }
    else{
       for (i = 1; i <= N; i++){
           T = T + i;
           printf("Jumlah deret adalah bilangan dari 1 sampai <%d> : <%d>", N, T);
       }
    }
    return 0;
}
