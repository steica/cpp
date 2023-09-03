#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int cop_x = x, cop_y = y;
    int cif_1_x = 0, cif_1_y = 0;
    while (x) {
        if (x % 2 == 1)
            cif_1_x++;
        x /= 2;
    }
    while (y) {
        if (y % 2 == 1)
            cif_1_y++;
        y /= 2;
    }
   if (cif_1_x == cif_1_y) {
        if (x < y)
            cout << cop_x;
        else
            cout << cop_y;
    }
    else if (cif_1_y > cif_1_x)
        cout << cop_y;
    else
        cout << cop_x;
}
