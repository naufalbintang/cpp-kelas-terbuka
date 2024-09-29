#include <iostream>
using namespace std;

string input_data(string pesan){
    string data;
    cout << "Masukkan " << pesan << ": ";
    getline(cin, data);
    return data;
}

void output_data(string pesan, string data){
    cout << pesan << "\t\t: " << data << endl;
}

// int main(){

//     string nama = input_data("Nama");
//     string umur = input_data("Umur");

//     output_data("Nama", nama);
//     output_data("Umur", umur);

//     system("pause");
//     return 0;
// }

int main(){

    int a = 5;
    int b = 10;

    cout << "Nilai B = " << b << endl;
    cout << "Nilai A = " << a << endl;

    swap(a, b);
    cout << "Nilai B = " << b << endl;
    cout << "Nilai A = " << a << endl;
    

    

    system("pause");
    return 0;
}
