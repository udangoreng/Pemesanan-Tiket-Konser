#include <iostream>
#include <iomanip> // Untuk manipulasi output angka
#include <string>
using namespace std;

// Konstanta harga tiket
#define Goldvivpackage 7650000
#define Cat1 6000000
#define Silvervivpackage 5150000
#define Festivala 3500000
#define Festivalb 2750000
#define Cat2 3500000
#define Cat3 2750000
#define Cat4 1750000
#define Cat5 1450000
#define Cat6 1250000
#define Cat7 950000

int main() {
    // Tipe data
    string nama, email, tanggal, no_telepon;
    string nama_tiket, tanggal_konser; // Untuk menyimpan nama tiket dan tanggal konser
    int pilihan_tiket, jumlah_tiket, pilihan_waktu;
    double total_harga = 0; // Inisialisasi total harga

    // Header program
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+         Selamat Datang di           +" << endl;
    cout << "+   Loket Tiket Konser Bruno Mars     +" << endl;
    cout << "+   Jakarta International Stadium     +" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl << endl;

    // Input data diri pembeli
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+         Masukkan Data Diri          +" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+  Nama        : "; getline(cin, nama);
    cout << "+  No Telepon  : "; cin >> no_telepon;
    cout << "+  Email       : "; cin >> email;
    cout << "+  Tanggal Pembelian [dd/mm/yy] : "; cin >> tanggal;

    // Pilihan jenis tiket
    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+     Silahkan Pilih Jenis Tiket        +" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "1.  Goldvivpackage   : Rp 7.650.000"       << endl;
    cout << "2.  Cat1             : Rp 6.000.000"       << endl;
    cout << "3.  Silvervivpackage : Rp 5.150.000"       << endl;
    cout << "4.  Festivala        : Rp 3.500.000"       << endl;
    cout << "5.  Festivalb        : Rp 2.750.000"       << endl;
    cout << "6.  Cat2             : Rp 3.500.000"       << endl;
    cout << "7.  Cat3             : Rp 2.750.000"       << endl;
    cout << "8.  Cat4             : Rp 1.750.000"       << endl;
    cout << "9.  Cat5             : Rp 1.450.000"       << endl;
    cout << "10. Cat6             : Rp 1.250.000"       << endl;
    cout << "11. Cat7             : Rp   950.000"       << endl;
    cout << "++++++++++++++++++++++++++++++++++++++++++"<< endl;

    // Input pilihan tiket
    cout << "\nPilih jenis tiket [1-11] : ";
    cin >> pilihan_tiket;

    // Input jumlah tiket
    cout << "Masukkan jumlah tiket : ";
    cin >> jumlah_tiket;

    // Menentukan nama tiket dan harga
    switch (pilihan_tiket) {
        case 1: nama_tiket = "Goldvivpackage"; total_harga = Goldvivpackage * jumlah_tiket; break;
        case 2: nama_tiket = "Cat1"; total_harga = Cat1 * jumlah_tiket; break;
        case 3: nama_tiket = "Silvervivpackage"; total_harga = Silvervivpackage * jumlah_tiket; break;
        case 4: nama_tiket = "Festivala"; total_harga = Festivala * jumlah_tiket; break;
        case 5: nama_tiket = "Festivalb"; total_harga = Festivalb * jumlah_tiket; break;
        case 6: nama_tiket = "Cat2"; total_harga = Cat2 * jumlah_tiket; break;
        case 7: nama_tiket = "Cat3"; total_harga = Cat3 * jumlah_tiket; break;
        case 8: nama_tiket = "Cat4"; total_harga = Cat4 * jumlah_tiket; break;
        case 9: nama_tiket = "Cat5"; total_harga = Cat5 * jumlah_tiket; break;
        case 10: nama_tiket = "Cat6"; total_harga = Cat6 * jumlah_tiket; break;
        case 11: nama_tiket = "Cat7"; total_harga = Cat7 * jumlah_tiket; break;
        default:
            cout << "Pilihan tiket tidak valid!" << endl;
            return 0;
    }

    // Pemilihan waktu
    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "+        Silahkan Pilih Waktu           +" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "1.  Hari 1   : 11 September 2024"          << endl;
    cout << "2.  Hari 2   : 13 September 2024"          << endl;
    cout << "3.  Hari 3   : 14 September 2024"          << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;

    // Input pilihan waktu
    cout << "\nPilih jenis waktu [1-3] : ";
    cin >> pilihan_waktu;

    // Menentukan tanggal konser
    switch (pilihan_waktu) {
        case 1: tanggal_konser = "11 September 2024"; break;
        case 2: tanggal_konser = "13 September 2024"; break;
        case 3: tanggal_konser = "14 September 2024"; break;
        default:
            cout << "Pilihan waktu tidak valid!" << endl;
            return 0;
    }

    // Output total pembayaran
    cout << "\n+++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "              DETAIL PEMBELIAN         " << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "No Telepon    : " << no_telepon << endl;
    cout << "Email         : " << email << endl;
    cout << "Tanggal Beli  : " << tanggal << endl;
    cout << "Jenis Tiket   : " << nama_tiket << endl;
    cout << "Tanggal Konser: " << tanggal_konser << endl;
    cout << "Jumlah Tiket  : " << jumlah_tiket << endl;
    cout << fixed << setprecision(0); // Menampilkan angka tanpa desimal
    cout << "Total Bayar   : Rp " << total_harga << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++" << endl;

    return 0;
}