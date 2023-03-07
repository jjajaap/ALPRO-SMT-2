#include <stdio.h>

int main(){

    int S1;
    int S2;
    int S3;
    scanf("%d", &S1);
    scanf("%d", &S2);
    scanf("%d", &S3);

    if(S1<1 || S2<1 || S3<1){
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    else if (S1 == S2 && S2== S3){
        printf("Segitiga Sama Sisi");
    }
    else if((S1==S2 && S1!=S3) || (S2==S3 && S2!=S1) || (S1==S3 && S1!=S2)){
        printf("Segitiga Sama Kaki");
    }
    else if ((S1+S2<=S3) || (S1+S3<=S2)||(S2+S3<=S2)){
        printf("Tidak dapat membentuk segitiga");
    }
    else if (S1!=S2 && S2!=S3){
        printf("Segitiga Sembarang");
    }

}
