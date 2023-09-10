#include <iostream>
#include <cmath>

using namespace std;

struct Fractie {
    int numarator, numitor;
} F1, F2;

int cmmmdc (int x, int y) {
    int rest;
    while (y) {
        rest = x % y;
        x = y;
        y = rest;
    }
    return x;
}

int main() {
    cin >> F1.numarator >> F1.numitor >> F2.numarator >> F2.numitor;
    if (F1.numarator / F1.numitor > F2.numarator / F2.numitor)
        cout << F1.numarator / cmmmdc(F1.numarator, F1.numitor) << " " << F1.numitor / cmmmdc(F1.numarator, F1.numitor);
    else
        cout << F2.numarator / cmmmdc(F2.numarator, F2.numitor) << " " << F2.numitor / cmmmdc(F2.numarator, F2.numitor);
}