#include <iostream>
#include <string>
using namespace std;

// Definisi kelas Ayam
class Ayam {
private:
    string nama;
    int umur;
    int jumlahTelur;

public:
    // Konstruktor
    Ayam(string namaAyam, int umurAyam) {
        nama = namaAyam;
        umur = umurAyam;
        jumlahTelur = 0;
    }

    // Metode untuk ayam berkokok
    void berkokok() {
        cout << nama << " berkata: \"Kukuruyuk!\"" << endl;
    }

    // Metode untuk ayam bertelur
    void bertelur() {
        jumlahTelur++;
        cout << nama << " bertelur. Total telur sekarang: " << jumlahTelur << endl;
    }

    // Metode untuk menampilkan informasi ayam
    void info() {
        cout << "Nama Ayam : " << nama << endl;
        cout << "Umur      : " << umur << " tahun" << endl;
        cout << "Telur     : " << jumlahTelur << endl;
    }
};

// Fungsi utama
int main() {
    Ayam ayam1("Si Kampung", 2);

    ayam1.berkokok();
    ayam1.bertelur();
    ayam1.bertelur();
    ayam1.info();

    return 0;
}
