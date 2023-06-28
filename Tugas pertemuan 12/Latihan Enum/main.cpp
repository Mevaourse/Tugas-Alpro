#include <iostream>
using namespace std;

enum class Jurusan {
    INFORMATIKA,
    ELEKTRO,
    SIPIL,
    ARSITEKTUR
};

enum class Tingkat {
    SATU,
    DUA,
    TIGA,
    EMPAT
};

class Mahasiswa {
public:
    Mahasiswa(string nama, Jurusan jurusan, Tingkat tingkat) {
        this->nama = nama;
        this->jurusan = jurusan;
        this->tingkat = tingkat;
    }

    void info() {
        cout << "Nama: " << nama << ", Jurusan: " << static_cast<int>(jurusan)
             << ", Tingkat: " << static_cast<int>(tingkat) << endl;
    }

private:
    string nama;
    Jurusan jurusan;
    Tingkat tingkat;
};

int main() {
    Mahasiswa mhs1("John Doe", Jurusan::INFORMATIKA, Tingkat::TIGA);
    Mahasiswa mhs2("Jane Smith", Jurusan::SIPIL, Tingkat::DUA);

    mhs1.info(); // Output: Nama: John Doe, Jurusan: 0, Tingkat: 2
    mhs2.info(); // Output: Nama: Jane Smith, Jurusan: 2, Tingkat: 1

    return 0;
}
