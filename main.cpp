#include <iostream>

using namespace std;

int main() {
    int n, p, X[1500];
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
        cin >> X[i];
    for (int i = p; i < n; i++) {
        X[i] = X[i + 1];
    }
    n--;
    for (int i = 1; i <= n; i++)
        cout << X[i] << " ";
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