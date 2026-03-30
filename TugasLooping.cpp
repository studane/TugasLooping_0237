#include <iostream>
using namespace std;

int n;
int pilihan;

void tampilMenu() {
    cout << "\n===== MENU PROGRAM =====\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}

void inputAngka() {
    cout << "Masukkan sebuah bilangan: ";
    cin >> n;
}

bool cekPrima(int x) {
    if (x <= 1)
        return false;
    }

int i = 2;
    while (i < x) {
        if (x % i == 0) {
            return false;
        }
        i++;
    }
    return true;
