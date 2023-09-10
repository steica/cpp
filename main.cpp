#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Coordonate {
    double abcisa, ordonata;
} axa;

int main() {
    int n;
    cin >> n;
    double distanta, distanta_max = 0;
    int numar_puncte = 0;
    double a[100]{};
    int ind = 0;
    for (int i = 0; i < n; i++) {
        cin >> axa.abcisa >> axa.ordonata;
        distanta = sqrt (pow(axa.abcisa, 2) + pow(axa.ordonata, 2));
        a[ind++] = distanta;
        if (distanta_max < distanta)
            distanta_max = distanta;
    }
    for (int i = 0; i < ind; i++) {
        if (a[i] == distanta_max)
            numar_puncte++;
    }
    cout << fixed << setprecision(3) << distanta_max << " " << numar_puncte;

}