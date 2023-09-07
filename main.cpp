#include <iostream>

using namespace std;

int main() {
    int16_t n;
    cin >> n;
    cout << ((n >> 2) << 2);
}