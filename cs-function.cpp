#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

// fungsi menghitung total harga diamond
int menghitung_ff(int total) {
    int harga_diamond = 1000;
    int jumlah = total * harga_diamond;
    cout << "IDR." << jumlah;
    return 0;
}

int menghitung_ml(int total) {
    int harga_diamond = 5000;
    int jumlah = total * harga_diamond;
    cout << "IDR." << jumlah;
    return 0;
}

int menghitung_gi(int total) {
    int harga_diamond = 10000;
    int jumlah = total * harga_diamond;
    cout << "IDR." << jumlah;
    return 0;
}


// fungsi garis
void garis(char a, int b) {
    for(int i = 1; i<=b; i++) {
        cout << a;
    }
}


int main() {
    int pilihan_game, total_diamond;
    int nominal1, nominal2;
    int jumlah;

    garis('=', 35); cout << endl;
    cout << "\tTOP UP DIAMOND ABADI" << endl;
    garis('=', 35); cout << endl;
    cout << "\tSILAHKAN PILIH GAME:)" <<  endl << endl;
    cout << "\t1. Free Fire \t\tRp.1000" << endl;
    cout << "\t2. Mobile Legends \tRp.5000" << endl;
    cout << "\t3. Genshin Impact \tRp.10000" << endl << endl;
    cout << "Pilihan : "; cin >> pilihan_game;
    
    switch (pilihan_game)
    {
    case 1:
        cout << "Free Fire" << endl;
        cout << "Jumlah Diamond : "; cin >> total_diamond;
        jumlah = menghitung_ff(total_diamond);
        cout << "Total Pembayaran : " << jumlah << endl << endl;
        break;
    case 2:
        cout << "Mobile Legends" << endl;
        cout << "Jumlah Diamond : "; cin >> total_diamond;
        cout << "Total Pembayaran : "; menghitung_ml(total_diamond); cout << endl << endl;
        break;
    case 3:
        cout << "Genshin Impact" << endl;
        cout << "Jumlah Diamond : "; cin >> total_diamond;
        cout << "Total Pembayaran : "; menghitung_gi(total_diamond); cout << endl << endl;
        break;
    default:
        cout << "TIDAK ADA PILIHAN" << endl;
        break;
    }

    int pilihan_pembayaran;
    cout << "Silahkan Pilih Metode Pembayaran " << endl;
    cout << "1.Gopay" << endl;
    cout << "2.DANA" << endl;
    cout << "Pilihan : "; cin >> pilihan_pembayaran;

    switch (pilihan_pembayaran)
    {
    case 1:
        cout << "Gopay" << endl;
        break;
     case 2:
        cout << "DANA" << endl;
        break;
    
    default:
        cout << "Tidak Ada Pilihan!!!" << endl;
        break;
    }

    cout << "Masukkan Nominal : "; cin >> nominal1;
    if(pilihan_game == 1) {
        int uang_pembayaran;
        uang_pembayaran = nominal1 - jumlah;
        cout << "Total Pembayaran : " << uang_pembayaran << endl;
    }


    system("pause");
    return 0;
}