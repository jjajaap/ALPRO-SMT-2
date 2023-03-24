#include <stdio.h>

int main(){
    int N[10] = {7,4,5,7,6,5,3,5,1,4};
    int M[10] = {7,4,5,7,6,5,3,5,1,4};
    int elmt = 0;
    int i;

    for (i = 0; i < 10; i++){
        if (N[i] == M[i]){
            elmt = elmt + 1;
        }
    }
    if (elmt == 10){
        printf("Simetri");
    }
    else {
        printf("Tidak Simetri");
    }
    return 0;
}
