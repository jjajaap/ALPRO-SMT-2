#include <stdio.h>

int main(){

    int N;
    int i;
    scanf("%d", &N);

    if (N <= 0){
        printf("Masukkan bernilai salah");
    }
    else{
        for (i=1; i <= N; i++){
            if (N % i == 0){
                printf("%d ", i);
            }
        }
    }
    return 0;
}
