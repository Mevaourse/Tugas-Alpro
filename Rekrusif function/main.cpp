#include <iostream>

using namespace std;

int tambah(int x, int y){
if (x == 0){
    return y;
}
else {
    return 1 + tambah (x-1, y);
}

}

int kurang(int a, int b){
    if (b == 0) {
        return a;
    }
    else {
        return kurang(b - 1, a - 1);
    }
}


int kali(int a, int b){
    if ( b == 0){
        return 0;
    }
    else{
        return a + kali (a, b-1);
    }
}


int bagi(int a, int b){
    if (a<b){
        return 0;
    }
    else{
        return 1 + bagi(a-b,b);
    }
}
long int pangkat(int a, int b){
    if (b==0){
        return 1;
    }
    else{
        return a * pangkat(a,b-1);
    }
}


int main()
{
int x ;
int y ;

cout <<"masukkan variabel pertama(x)"<<endl;
cin >>x;
cout << "masukkan variabel kedua (y)"<<endl;
cin >> y;

cout <<"hasil penambahan"<<endl;
cout <<tambah(x ,y)<<endl;

cout << "hasil pengurangan"<<endl;
cout << kurang(x,y)<<endl;

cout << "hasil pengalian"<<endl;
cout << kali(x,y)<<endl;

cout << "hasil pembagian (x/y) dibulatkan kebawah"<<endl;
cout << bagi(x,y)<<endl;

cout <<"hasil pemangkatan (x^y)"<<endl;
cout << pangkat(x,y);

return 0;
}
