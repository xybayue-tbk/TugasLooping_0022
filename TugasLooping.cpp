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