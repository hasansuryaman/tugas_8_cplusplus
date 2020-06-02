#include <iostream>

using namespace std;

int main(){
    int x;
    cout <<"Inputkan Nilai X : ";
    cin >>x;
    switch(x){
        case 10000 :
            cout <<"Sepuluh Ribu Rupiah\n";
        break;
        case 20000 :
            cout <<"Dua Puluh Ribu Rupiah\n";
        break;
        case 30000 :
            cout <<"Tiga Puluh Ribu Rupiah\n";
        break;
        case 40000 :
            cout <<"Empat Puluh Ribu Rupiah\n";
        break;
        case 50000 :
            cout <<"Lima Puluh Ribu Rupiah\n";
        break;
        default :
            cout <<"Tidak Terdaftar di Program\n";
    }
}
