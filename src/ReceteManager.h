#ifndef RECETEMANAGER_H
#define RECETEMANAGER_H

#include <vector>
#include "Recete.h"
#include "IlacManager.h"

/*
 * ReceteManager sinifi
 * Recetelerin olusturulmasi, ilac ekleme islemleri
 * ve recete listesinin yonetilmesinden sorumludur.
 */
class ReceteManager {
private:
    // Sistemdeki tum receteler
    vector<Recete> receteler;

    // Otomatik artan son recete numarasi
    int sonReceteNo;

public:
    // Constructor
    ReceteManager();

    // Yeni recete olusturur ve recete nesnesini dondurur
    Recete* receteOlustur(const Hasta& hasta);

    // Belirtilen receteye ilac ekler
    void receteyeIlacEkle(int receteNo, int barkod, int miktar, IlacManager& ilacManager);

    // Tum receteleri listeler
    void listele();
};

#endif
