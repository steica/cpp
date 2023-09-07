#include <iostream>

using namespace std;

int main() {
    uint64_t n;
    cin >> n;
    int cnt = 0;
    while (n) {
        n >>= 1;
        cnt++;
    }
    cout << cnt - 1;
}