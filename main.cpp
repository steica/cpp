#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[30]{}, ind = 0;
    while (n) {
        a[ind++] = n % 2;
        n /= 2;
    }
    int putere = 1;
    for (int i = 0; i < ind; i++) {
        if (a[i] == 1)
            cout << putere << " ";
        putere *= 2;
    }
}