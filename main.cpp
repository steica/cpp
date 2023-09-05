#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int power_of_two = 1;
    while (n) {
        if (n & 1) {
            cout << power_of_two << " ";
        }
        power_of_two <<= 1;
        n >>= 1;
    }

    return 0;
}





