#include "DLL.h"

int main() {
    List L1, L2, L3;
    address P, P1, P2, P3, P4, P5, prec, dud;
    string s;

    // deklarasikan list kosong
    L1.first = NULL;
    L1.last = NULL;

    // cek jika list kosong
    s = (isEmpty(L1) ? "iya" : "tidak");
    cout << "Apakah list kosong? = " << s << endl;

    // deklarasi elemen baru
    createNewElement({"Wage Rudolf Supratman", "Indonesia Raya"}, P1);
    createNewElement({"Ibu Sud", "Tanah Airku"}, P2);
    createNewElement({"Suto Pranto", "Bagimu Negeri"}, P3);

    // insert elemen ke dalam list
    insertFirst(L1, P1);
    prec = L1.first;
    insertAfter(L1, prec, P2);
    insertLast(L1, P3);

    // validasi insert elemen
    s = (isEmpty(L1) ? "iya" : "tidak");
    cout << "\nApakah list kosong? = " << s << endl;
    cout << "Isi info elemen dalam list = " << endl;
    P = L1.first;
    while (P != NULL) {
        cout << P->info.judul << ", dari " << P->info.band << endl;
        P = P->next;
    }
    cout << endl;

    // hapus elemen di dalam list
    deleteAfter(L1, prec, dud);
    cout << "Info dari elemen yang ke hapus = " << dud->info.judul << ", dari " << dud->info.band << endl;
    deleteFirst(L1, dud);
    cout << "Info dari elemen yang ke hapus = " << dud->info.judul << ", dari " << dud->info.band << endl;
    deleteLast(L1, dud);
    cout << "Info dari elemen yang ke hapus = " << dud->info.judul << ", dari " << dud->info.band << endl;
    s = (isEmpty(L1) ? "iya" : "tidak");
    cout << "Apakah list kosong? = " << s << endl;

    // deklarasi list kosong, lagi
    L1.first = NULL;
    L1.last = NULL;
    L2.first = NULL;
    L2.last = NULL;
    L3.first = NULL;
    L3.last = NULL;

    // deklarasi elemen baru, lagi
    createNewElement({"Wage Rudolf Supratman", "Indonesia Pustaka"}, P1);
    createNewElement({"Sudharnoto", "Garuda Pancasila"}, P2);
    createNewElement({"Ismail Marzuki", "Halo-halo Bandung"}, P3);
    createNewElement({"H. Mutahar", "Hari Merdeka"}, P4);
    createNewElement({"Ismail Marzuki", "Berkibarlah Benderaku"}, P5);

    // insert elemen ke dalam list, lagi
    insertFirst(L1, P2);
    insertFirst(L1, P1);
    insertLast(L1, P3);
    insertFirst(L2, P4);
    insertLast(L2, P5);

    // concat dua list
    concat(L1, L2, L3);

    // validasi concat dua list
    s = (isEmpty(L2) ? "iya" : "tidak");
    cout << "\nApakah list kosong? = " << s << endl;
    cout << "Isi info elemen dalam list = " << endl;
    P = L3.first;
    while (P != NULL) {
        cout << P->info.judul << ", dari " << P->info.band << endl;
        P = P->next;
    }
    cout << endl;

    // cari lagu
    cout << endl;
    P = findLagu(L3, "Garuda Pancasila");
    s = P == NULL ? "tidak " : "";
    cout << "Lagu Garuda Pancasila " << s << "dapat ditemukan" << endl;

    // hapus lagu
    removeLagu(L3, "Garuda Pancasila");
    cout << "\nIsi info elemen dalam list setelah menghapus lagu \"Garuda Pancasila\" = " << endl;
    P = L3.first;
    while (P != NULL) {
        cout << P->info.judul << ", dari " << P->info.band << endl;
        P = P->next;
    }
    cout << endl;

    return 0;
}
