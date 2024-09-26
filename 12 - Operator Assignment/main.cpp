#include <iostream>
using namespace std;

int main(){

    // assignment
    int a = 10;
    cout << "nilai awal: " << a << endl;

    // assignment operator
    // variabel = variabel operator ekspresi
    //    a     =     a       -         3
    // variabel operator= ekspresi
    //     a        +=        3
    a += 3;

    cout << "nilai a ditambah 3: " << a << endl;

    a -= 3;
    cout << "nilai a dikurang 3: " << a << endl;


    cin.get();
    return 0;
}