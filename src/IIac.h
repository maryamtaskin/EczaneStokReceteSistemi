#ifndef ILAC_H
#define ILAC_H

#include <string>
using namespace std;

/*
 * Ilac sinifi
 * Eczanede bulunan ilaclara ait bilgileri tutar.
 * Stok ve barkod islemleri bu sinif uzerinden yapilir.
 */
class Ilac {
private:
    // Ilaca ait temel bilgiler
    string ilacAdi;
    int barkod;
    int stok;

public:
    // Constructor metotlari
    Ilac();
    Ilac(string ad, int barkodNo, int adet);

    // Set-get fonksiyonlari
    void setIlacAdi(string ad);
    void setBarkod(int barkodNo);
    void setStok(int adet);

    string getIlacAdi() const;
    int getBarkod() const;
    int getStok() const;

    // Stok islemleri
    void stokArtir(int miktar);
    void stokAzalt(int miktar);
};

#endif
