#include <iostream>


/* Tugas Al-pro 2
Daniel Nomolas Wicaksono . A11.2022.14448
*/
using namespace std;


//Fungsi Max
int max(int a, int b);

//Fungsi min
int min (int a,int b);
int arraymax(int array1[], int number);

int arraymin(int array1[], int number);

int  sumeven (int array1[], int number);
int  sumodd (int array1[], int number);
bool search1 (int d, int array1[], int number);
void search2(int b, int array1[], int number);
//fungsi even/odd
bool isEven(int num);

//fungsi isFactor
bool isFactor(int x, int y);

int main()
{
    //Fungsi Min dan Max

    int mm1, mm2 ;
    cout <<"Masukkan 2 angka untuk menemukan mana min dan max"<<endl;

    cin >> mm1>>mm2;
    //fungsi maximal======================================================================
    cout << "nilai maxsimal adalah " << max (mm1, mm2)<<endl;

    //fungsi minimal=======================================================================
    cout <<"Nilai minimal adalah " <<min (mm1,mm2)<<endl;
    cout <<"=========================================="<<endl;

    cout << "Persoalan array"<<endl;
    int p;

    cout << "Masukkan panjang array"<<endl;
    cin >>p;
   int arrayt[p];
   for (int i=0;i<p; i++)
   {
       cout<< "Masukkan data array ke-" <<i+1<<" ";
       cin >> arrayt[i];
   }
   //fungsiMaxArray=======================================================================
   cout << "Angka terbesar di array adalah "<<arraymax( arrayt, p)<<endl;

   //fungsiMinArray=======================================================================
   cout<<"Angka terkecil di array adalah "<< arraymin(arrayt,p)<<endl;

   //fungsi sumEven=======================================================================
   cout <<"Total data genap pada array adalah "<< sumeven(arrayt,p)<<endl;

   //fungsi sumodd========================================================================
   cout <<"Total data ganjil pada array adalah "<< sumodd(arrayt,p)<<endl;

    //fungsi isfound======================================================================

    int dtcari;
    cout << "Masukkan Data yang ingin dicari"<<endl;
    cin >>dtcari;
    if (search1(dtcari,arrayt, p)){
        cout << "data ditemukkan";
    }else {
    cout<<"data tidak ditemukkan";}

    cout <<endl;

    //fungsiSearch

    search2(dtcari, arrayt, p);
    cout<<endl;

   //fungsi is odd/even====================================================================
   cout<<"=========================================="<<endl;
   cout << "Menentukan ganjil genap"<<endl;
   int num;
    cout << "Enter a number: ";
    cin >> num;


    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;

    }


    //fungsi factor /tidak=================================================================
    int factora, factorb;

    cout<<"=========================================="<<endl;
    cout <<" Menentukan factor atau tidak"<<endl;
    cout <<"Masukkan Bilangan dan bilangan pemfaktor "<<endl;
    cin >> factora>>factorb;

    if (isFactor(factora, factorb)){
        cout<< factorb<< " adalah faktor dari "<<factora;
    }else {
        cout<<factorb<<" bukan faktor dari "<< factora;
    }


    return 0;
}


//fungsi max================================================================================
int max(int a, int b){
    int max;
    if(a>b){
        max=a;
    }
    else {
        max=b;
    }
    return max;
}


//fungsi min
int min (int a,int b){
     int min;
    if(a>b){
        min=b;
    }
    else {
        min=a;
    }
    return min;
}



// fungsi array max

int arraymax(int array1[], int number){
    int temp = array1[0];
    for (int i=0; i<number;i++)
    {
        if (array1[i] > temp)
        {
            temp=array1[i];
        }
    }
    return temp;
}


//fungsi array min
int arraymin(int array1[], int number){
    int temp = array1[0];
    for (int i=0; i<number;i++)
    {
        if (array1[i]  < temp)
        {
            temp=array1[i];
        }
    }
    return temp;
}
//fungsi sumEven
int  sumeven (int array1[], int number){
    int even=0;
    for (int i=0 ; i < number ; i++){
        if ( array1[i]%2== 0)
        {
            even+=array1[i];
        }
    }return even;
}
//fungsi sumOdd
int  sumodd (int array1[], int number){
    int odd=0;
    for (int i=0 ; i < number ; i++){
        if ( array1[i]%2!= 0)
        {
            odd+=array1[i];
        }
    }return odd;
}


//fungsi found

bool search1 (int d, int array1[], int number){
    int hasil;
    for (int i =0 ; i < number ; i++){
        if ( d == array1[i]){
            hasil++;
        }
    }
    if (hasil == 0){
        return false;
    } else {
    return true;}
}
//fungsi search
void search2(int b, int array1[], int number){
    int o;
    for( o = 0 ; o < number ; o++){
        if( array1[o]== b){
            cout <<"Data tertemukan di array ke- "<< o+1;
            break;
        }
    }
    if (o == number){
        cout << "Data tidak ditemukan";
    }
}
//fungsi is even odd

bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

//fungsi isFactor
bool isFactor(int x, int y){
    if (x% y == 0){
        return true;
    }else {
        return false;
    }
}
