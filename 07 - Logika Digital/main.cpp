#include <iostream>
using namespace std;

int main(){
    
    int a = 3;
    int b = 2;
    
    bool hasil;

    // operator logika: not, and, or

    // not
    cout << endl << "Untuk not\n";
    cout << string(11, '=') << endl;
    hasil = !(a == 3);
    cout << hasil << endl;


    // and: kedua nilai harus benar untuk menghasilkan output true
    cout << endl << "Untuk and\n";
    cout << string(11, '=') << endl;
    hasil = (a == 3) and (b == 2); // true and true
    hasil = (a == 4) and (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) && (b == 3); // true and false
    cout << hasil << endl;
    hasil = (a == 4) && (b == 3); // false and false
    cout << hasil << endl;

    // or: jika salah satu nilai true, maka output akan true
    cout << endl << "Untuk or\n";
    cout << string(11, '=') << endl;
    hasil = (a == 3) or (b == 2); // true and true
    cout << hasil << endl;
    hasil = (a == 4) or (b == 2); // false and true
    cout << hasil << endl;
    hasil = (a == 3) || (b == 3); // true and false
    cout << hasil << endl;
    hasil = (a == 4) || (b == 3); // false and false
    cout << hasil << endl;



    cin.get();
    return 0;
}