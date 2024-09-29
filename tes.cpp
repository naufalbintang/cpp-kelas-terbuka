#include <iostream>
#include <string>
using namespace std;

int fungsi_penjumlahan_2_bilangan(){
    int angka1;
    int angka2;
    int hasil;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    hasil = angka1 + angka2;
    return hasil;
}

string fungsi_nilai(){
    int nilai;
    string hasil;

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if(60 <= nilai <= 100){
        hasil = "Anda dinyatakan lulus";
    }else if(0 <= nilai <= 59){
        hasil = "Anda dinyatakan tidak lulus";
    }else{
        cout << "Nilai Tidak Valid" << endl;
    }
    return hasil;
}

int fungsi_rata_rata(){
    int angka1, angka2, angka3, hasil;

    cout << "Masukkan angka ke-1: ";
    cin >> angka1;

    cout << "Masukkan angka ke-2: ";
    cin >> angka2;
    
    cout << "Masukkan angka ke-3: ";
    cin >> angka3;

    hasil = (angka1 + angka2 + angka3) / 3;

    return hasil;
}



int main(){

    int penjumlahan_2_bilangan = fungsi_penjumlahan_2_bilangan();
    cout << "Penjumlahan 2 bilangan: " << penjumlahan_2_bilangan << endl;
    int rata_rata = fungsi_rata_rata();
    cout << "Rata-rata: " << rata_rata << endl;
    string nilai = fungsi_nilai();
    cout << nilai << endl;

    




    
    system("pause");
    return 0;
}