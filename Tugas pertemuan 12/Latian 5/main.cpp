#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    Sepeda sepeda;
    Sepeda* ptrSepeda = &sepeda;

    ptrSepeda->merk = "Polygon";
    ptrSepeda->type = "Sepeda Gunung";
    ptrSepeda->tahun = 2013;
    ptrSepeda->harga = "2.000.000";

    cout << "Merk: " << ptrSepeda->merk << endl;
    cout << "Type: " << ptrSepeda->type << endl;
    cout << "Tahun: " << ptrSepeda->tahun << endl;
    cout << "Harga: " << ptrSepeda->harga << endl;

    return 0;
}
