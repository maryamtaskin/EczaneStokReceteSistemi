#include "IlacManager.h"
#include <iostream>
using namespace std;

IlacManager::IlacManager() {}

void IlacManager::ilacEkle(const Ilac& ilac) {
    ilaclar.push_back(ilac);
}

void IlacManager::ilacSil(int barkod) {
    for (int i = 0; i < ilaclar.size(); i++) {
        if (ilaclar[i].getBarkod() == barkod) {
            ilaclar.erase(ilaclar.begin() + i);
            break;
        }
    }
}

void IlacManager::stokArtir(int barkod, int miktar) {
    Ilac* ilac = ilacBul(barkod);
    if (ilac != nullptr)
        ilac->stokArtir(miktar);
}

void IlacManager::stokAzalt(int barkod, int miktar) {
    Ilac* ilac = ilacBul(barkod);
    if (ilac != nullptr)
        ilac->stokAzalt(miktar);
}

Ilac* IlacManager::ilacBul(int barkod) {
    for (int i = 0; i < ilaclar.size(); i++) {
        if (ilaclar[i].getBarkod() == barkod)
            return &ilaclar[i];
    }
    return nullptr;
}

void IlacManager::listele() {
    cout << "=== ECZANE ILAC LISTESI ===" << endl;
    for (int i = 0; i < ilaclar.size(); i++) {
        cout << "Ad: " << ilaclar[i].getIlacAdi()
             << " | Barkod: " << ilaclar[i].getBarkod()
             << " | Stok: " << ilaclar[i].getStok()
             << endl;
    }
}
