#include <iostream>
using namespace std; // tambahkan namespace setelah using

int main () {
    system ("CLS");

    string a;

    umur: // titik koma (;) diganti menjadi titik dua (:)
    cout << "Tebak Umur Saya (Clue : 10-30) : "; // kekurangan tanda titik koma (;)
    cin >> a; // tanda yang terbalik (<<) menjadi (>>)

    if (a == "20"){
        cout << endl;
        cout << "Jawaban Anda Benar" << endl;
    } else { // diubah menjadi else karena hanya ada satu kondisi yang benar umur = 20
        cout << endl;
        cout << "Jawaban Salah, Coba Lagi..." << endl; // kekurangan tanda titik koma (;)
        goto umur;
    }
    
    cout << "Program Selesai" << endl;

    return 0;
}
