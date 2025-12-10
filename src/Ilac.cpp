#include "Ilac.h"

Ilac::Ilac() {
    ilacAdi = "";
    barkod = 0;
    stok = 0;
}

Ilac::Ilac(string ad, int barkodNo, int adet) {
    ilacAdi = ad;
    barkod = barkodNo;
    stok = adet;
}

void Ilac::setIlacAdi(string ad) { ilacAdi = ad; }
void Ilac::setBarkod(int barkodNo) { barkod = barkodNo; }
void Ilac::setStok(int adet) { stok = adet; }

string Ilac::getIlacAdi() const { return ilacAdi; }
int Ilac::getBarkod() const { return barkod; }
int Ilac::getStok() const { return stok; }

void Ilac::stokArtir(int miktar) { stok += miktar; }
void Ilac::stokAzalt(int miktar) { stok -= miktar; }
