#include <iostream>

using namespace std;

void stergere(int a[], int & n, int p) {
    for (int i = p; i < n; i++)
        a[i] = a[i + 1];
    n--;
}

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            stergere(a, n, i);
            i--;
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}


/*
 *
1. bool estePrim(int n) {
    if (n < 2)
        return false;
    for (int d = 2; d * d <= n; d++) {
        if (n % d == 0)
            return false;
    }
    return true;
}

2. void stergere(int a[], int & n, int p) {
    for (int i = p; i < n; i++)
        a[i] = a[i + 1];
    n--;
}
 *
 */