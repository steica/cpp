#include <iostream>

using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1, j = n; i <= j; i++, j--) {
        cout << a[i] << " ";
        if (i < j)
            cout << a[j] << " ";
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