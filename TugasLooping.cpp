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
