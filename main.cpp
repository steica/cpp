#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, b, c;
    cin >> n >> b >> c;
    int numar_b_10 = 0;
    int putere = 1;
    while (n) {
        numar_b_10 += n % 10 * putere;
        putere *= b;
        n /= 10;
    }
    int a[100]{}, ind = 0;
    while (numar_b_10) {
        ind++;
        a[ind] = numar_b_10 % c;
        numar_b_10 /= c;
    }
    for (int i = ind; i >= 1; i--) {
        cout << a[i];
    }
}