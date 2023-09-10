#include <iostream>

using namespace std;

int cmmdc(int x, int y) {
    while (y) {
        int rest = x % y;
        x = y;
        y = rest;
    }
    return x;
}

int main() {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float fr1 = a / b, fr2 = c / d;
    if (fr1 > fr2)
        cout << a / cmmdc(a, b) << " " << b / cmmdc(a, b);
    else
        cout << c / cmmdc(c, d) << " " << d / cmmdc(c, d);
}

