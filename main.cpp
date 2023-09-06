#include <iostream>

using namespace std;

int main() {
    int T, b;
    uint64_t n;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> n >> b;
        cout << ((n >> b) & 1);
    }
}