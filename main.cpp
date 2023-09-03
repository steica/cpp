#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int Z = 0, U = 0;
    while (n) {
        if (n % 2 == 0)
            Z++;
        else
            U++;
        n /= 2;
    }
    cout << Z << " " << U;
}