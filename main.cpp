#include <iostream>

using namespace std;

bool estePrim(int x) {
    if (x < 2)
        return false;
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return true;
}

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (estePrim(a[i])) {
            n--;
            for (int j = i; j < n; j++)
                a[j] = a[j + 1];
            i--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}


/*bool estePrim(int n) {
    if (n < 2)
        return false;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0)
            return false;
    }
    return true;
}
 */