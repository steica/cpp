#include <iostream>

using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i += 2)
        cout << a[i] << " ";
    cout << endl;
    if (n % 2 == 1) {
        for (int i = n; i >= 1; i -= 2)
            cout << a[i] << " ";
    } else {
        for (int i = n - 1; i >= 1; i -= 2)
            cout << a[i] << " ";
    }
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