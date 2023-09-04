#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int b, n;
    cin >> b >> n;
    int a[10]{};
    int numar = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int putere = 0;
    for (int i = n; i > 0; i--) {
        numar += a[i] * pow(b, putere);
        putere++;
    }
    cout << numar;
}