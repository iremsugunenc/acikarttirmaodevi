#include <stdio.h>

// Katýlýmcý yapýsý struct olarak tanýmlanýr.
struct Katilimci {
    int katilimciNo;
    double teklif;
};

//Bu yapý her bir katýlýmcýnýn katilimciNo ve teklifini içerir. 
typedef struct Katilimci Katilimci;

int main() {
    int katilimciSayisi;

    printf("Katilimci sayisini giriniz: ");
    scanf("%d",&katilimciSayisi);

// Katýlýmcý bilgilerini tutan dizi oluþturulur
    Katilimci katilimcilar[katilimciSayisi];

// Katýlýmcý bilgilerini kullanýcýdan al
    int i;
    for ( i = 0; i < katilimciSayisi; ++i) {
        printf("Katilimci %d icin teklifi giriniz:",i + 1);
        scanf("%lf", &katilimcilar[i].teklif);
        
// Katýlýmcý numarasýný tanýmla
        katilimcilar[i].katilimciNo = i + 1; 
    }

// En yüksek teklifi ve kazananýn indeksini bul
    double enYuksekTeklif = katilimcilar[0].teklif;
    int kazananIndex = 0;
  
    for ( i = 1; i < katilimciSayisi; ++i) {
        if (katilimcilar[i].teklif > enYuksekTeklif) {
            enYuksekTeklif = katilimcilar[i].teklif;
            kazananIndex = i;
        }
    }

// Kazananý ve teklif bilgilerini yazdýr
    printf("\nKazanan Katilimci no: %d\n", katilimcilar[kazananIndex].katilimciNo);
    printf("Kazanan Teklif:%.2f\n", enYuksekTeklif);

// Kazananýn teklif bilgisini yazdýr
printf("Odeme: %.2f\n", katilimcilar[kazananIndex].teklif);

    return 0;
}

