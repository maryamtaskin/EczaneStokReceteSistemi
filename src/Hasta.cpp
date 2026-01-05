#include "Hasta.h"

/*
 * Hasta sinifi
 * Bu sinif eczane stok ve recete yonetim sisteminde
 * hasta bilgilerini tutmak icin kullanilir.
 */
Hasta::Hasta() {
    // Varsayilan degerlerle hasta nesnesi olusturulur
    adSoyad = "";
    tcKimlik = "";
    yas = 0;
}

/*
 * Parametreli constructor
 * Hasta bilgileri disaridan alinarak nesne olusturulur
 */
Hasta::Hasta(string ad, string tc, int y) {
    adSoyad = ad;
    tcKimlik = tc;
    yas = y;
}

// Hastanin ad ve soyadini gunceller
void Hasta::setAdSoyad(string ad) {
    adSoyad = ad;
}

// Hastanin TC kimlik numarasini gunceller
void Hasta::setTcKimlik(string tc) {
    tcKimlik = tc;
}

// Hastanin yas bilgisini gunceller
void Hasta::setYas(int y) {
    yas = y;
}

// Hastanin ad ve soyadini dondurur
string Hasta::getAdSoyad() const {
    return adSoyad;
}

// Hastanin TC kimlik numarasini dondurur
string Hasta::getTcKimlik() const {
    return tcKimlik;
}

// Hastanin yas bilgisini dondurur
int Hasta::getYas() const {
    return yas;
}
