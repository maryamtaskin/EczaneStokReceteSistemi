#ifndef RECETEMANAGER_H
#define RECETEMANAGER_H

#include <vector>
#include "Recete.h"
#include "IlacManager.h"

class ReceteManager {
private:
    vector<Recete> receteler;
    int sonReceteNo;

public:
    ReceteManager();

    Recete* receteOlustur(const Hasta& hasta);
    void receteyeIlacEkle(int receteNo, int barkod, int miktar, IlacManager& ilacManager);
    void listele();
};

#endif
