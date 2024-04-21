#include <iostream>
using namespace std;

int main() {
    system("cls");
    // Tipe data dan variabelnya
    string nama, nim, matkul, pa, nil_huruf;
    char kom;
    int nil_tugas, nil_quis, nil_uts, nil_uas;
    float nil_akhir;

    // Input Nama, NIM, KOM, Dosen PA, dan nilai-nilai
    cout << "Masukkan Nama           : ";
    getline(cin, nama);

    cout << "Masukkan NIM            : ";
    cin >> nim;

    cout << "Masukkan KOM            : ";
    cin >> kom;

    cin.ignore();

    cout << "Masukkan Nama Dosen PA  : ";
    getline(cin, pa);

    cout << "Masukkan Mata Kuliah    : ";
    getline(cin, matkul);

    cout << "Masukkan Nilai Tugas    : ";
    cin >> nil_tugas;

    cout << "Masukkan Nilai Quis     : ";
    cin >> nil_quis;

    cout << "Masukkan Nilai UTS      : ";
    cin >> nil_uts;

    cout << "Masukkan Nilai UAS      : ";
    cin >> nil_uas;

    // Operasi Aritmatika untuk menentukan nilai akhir
    nil_akhir = (0.1 * nil_tugas) + (0.2 * nil_quis) + (0.3 * nil_uts) + (0.4 * nil_uas);

    // Menggunakan operasi kondisi untuk menentukan nilai dalam abjad
    if (nil_akhir <= 40) {
        nil_huruf = "E";
    } else if (nil_akhir <= 50) {
        nil_huruf = "D";
    } else if (nil_akhir <= 58) {
        nil_huruf = "C";
    } else if (nil_akhir <= 65) {
        nil_huruf = "C+";
    } else if (nil_akhir <= 73) {
        nil_huruf = "B";
    } else if (nil_akhir <= 80) {
        nil_huruf = "B+";
    } else if (nil_akhir <= 100) {
        nil_huruf = "A";
    } else {
        cout << "Tidak Valid";
        return 0;
    }

    // Output
    system("cls");
    cout << "Nama         : " << nama << endl;
    cout << "NIM          : " << nim << endl;
    cout << "KOM          : " << kom << endl;
    cout << "Dosen PA     : " << pa << endl;
    cout << "Mata Kuliah  : " << matkul << endl;
    cout << "Nilai Akhir  : " << nil_akhir << endl;
    cout << "Nilai        : " << nil_huruf << endl;

    return 0;
}
