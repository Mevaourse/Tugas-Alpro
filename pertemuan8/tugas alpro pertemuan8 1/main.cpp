#include <iostream>

using namespace std;

bool ganjil(int x){
    return (x % 2 == 1);
}

void genapkecil ( int arr[], int x);

int main()
{
    int arr[]= {8,7,1,6,3,4,2};
    int x = sizeof(arr)/sizeof(arr[0]);


    genapkecil(arr, x);

    return 0;
}
void genapkecil ( int arr[], int x){
    int genapterkecil = 999;
    int index = -1;

    for (int i = 0 ; i < x ; i++){
        if ( !ganjil(arr[i]) && arr [i] < genapterkecil){
            genapterkecil = arr[i];
            index = i;
        }
    }
    if (genapterkecil==999){
        cout << "tidak terdapat angka genap";
    }
    else {
        cout <<"angka genap terkecil adalah "<< genapterkecil<< " terdapat pada index ke "<< index;
    }
}
