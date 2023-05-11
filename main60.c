                           //LÝNEAR SEARCH ALGORÝTMASI ÝLE ARAMA ÝÞLEMÝ//
#include <stdio.h>
 int main() {
  // Deðiþkenleri tanýmladým  ve i'yi 0 olarak baþlattým	
 int a;
 int aranan;
 int i=0;
 
 // Kullanýcýdan dizinin boyutunu istenir.
  printf("Dizinin boyutunu giriniz: ");
  scanf("%d", &a);

 // Dizi için bellekte yer ayrýlýr
  int dizi[a];

 // Dizinin elemanlarý kullanýcýdan alýnýr
 while(i < a) {
    printf("%d. Elemani giriniz: ", i+1); // Kaçýncý elemanýn girileceði kullanýcýya bildirilir
    scanf("%d", &dizi[i]); // Eleman kullanýcýdan alýnýr
    i++; // i 1 artýrýlýr
    }

 // Kullanýcýdan aranacak eleman istenir
  printf("Aranacak elemani giriniz: ");
  scanf("%d", &aranan);

 // Dizinin elemanlarýn tek tek kontrol edilir.
  int bulundu = 0; // Elemanýn bulunup bulunmadýðýný takip etmek için bir deðiþken tanýmlanýr ve baþlangýçta 0 olarak atanýr
  i = 0; // i tekrar sýfýrlanýr
 while(i < a) {
  if(dizi[i] == aranan) { // Eleman bulunursa
    printf("%d dizinin %d. indisinde bulundu.\n", aranan, i); // Ekrana mesaj yazdýrýlýr
    bulundu = 1; // Eleman bulundu olarak iþaretlenir
    break; // Eðer eleman bulunursa döngü sonlandýrýlýr
  }
    i++; // Sonraki elemana geçilir
  }

 // Eleman bulunamazsa ekrana mesaj yazdýr
   if(!bulundu) {
    printf("%d Dizide Bulunamadi.\a", aranan);
    }

    return 0; // Program normal bir þekilde sonlandýrýlýr
}
