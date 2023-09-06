#include <iostream>

using namespace std;

int main() {
    int64_t n;
    int b;
    cin >> n >> b;
    n = n & ~ (1 << b);
    cout << n;
}