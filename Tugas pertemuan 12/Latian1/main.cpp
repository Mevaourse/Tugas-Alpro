#include <iostream>
using namespace std;

struct BangunDatar {
    double panjang;
    double lebar;
};

struct Lingkaran {
    double jari_jari;
};

struct Kerucut {
    double jari_jari;
    double tinggi;
};

struct Bola {
    double jari_jari;
};

double hitungLuasPersegiPanjang(const BangunDatar& persegi_panjang) {
    return persegi_panjang.panjang * persegi_panjang.lebar;
}

double hitungLuasLingkaran(const Lingkaran& lingkaran) {
    return 22.0 / 7.0 * lingkaran.jari_jari * lingkaran.jari_jari;
}

double hitungVolumeKerucut(const Kerucut& kerucut) {
    return 1.0 / 3.0 * 22.0 / 7.0 * kerucut.jari_jari * kerucut.jari_jari * kerucut.tinggi;
}

double hitungVolumeBola(const Bola& bola) {
    return 4.0 / 3.0 * 22.0 / 7.0 * bola.jari_jari * bola.jari_jari * bola.jari_jari;
}

int main() {
    BangunDatar persegi_panjang;
    Lingkaran lingkaran;
    Kerucut kerucut;
    Bola bola;

    // Input nilai panjang dan lebar persegi panjang
    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegi_panjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegi_panjang.lebar;

    // Input nilai jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> lingkaran.jari_jari;

    // Input nilai jari-jari dan tinggi kerucut
    cout << "Masukkan jari-jari kerucut: ";
    cin >> kerucut.jari_jari;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    // Input nilai jari-jari bola
    cout << "Masukkan jari-jari bola: ";
    cin >> bola.jari_jari;

    // Hitung dan tampilkan hasil
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(persegi_panjang) << endl;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}


