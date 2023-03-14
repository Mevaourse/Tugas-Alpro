#include <iostream>

using namespace std;
// Daniel Nomolas Wicaksono// A11.2022.14448

//fungsi penjumlahan
int penjumlahan(int a, int b){
    int hasil = a+b;
    return hasil;
}


//fungsi pengurangan
int pengurangan (int a, int b){
    int hasil= a-b;
    return hasil;
}

//fungsi memasukan nilai array
int arrayA(double array1[], int number);

//fungsi total nilai array
int jumlaharray(double array1[], int number);


//fungsi rata-rata nilai array

int rataarray(double array1[], int number);

int main()
{
    //Fungsi penambahan
    int a, b;
    cout << "Masukkan Bilangan ke-1 dan ke-2 secara berurutan"<< endl;
    cin >> a >> b;
    cout << "Hasil penambahan dari "<< a << " dengan " << b << " adalah "<< penjumlahan(a,b)<<endl;
    cout <<"********************************************************************"<<endl;



    //funsi pengurangan

    int c,d;
    cout << "Masukkan Bilangan ke-1 dan ke-2 secara berurutan"<<endl;
    cin >> c>>d;
    cout << "Hasil pengurangan dari " << c << " dengan "<< b << " adalah "<<pengurangan(c,d)<<endl;
    cout <<"********************************************************************"<<endl;



    // memasukan nilai array

    double arrayy[5];
    arrayA(arrayy, 5);

    // Total array
    cout << "Jumlah total dari isi array adalah " <<jumlaharray(arrayy, 5)<<endl;

    // rata-rata array

    cout <<"Rata-rata dari array tersebut adalah "<< rataarray(arrayy,5);
    return 0;
}




// fungsi memasukan nilai array

int arrayA(double array1[], int number){
            double input;
            int i;
            int j;
            for (i = 1; i<= number ;i ++){
                cout << "enter value for item " << i<< endl;
                cin >> input;
                array1[i]=input;
            }

        return i;
}
// fungsi jumlah array
int jumlaharray(double array1[], int number){
                int jumlah=0;
                for(int i= 1; i<= number; i++){
                    jumlah += array1[i];
                }
                return jumlah;
}


//fungsi rata2 array, saya tidak tahu bagaimana mengambil data jumlah, dari fungsi sebelumnya. jadi saya ulang saja fungsi jumlah di fungsi rata-rata.

int rataarray(double array1[],int number){
                int ratarata;
                int jumlah=0;
                for(int i= 1; i<= number; i++){
                    jumlah += array1[i];
                }
                ratarata=jumlah/number;
                return ratarata;
}
