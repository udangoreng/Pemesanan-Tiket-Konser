#include <iostream>
#include <iomanip> // Untuk manipulasi output angka
#include <string>
#include <fstream>
using namespace std;

// Struct untuk menyimpan data tiket
struct Ticket {
    string name;  // Nama kategori tiket
    int price;    // Harga tiket
};

// Konstanta jumlah kategori tiket
#define NUM_CATEGORIES 11

// Array of struct untuk menyimpan data tiket
Ticket tickets[NUM_CATEGORIES] = {
    {"Goldvivpackage", 7650000},
    {"Cat1", 6000000},
    {"Silvervivpackage", 5150000},
    {"Festivala", 3500000},
    {"Festivalb", 2750000},
    {"Cat2", 3500000},
    {"Cat3", 2750000},
    {"Cat4", 1750000},
    {"Cat5", 1450000},
    {"Cat6", 1250000},
    {"Cat7", 950000}
};

double totalHarga(int harga, int jumlah){
    return harga * jumlah;
}

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
    for (int i = 0; i < NUM_CATEGORIES; i++) {
        cout << i + 1 << ".  " << tickets[i].name << " : Rp " << tickets[i].price << endl;
    }
    cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;

    // Input pilihan tiket
    cout << "\nPilih jenis tiket [1-" << NUM_CATEGORIES << "] : ";
    cin >> pilihan_tiket;

    // Validasi pilihan tiket
    if (pilihan_tiket < 1 || pilihan_tiket > NUM_CATEGORIES) {
    cout << "Pilihan tiket tidak valid!" << endl;
    return 0;
    }

    // Input jumlah tiket
    cout << "Masukkan jumlah tiket : ";
    cin >> jumlah_tiket;

    // Menentukan nama tiket dan total harga
    nama_tiket = tickets[pilihan_tiket-1].name;
    total_harga = totalHarga(tickets[pilihan_tiket-1].price, jumlah_tiket);

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
    cout << "              DETAIL PEMBELIAN           " << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "Nama          : " << nama << endl;
    cout << "No Telepon    : " << no_telepon << endl;
    cout << "Email         : " << email << endl;
    cout << "Tanggal Beli  : " << tanggal << endl;
    cout << "Jenis Tiket   : " << nama_tiket << endl;
    cout << "Tanggal Konser: " << tanggal_konser << endl;
    cout << "Jumlah Tiket  : " << jumlah_tiket << endl;
    cout << fixed << setprecision(0); // Menampilkan angka tanpa desimal
    cout << "Total Bayar   : Rp " << total_harga << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++" << endl;

    ofstream buatStruk("struk.txt");
    
    buatStruk << "\n+++++++++++++++++++++++++++++++++++++++" << endl;
    buatStruk << "              DETAIL PEMBELIAN           " << endl;
    buatStruk << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    buatStruk << "Nama          : " << nama << endl;
    buatStruk << "No Telepon    : " << no_telepon << endl;
    buatStruk << "Email         : " << email << endl;
    buatStruk << "Tanggal Beli  : " << tanggal << endl;
    buatStruk << "Jenis Tiket   : " << nama_tiket << endl;
    buatStruk << "Tanggal Konser: " << tanggal_konser << endl;
    buatStruk << "Jumlah Tiket  : " << jumlah_tiket << endl;
    buatStruk << fixed << setprecision(0); // Menampilkan angka tanpa desimal
    buatStruk << "Total Bayar   : Rp " << total_harga << endl;
    buatStruk << "+++++++++++++++++++++++++++++++++++++++++" << endl;
    
    buatStruk.close();

    return 0;
}