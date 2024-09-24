#include <iostream>
using namespace std;

char input_operasi(){
    char operasi;
    cout << "Operasi apa yang akan anda lakukan (+, -, /, *)? ";
    cin >> operasi;
    return operasi;
}

float input_angka(){
    float angka;
    cout << "Masukkan angka pertama: ";
    cin >> angka;
    return angka;
}

float fungsi_penjumlahan(float angka1, float angka2){
    float hasil = angka1 + angka2; 
    return hasil;
}
float fungsi_pengurangan(float angka1, float angka2){
    float hasil = angka1 - angka2; 
    return hasil;
}
float fungsi_perkalian(float angka1, float angka2){
    float hasil = angka1 * angka2; 
    return hasil;
}
float fungsi_pembagian(float angka1, float angka2){
    float hasil = angka1 / angka2; 
    return hasil;
}

void display_hasil(float angka1, char operasi, float angka2, float hasil){
    cout << angka1 << " " << operasi << " " << angka2 << " = " << hasil;  
}


int main(){
    float angka1, angka2, hasil;
    char operasi;
    cout << "Selamat Datang di Program Kalkulator Sederhana." << endl << endl;

    // input user operasi
    operasi = input_operasi();

    // input user angka1
    angka1 = input_angka();

    // input user angka2
    angka2 = input_angka();
    
    switch (operasi){
        case '+':
            hasil = fungsi_penjumlahan(angka1, angka2);
            display_hasil(angka1, operasi, angka2, hasil);
            break;
        case '-':
            hasil = fungsi_pengurangan(angka1, angka2);
            display_hasil(angka1, operasi, angka2, hasil);
            break;
        case '*':
            hasil = fungsi_perkalian(angka1, angka2);
            display_hasil(angka1, operasi, angka2, hasil);
            break;
        case '/':
            hasil = fungsi_pembagian(angka1, angka2);
            display_hasil(angka1, operasi, angka2, hasil);
            break;
        default:
            cout << "Operasi tidak valid." << endl;
    }
    
    return 0;
}