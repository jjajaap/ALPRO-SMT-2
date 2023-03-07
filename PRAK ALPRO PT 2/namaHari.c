#include <stdio.h>

int main()
{

  int H;
  printf("Masukkan nomor : ");
  scanf("%d", &H);


    switch(H){
    case 1:
        printf("Senin");
        break;
    case 2:
        printf("Selasa");
        break;
    case 3:
        printf("Rabu");
        break;
    case 4:
        printf("Kamis");
        break;
    case 5:
        printf("Jum'at");
        break;
    case 6:
        printf("Sabtu");
        break;
    case 7:
        printf("Minggu");
        break;
    default:
        printf("Masukkan nomor hari tidak tepat");
    }
    return 0;
}

