#include <iostream>
#include "IlacManager.h"
#include "Hasta.h"
#include "ReceteManager.h"

using namespace std;

int main() {
    IlacManager ilacManager;
    ReceteManager receteManager;

    int secim;

    while (true) {
        cout << "\n====== ECZANE SISTEMI ======\n";
        cout << "1. Ilac Ekle\n";
        cout << "2. Stok Artir\n";
        cout << "3. Stok Azalt\n";
        cout << "4. Ilaclari Listele\n";
        cout << "5. Hasta Olustur\n";
        cout << "6. Recete Olustur\n";
        cout << "7. Receteye Ilac Ekle\n";
        cout << "8. Receteleri Listele\n";
        cout << "0. Cikis\n";
        cout << "Secim: ";
        cin >> secim;

        if (secim == 0) {
            cout << "Cikis yapiliyor..." << endl;
            break;
        }

        if (secim == 1) {
            string ad;
            int barkod, stok;
            cout << "Ilac adi: ";
            cin >> ad;
            cout << "Barkod: ";
            cin >> barkod;
            cout << "Stok: ";
            cin >> stok;

            Ilac yeni(ad, barkod, stok);
            ilacManager.ilacEkle(yeni);

            cout << "Ilac eklendi!" << endl;
        }

        else if (secim == 2) {
            int barkod, miktar;
            cout << "Barkod: ";
            cin >> barkod;
            cout << "Artis miktari: ";
            cin >> miktar;
            ilacManager.stokArtir(barkod, miktar);
        }

        else if (secim == 3) {
            int barkod, miktar;
            cout << "Barkod: ";
            cin >> barkod;
            cout << "Azaltma miktari: ";
            cin >> miktar;
            ilacManager.stokAzalt(barkod, miktar);
        }

        else if (secim == 4) {
            ilacManager.listele();
        }

        else if (secim == 5) {
            string ad, tc;
            int yas;

            cout << "Hasta adi soyadi: ";
            cin >> ad;
            cout << "TC Kimlik: ";
            cin >> tc;
            cout << "Yas: ";
            cin >> yas;

            Hasta h(ad, tc, yas);

            cout << "Hasta olusturuldu!" << endl;
        }

        else if (secim == 6) {
            string ad, tc;
            int yas;
            cout << "Hasta adi soyadi: ";
            cin >> ad;
            cout << "TC Kimlik: ";
            cin >> tc;
            cout << "Yas: ";
            cin >> yas;

            Hasta h(ad, tc, yas);
            Recete* r = receteManager.receteOlustur(h);

            cout << "Recete olusturuldu. Recete No: " 
                 << r->getReceteNo() << endl;
        }

        else if (secim == 7) {
            int recNo, barkod, miktar;
            cout << "Recete No: ";
            cin >> recNo;
            cout << "Ilac barkod: ";
            cin >> barkod;
            cout << "Miktar: ";
            cin >> miktar;

            receteManager.receteyeIlacEkle(recNo, barkod, miktar, ilacManager);
        }

        else if (secim == 8) {
            receteManager.listele();
        }

        else {
            cout << "Gecersiz secim!" << endl;
        }
    }

    return 0;
}

