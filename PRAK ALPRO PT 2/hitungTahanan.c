#include <stdio.h>

int main(){

    int T1;
    int T2;
    int T3;
    int totalT;
    scanf("%d", &T1);
    scanf("%d", &T2);
    scanf("%d", &T3);

    if (T1>0 && T2>0 && T3>0){
        totalT = T1 + T2 + T3;
        printf("Jumlah dari ketiga bilangan adalah %d", totalT);
    }
    else{
        printf("Masukkan tahanan tidak boleh negatif");
    }

}
