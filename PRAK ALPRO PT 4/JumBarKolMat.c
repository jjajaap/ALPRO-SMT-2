#include <stdio.h>

int main(){
    int N[3][3] = {{1,3,5},{2,5,2},{4,2,4}};
    int i, j;
    int JumBaris[3], JumKolom[3];

    for (i = 0; i < 3; i++){
        JumBaris[i] = 0;
        for (j = 0; j < 3; j++){
            JumBaris[i] = JumBaris[i] + N[i][j];
        }
    }
    for (i = 0; i < 3; i++){
        JumKolom[i] = 0;
        for (j = 0; j < 3; j++){
            JumKolom[i] = JumKolom[i] + N[j][i];
        }
    }
    for (i = 0; i < 3; i++){
        printf("%d %d\n", JumBaris[i], JumKolom[i]);
    }
    return 0;
}
