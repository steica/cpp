#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int baza_min;
    int cif_min = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        while (x) {
            if (cif_min < x % 10)
                cif_min = x % 10;
            x /= 10;
        }
    }
    if (baza_min < cif_min)
        baza_min = cif_min + 1;
    cout << baza_min;
}