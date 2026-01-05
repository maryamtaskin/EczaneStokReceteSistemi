#ifndef ILACMANAGER_H
#define ILACMANAGER_H

#include <vector>
#include "Ilac.h"

using namespace std;

/*
 * IlacManager sinifi
 * Ilaclarin eklenmesi, silinmesi ve stok islemlerini yonetir.
 */
class IlacManager {
private:
    // Sistemdeki tum ilaclar
    vector<Ilac> ilaclar;

public:
    // Constructor
    IlacManager();

    // Ilac islemleri
    void ilacEkle(const Ilac& ilac);
    void ilacSil(int barkod);

    // Stok islemleri
    void stokArtir(int barkod, int miktar);
    void stokAzalt(int barkod, int miktar);

    // Ilaclari listeler ve barkoda gore ilac bulur
    void listele();
    Ilac* ilacBul(int barkod);
};

#endif
