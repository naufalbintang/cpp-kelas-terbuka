#include <iostream>
using namespace std;

int main(){

    cout << "Loop 1" << endl;
    for (int i = 1; i <= 10; i++){
        cout << i << endl;
    }

    cout << endl << "Loop 2" << endl;
    for (int i = 1; i <= 10; i += 2){
        cout << i << endl;
    }

    cout << endl << "Loop 3" << endl;
    for (int i = 1; i >= -10; i--){
        cout << i << endl;
    }

    cout << endl << "Loop 4" << endl;
    int total = 0;
    for (int i = 1; i <= 10; total += i, i++){
        cout << i << " || " << total << endl;
    }

    cin.get();
    return 0;
}