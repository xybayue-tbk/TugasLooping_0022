#include <iostream>
using namespace std;

// =======================
// Variabel Global
// =======================
int angka = 0;
int pilihan = -1;

// =======================
// Function Cek Prima
// =======================
bool isPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

// =======================
// Function Cek Fibonacci
// =======================
bool isFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    while (c <= n) {
        if (c == n) return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

// =======================
// Prosedur Input
// =======================
void inputAngka() {
    cout << "\nMasukkan angka: ";
    cin >> angka;
}

// =======================
// Tampilkan hasil prima
// =======================
void tampilHasilPrima() {
    cout << "\n--- CEK PRIMA ---\n";

    if (isPrima(angka))
        cout << angka << " adalah bilangan PRIMA\n";
    else
        cout << angka << " bukan bilangan prima\n";
}

// Tampilkan deret prima
// =======================
void tampilDeretPrima() {
    cout << "Bilangan prima dari 1 sampai " << angka << ":\n";

    int i = 2;
    while (i <= angka) {
        if (isPrima(i)) {
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
}

// =======================
// Tampilkan hasil Fibonacci
// =======================
void tampilHasilFibonacci() {
    cout << "\n--- CEK FIBONACCI ---\n";

    if (isFibonacci(angka))
        cout << angka << " termasuk Fibonacci\n";
    else
        cout << angka << " bukan Fibonacci\n";
}

// =======================
// Tampilkan deret Fibonacci
// =======================
void tampilDeretFibonacci() {
    cout << "Deret Fibonacci sampai " << angka << ":\n";

    int a = 0, b = 1, c = 0;

    while (c <= angka) {
        cout << c << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

// =======================
// Menu
// =======================
void tampilMenu() {
    cout << "\n========== MENU ==========\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih: ";
}

int main(){
    bool jalan = true;

    while (jalan){
        tampilMenu();
        cin >> pilihan;

        switch (pilihan){

            case 1:
                inputAngka();
                tampilHasilPrima();
                tampilDeretPrima();
                break;

            case 2:
                inputAngka();
                tampilHasilFibonacci();
                tampilDeretFibonacci(); 
                break;
        }

    }
}