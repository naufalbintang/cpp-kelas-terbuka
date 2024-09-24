#include <iostream>
using namespace std;

int main(){

    float a, b, hasil;
    char aritmatika;

    cout << "Selamat Datang di Program Kalkulator Sederhana." << endl << endl;

    // memasukkan input dari user
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Pilih operator (+, -, *, /): ";
    cin >> aritmatika;
    cout << "Masukkan angka kedua: ";
    cin >> b;

    
    cout << "\nHasil perhitungan: ";
    cout << a << aritmatika << b;

    if (aritmatika == '+'){
        hasil = a + b;
        cout << " = " << hasil << endl;
    }else if(aritmatika == '-'){
        hasil = a - b;
        cout << " = " << hasil << endl;
    }else if(aritmatika == '*'){
        hasil = a * b;
        cout << " = " << hasil << endl;
    }else if(aritmatika == '/'){
        hasil = a / b;
        cout << " = " << hasil << endl;
    }else{
        cout << "Operator anda salah" << endl;
    }


    cin.get();
    return 0;
}