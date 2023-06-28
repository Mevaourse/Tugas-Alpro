#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    Mahasiswa mahasiswa[4] = {
        {"A11.2020.01234", "Andi", "Broadcasting", 2023},
        {"A11.2010.01234", "Budi", "Sistem Informasi", 2013},
        {"A11.2000.01234", "Ali", "DKV", 2003},
        {"A11.1990.01234", "Siti", "Kesehatan", 1993}
    };

    cout << "NIM\tNama\tJurusan\tTahun Lulus" << endl;
    for (int i = 0; i < 4; i++) {
        cout << mahasiswa[i].nim << "\t" << mahasiswa[i].nama << "\t" << mahasiswa[i].jurusan << "\t" << mahasiswa[i].tahunLulus << endl;
    }

    return 0;
}
