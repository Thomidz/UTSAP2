#include <iostream>
using namespace std;

int main() {
    system("cls");

    // Tipe data untuk pilihan dimana hanya bisa menginput ankga (int)
    int pilihan;

    // Output list pasangan capres dan cawapres, serta input yang ingin dipilih
    pilihan: // menggunakan pilihan: untuk membuat perulangan goto
    cout << "I-------------------------------------------------I\n";
    cout << "|        PEMILIHAN CALON DAN WAKIL PRESIDEN       |\n";
    cout << "|-------------------------------------------------|\n";
    cout << "|            1. ANIES     -    MUHAIMIN           |\n";
    cout << "|            2. PRABOWO   -    GIBRAN             |\n";
    cout << "|            3. GANJAR    -    MAHFUD             |\n";
    cout << "|-------------------------------------------------|\n";
    cout << "|             PILIH CAPRES DAN CAWAPRES           |\n";
    cout << "|                  SESUAI HATI ANDA               |\n";   
    cout << "I-------------------------------------------------I\n";     
    cout << "Pilih Calon Presiden dan Wakil Presiden (1-3): ";
    cin >> pilihan;

    system ("cls");

    // Menggunakan switch case untuk kondisi setiap piilihan
    switch (pilihan) {
        case 1:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah pasangan nomor urut 1. ANIES - MUHAIMIN.\n";
            cout << "                   - Terima Kasih Telah Memilih #JanganGolput -                          \n\n";
            break;
        case 2:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah pasangan nomor urut 2. PRABOWO - GIBRAN.\n";
            cout << "                   - Terima Kasih Telah Memilih #JanganGolput -                          \n\n";
            break;
        case 3:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah pasangan nomor urut 3. GANJAR - MAHFUD. \n";
            cout << "                   - Terima Kasih Telah Memilih #JanganGolput -                          \n\n";
            break; 
        default:
            system ("cls");
            cout << "Pilihan tidak valid. Silakan pilih antara 1-3.\n";
            goto pilihan; // Kembali ke pilihan: jika pilihan di luar 1-3
                
        }
    return 0;
}
