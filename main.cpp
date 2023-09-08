#include <iostream>

using namespace std;

bool estePrim(int n) {
    if (n < 2)
        return false;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0)
            return false;
    }
    return true;
}

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        if (estePrim(a[i])) {
            a[i] = 0;
            break;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}