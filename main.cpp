#include <iostream>

using namespace std;
char c[101];
int n, i, a[101], x;

int main() {

    cin >> c;
    n = 0;
    while (c[n] >= '0' && c[n] <= '9') {
        a[n] = c[n] - '0';
        n++;
    }
    n--;
    if ((n + 1) % 2 == 1) {
        cout << 1;
        for (i = 1; i < n; i = i + 2) {
            x = a[i] * 2 + a[i + 1];
            cout << x;
        };
    } else
        for (i = 0; i < n; i = i + 2)
            cout << a[i] * 2 + a[i + 1];

    return 0;
}

