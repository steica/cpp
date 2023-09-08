#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt_par = 0, cnt_impar = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 1)
            cnt_impar++;
        else
            cnt_par++;
    }
    cout << abs(cnt_par - cnt_impar);
}