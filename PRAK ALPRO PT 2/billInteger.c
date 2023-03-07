#include <stdio.h>

int main(){

    int N;

    printf("Masukkan bilangan : ");
    if(scanf("%d", &N)){
        printf("input is an integer");
    }else{
        printf("input isn't an integer");
    }

    return 0;
}
