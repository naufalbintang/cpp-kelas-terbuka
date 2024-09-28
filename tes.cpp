#include <iostream>
// #include <string>
using namespace std;

int main(){

    string greeting = "hello world";
    int greeting_len = greeting.length();

    cout << endl << greeting << endl;
    for (int i = 1; i <= greeting_len; i++){
        cout << "=";
    }

    return 0;
}