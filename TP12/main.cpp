#include "flight.h"

int main() {
    ListJadwal L;
    int n;
    infotype X;
    adr_jadwalP P;

    createListJadwal(L);
    cout << "banyak data yang ingin diisi: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "ISI DATA KE-" << i+1 << endl;
        cout << "Masukkan kode      : "; cin >> X.kode;
        cout << "Masukkan jenis     : "; cin >> X.jenis;
        cout << "Masukkan tanggal   : "; cin >> X.tanggal;
        cout << "Masukkan waktu     : "; cin >> X.waktu;
        cout << "Masukkan asal      : "; cin >> X.asal;
        cout << "Masukkan tujuan    : "; cin >> X.tujuan;
        cout << "Masukkan kapasitas : "; cin >> X.kapasitas;
        cout << endl;

        P = createElemenJadwal(X);
        insertLastJadwal(L, P);
    }

    cout << "DATA TERISI" << endl;
    showJadwal(L);
    cout << endl;

    deleteFirstJadwal(L, P);
    X = P->info;
    cout << "DATA TERHAPUS" << endl;
    cout << "kode       : " << X.kode << endl;
    cout << "jenis      : " << X.jenis << endl;
    cout << "tanggal    : " << X.tanggal << endl;
    cout << "waktu      : " << X.waktu << endl;
    cout << "asal       : " << X.asal << endl;
    cout << "tujuan     : " << X.tujuan << endl;
    cout << "kapasitas  : " << X.kapasitas << endl;
    cout << endl;

    P = searchJadwal(L, "Surabaya", "Malang", "9-Desember-2022");

    if (P != NULL) {
        cout << "DATA TELAH DITEMUKAN" << endl;
    } else {
        cout << "DATA TIDAK DITEMUKAN" << endl;
    }

    return 0;
}
