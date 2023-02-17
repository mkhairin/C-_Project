#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

void garis(char a, int b) {
    for(int i = 1; i<=b; i++) {
        cout << a;
    }
}

int main() {
    char namaDepan[30], namaBelakang[30], namaEmail[30];
    int NIM;

    again:
    system("cls");
    cout << "SIPADU POLITALA" << endl;
    garis('=', 35); cout << endl;
    cout << "Pendaftaran Akun Mahasiswa Politala\n";

    // user memasukkan nama depan lalu msk ke variabel
    cout << "Masukkan Nama Depan : "; cin >> namaDepan;

    // user memasukan nama belakang lalu msk ke variabel
    cout << "Masukkan Nama Belakang : "; cin >> namaBelakang;

    // user memasukan NIM belakang lalu msk ke variabel
    cout << "Masukkan NIM : "; cin >> NIM;

    // user memasukan email belakang lalu msk ke variabel
    cout << "Username Email : "; cin >> namaEmail;
    garis('=', 35); cout << endl;
    cout << endl << endl;

    system("color 2");
    // output
    cout << "Akun Kamu Sudah Dibuat\n";

    // nama yang di masukkan td akan jadi upercase dikarenakan fungsi strupr
    cout << "Nama : " << strupr(namaDepan) << " " << strupr(namaBelakang) << endl;

    // output NIM
    cout << "NIM : " << NIM << endl;

    // ouput email, email yang diinputkan bisa mngunakan huruf kapital tapi akan tetap jadi huruf kecil karana fungsi strlwr dan akan digabungkan dengan "@politala.ac.id" dengan fungsi strcat
    cout << "Username Email : " << strcat(strlwr(namaEmail),"@politala.ac.id") << endl;
    garis('=', 35); cout << endl << endl;
    char pilihan;

    // ini optional gasan handak maulangi banar ae
    cout << "Apakah Kamu Mau Mengulanginya? |Y|N| : "; cin >> pilihan;

    if(pilihan == 'y' || pilihan == 'Y') {
        goto again;
    } else {
        exit;
    }
    system("pause");
    return 0;

}