#include <stdio.h>

int main(){
    int N[10]= {7,4,5,7,6,5,3,5,1,4};
    int elmt;
    int jum;
    int i, j;

    jum = 0;
    for (i = 0; i < 10; i++){
        elmt = 1;
        for (j = i + 1; j < 10; j++){
            if (N[i] != 0 && N[i] == N[j]){
                elmt = elmt + 1;
                N[j] = 0;
            }
        }
        if (elmt > 1){
            jum = jum + (elmt * N[i]);
        }
    }
    printf("%d", jum);
    return 0;
}
