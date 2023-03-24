#include <stdio.h>

int main(){
    int N[10]= {7,4,5,7,6,5,3,5,1,4};
    int i;
    int max1, max2;
    //scanf("%d", &N, &T);

    max1 = 0;
    max2 = 0;

    for (i = 0; i <= 10; i++){
        if (max1 < N[i]){
            max2 = max1;
            max1 = N[i];
        }
        if (max2 < N[i] && max1 != N[i]){
            max2 = N[i];
        }
    }
    if (max1 == max2){
        printf ("%d", 0);
    }
    else{
        printf("%d", max2);
    }
    return 0;
}
