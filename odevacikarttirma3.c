#include <stdio.h>

// Kat�l�mc� yap�s� struct olarak tan�mlan�r.
struct Katilimci {
    int katilimciNo;
    double teklif;
};

//Bu yap� her bir kat�l�mc�n�n katilimciNo ve teklifini i�erir. 
typedef struct Katilimci Katilimci;

int main() {
    int katilimciSayisi;

    printf("Katilimci sayisini giriniz: ");
    scanf("%d",&katilimciSayisi);

// Kat�l�mc� bilgilerini tutan dizi olu�turulur
    Katilimci katilimcilar[katilimciSayisi];

// Kat�l�mc� bilgilerini kullan�c�dan al
    int i;
    for ( i = 0; i < katilimciSayisi; ++i) {
        printf("Katilimci %d icin teklifi giriniz:",i + 1);
        scanf("%lf", &katilimcilar[i].teklif);
        
// Kat�l�mc� numaras�n� tan�mla
        katilimcilar[i].katilimciNo = i + 1; 
    }

// En y�ksek teklifi ve kazanan�n indeksini bul
    double enYuksekTeklif = katilimcilar[0].teklif;
    int kazananIndex = 0;
  
    for ( i = 1; i < katilimciSayisi; ++i) {
        if (katilimcilar[i].teklif > enYuksekTeklif) {
            enYuksekTeklif = katilimcilar[i].teklif;
            kazananIndex = i;
        }
    }

// Kazanan� ve teklif bilgilerini yazd�r
    printf("\nKazanan Katilimci no: %d\n", katilimcilar[kazananIndex].katilimciNo);
    printf("Kazanan Teklif:%.2f\n", enYuksekTeklif);

// Kazanan�n teklif bilgisini yazd�r
printf("Odeme: %.2f\n", katilimcilar[kazananIndex].teklif);

    return 0;
}

