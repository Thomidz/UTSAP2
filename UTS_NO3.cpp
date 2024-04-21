#include <iostream>
using namespace std;

int main(){
    system("cls");

    // Tipe data
    int suku_n1, suku_n2;

    // Input nilai n1 dan n2
    cout << "Masukkan n (1): ";
    cin >> suku_n1;

    cout << "Masukkan n (2): ";
    cin >> suku_n2;

    system ("cls");

    // Operasi untuk hasil1
    int hasil1 = 0;
    cout << "n : " << suku_n1 << " = ";
    for (int i = 1; i <= suku_n1; i += 2) {
        hasil1 += i * i;
        if (i != 1) {
            cout << " + ";
        }
        cout << i << "^2";
    }
    cout << " = " << hasil1 << endl;

    // Operasi untuk hasil2
    int hasil2 = 0;
    for (int i = 1; i <= suku_n2; i += 2) {
        hasil2 += i * i;
    }
    cout << "n : " << suku_n2 << " = "<< hasil2 << endl;


    return 0;
}
