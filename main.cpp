#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Elev {
    char nume[101], prenume[101];
    int media1, media2, media3;
    double media_g;
} a[101];

///int strcmp(char nume[20], char nume1[20]);

int main() {
    int n, cerinta;
    cin >> n >> cerinta;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].nume >> a[i].prenume >> a[i].media1 >> a[i].media2 >> a[i].media3;
    }
    for (int i = 1; i <= n; i++)
        a[i].media_g = (a[i].media1 + a[i].media2 + a[i].media3) / 3.0;
    double media_clasa = 0;
    for (int i = 1; i <= n; i++)
        media_clasa += a[i].media_g;
    media_clasa /= n;
    int numar_elevi = 0;
    if (cerinta == 1) {
        for (int i = 1; i <= n; i++) {
            if (a[i].media_g >= media_clasa)
                numar_elevi++;
        }
        cout << numar_elevi;
    }
    else {
        cout << fixed << setprecision(2) << media_clasa << "\n";
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (a[i].media_g < a[j].media_g)
                    swap(a[i], a[j]);
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (a[i].media_g == a[j].media_g && strcmp(a[i].nume, a[j].nume) > 0)
                    swap(a[i], a[j]);
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (a[i].media_g == a[j].media_g && strcmp(a[i].nume, a[j].nume) == 0 && strcmp(a[i].prenume, a[j].prenume) > 0)
                    swap(a[i], a[j]);
        for (int i = 1; i <= n; i++) {
            cout << a[i].nume << " " << a[i].prenume << " " << fixed << setprecision(2) << a[i].media_g << "\n";;
        }
    }
    return 0;
}


