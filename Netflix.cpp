#include <iostream>
#include <array>
#include <windows.h>
#include <string>
#include <thread>
using namespace std;

int main() {
    string namaFilm[6] = {"","Black Panther", "Avangers Endgame", "Spiderman Homecoming", "Stranger-Things", "Transformer"};
    string kualitas[4] = {"", "UHD", "HD", "Bluray"};
    char pilihan;
    int input, input1, loading = 30;
    cout << "============================\n";
    cout << "\t  Netflix" << endl;
    cout << "============================\n";
    cout << "Silahkan Unduh Film Gratis" << endl;
    cout << "============================\n";
    cout << "No\t" << "Nama Film" << endl;
    for(int i = 1; i<5; i++) {
        cout << i << "\t" << namaFilm[i] << endl;
    }
    cout << "============================\n";
    cout << "Pilih Film : "; cin >> input;

    cout << "Kualitas" << endl;
    for(int j = 1; j<4; j++) {
        cout << j << "\t" << kualitas[j] << endl;
    }
    cout << "Pilih Kualitas : "; cin >> input1;

    cout << "Apakah Kamu Ingin Mengunduh Film ini? (Y/N) "; cin >> pilihan;

    if(pilihan == 'y' || pilihan == 'Y') {
        cout << "Film : " << namaFilm[input] << endl;
        cout << "Kualitas : " << kualitas[input1] << endl;
    } else {
        exit;
    }

    cout << "Proses Mengunduh\n";
    for (int i = 0; i < loading; i++) {
    std::this_thread::sleep_for(0.8s);
    cout << "=";
    }
    cout << endl;
    cout << "Film Kamu Sudah Tersimpan:)" << endl;
    cout << endl;

    system("pause");
    return 0;
}