#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long b, n, p;
    cin >> b >> n >> p;
    long long result = 1;
    while (n) {
        if (n % 2 == 1) {
            result = (b * result) % (long long)pow(10, p);
        }
        b = (b * b) % (long long) pow(10, p);
        n /= 2;
    }
    cout << result;
}





