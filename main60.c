                           //L�NEAR SEARCH ALGOR�TMASI �LE ARAMA ��LEM�//
#include <stdio.h>
 int main() {
  // De�i�kenleri tan�mlad�m  ve i'yi 0 olarak ba�latt�m	
 int a;
 int aranan;
 int i=0;
 
 // Kullan�c�dan dizinin boyutunu istenir.
  printf("Dizinin boyutunu giriniz: ");
  scanf("%d", &a);

 // Dizi i�in bellekte yer ayr�l�r
  int dizi[a];

 // Dizinin elemanlar� kullan�c�dan al�n�r
 while(i < a) {
    printf("%d. Elemani giriniz: ", i+1); // Ka��nc� eleman�n girilece�i kullan�c�ya bildirilir
    scanf("%d", &dizi[i]); // Eleman kullan�c�dan al�n�r
    i++; // i 1 art�r�l�r
    }

 // Kullan�c�dan aranacak eleman istenir
  printf("Aranacak elemani giriniz: ");
  scanf("%d", &aranan);

 // Dizinin elemanlar�n tek tek kontrol edilir.
  int bulundu = 0; // Eleman�n bulunup bulunmad���n� takip etmek i�in bir de�i�ken tan�mlan�r ve ba�lang��ta 0 olarak atan�r
  i = 0; // i tekrar s�f�rlan�r
 while(i < a) {
  if(dizi[i] == aranan) { // Eleman bulunursa
    printf("%d dizinin %d. indisinde bulundu.\n", aranan, i); // Ekrana mesaj yazd�r�l�r
    bulundu = 1; // Eleman bulundu olarak i�aretlenir
    break; // E�er eleman bulunursa d�ng� sonland�r�l�r
  }
    i++; // Sonraki elemana ge�ilir
  }

 // Eleman bulunamazsa ekrana mesaj yazd�r
   if(!bulundu) {
    printf("%d Dizide Bulunamadi.\a", aranan);
    }

    return 0; // Program normal bir �ekilde sonland�r�l�r
}
