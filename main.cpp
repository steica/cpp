#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Data {
    int an, luna, zi;
    int numar_ordine;
} a[1000], maxim, minim;

int main() {
    int n;
    cin >> n;
    int p, q;                                       ///p - cea mai tanara; q - cea mai batrana;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].an >> a[i].luna >> a[i].zi;
    }
    minim = a[1];
    maxim = a[1];
    for (int i = 2; i <= n; i++) {
        if (minim.an > a[i].an) {
            minim = a[i];
            q = i;
        } else if (minim.an == a[i].an && minim.luna > a[i].luna) {
            minim = a[i];
            q = i;
        } else if (minim.an == a[i].an && minim.luna == a[i].luna && minim.zi > a[i].luna) {
            minim = a[i];
            q = i;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (maxim.an < a[i].an) {
            maxim = a[i];
            p = i;
        } else if (maxim.an == a[i].an && maxim.luna < a[i].luna) {
            minim = a[i];
            p = i;
        } else if (maxim.an == a[i].an && maxim.luna == a[i].luna && maxim.zi < a[i].luna) {
            maxim = a[i];
            p = i;
        }
    }
    cout << p << " " << q;
}

