#include <iostream>
#include <string>
using namespace std;

int main() {
    string barang[] = {"Sabun", "Sikat", "Shampoo", "PastaGigi", "Tisu"};
    int n = 5;
    string cari;
    bool ditemukan = false;

    cout << "=== Daftar Barang di Toko ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << barang[i] << endl;
    }

    cout << "\nMasukkan nama barang yang ingin dicari: ";
    cin >> cari;

    for (int i = 0; i < n; i++) {
        if (barang[i] == cari) {
            cout << "\nBarang " << cari << " ditemukan di rak ke-" << i + 1 << "." << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "\nBarang " << cari << " tidak ditemukan di toko." << endl;
    }

    return 0;
}
