#include <stdio.h>

//Bubble sort
void BubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

//Counting sort
void CountingSort(int arr[], int n){
    int k;
    int count[k + 1];
    int max[n];
    int i;
    for (i = 0; i <= k; i++){
        count[i] = 0;
    }
    for (i = 0; i < n; i++){
        count[arr[i]]++;
    }
    for (i = 1; i <= k; i++){
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--){
        max[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (i = 0; i < n; i++){
        arr[i] = max[i];
    }
}

//Insertion sort
void InsertionSort(int arr[], int n){
    int i, j, temp;
    for (i = 1; i < n; i++){
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}

//Selection sort
void SelectionSort(int arr[], int n){
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}


//Fungsi Main
int main(){
    int n;
    printf("============= PROGRAM SORTING =============\n");
    printf("Masukkan Panjang Array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Masukkan Array: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nArray yang belum terurut: ");
    int i;
    for (i = 0; i < n; i++){
        printf("%d", arr[i]);
    }

    char Pilihan;
    printf("\nPilih sort yang digunakan (A/B/C/D): ");
    scanf(" %c", &Pilihan);

    printf("Sorting yang digunakan adalah ");
    switch (Pilihan){
        case 'A':
            printf("Bubble Sort");
            BubbleSort(arr, n);
            break;
        case 'B':
            printf("Counting Sort");
            CountingSort(arr, n);
            break;
        case 'C':
            printf("Insertion Sort");
            InsertionSort(arr, n);
            break;
        case 'D':
            printf("Selection Sort");
            SelectionSort(arr, n);
            break;
        default:
            printf("Pilihan tidak benar\n");
            return 0;
    }

    printf("\nArray yang sudah terurut: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nProgram selesai\n");

    return 0;
}
