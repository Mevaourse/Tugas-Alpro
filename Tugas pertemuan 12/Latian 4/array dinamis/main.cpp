#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string jurusan;
    int tahunLulus;
};

int main() {
    int jumlahMahasiswa = 4;

    Mahasiswa* mahasiswa = new Mahasiswa[jumlahMahasiswa];
    mahasiswa[0] = {"A11.2020.01234", "Andi", "Broadcasting", 2023};
    mahasiswa[1] = {"A11.2010.01234", "Budi", "Sistem Informasi", 2013};
    mahasiswa[2] = {"A11.2000.01234", "Ali", "DKV", 2003};
    mahasiswa[3] = {"A11.1990.01234", "Siti", "Kesehatan", 1993};

    cout << "NIM\tNama\tJurusan\tTahun Lulus" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << mahasiswa[i].nim << "\t" << mahasiswa[i].nama << "\t" << mahasiswa[i].jurusan << "\t" << mahasiswa[i].tahunLulus << endl;
    }

    delete[] mahasiswa;

    return 0;
}
