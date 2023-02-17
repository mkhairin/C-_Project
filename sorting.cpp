#include <iostream>
using namespace std;

int main() {
    int angka[]= {2,6,9,10,5};
    int length = sizeof(angka)/sizeof(*angka);
    int temp;

    for(int a = 1; a < length; a++) {
        for(int b = 0; b < length-a; b++) {
           if(angka[b] > angka[b+1]) {
                temp = angka[b];
                angka[b] = angka[b+1];
                angka[b+1] = temp;
           }
        }
    }

    cout << "Hasil" << endl;
    for(int x = 0; x<length; x++) {
        cout << " " << angka[x] << endl;
    }

    system("pause");
    return 0;
}