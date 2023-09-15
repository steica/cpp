#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

ifstream fin("serbare.in");
ofstream fout("serbare.out");

struct Grupa {
    int nr_copii, tip_uniforma;
} a[12];

bool comparare (Grupa A, Grupa B) {
    return A.nr_copii > B.nr_copii;
}

int main() {
    int n, p;
    fin >> n >> p;
    for (int i = 1; i <= n; i++) {
        int x, y;
        fin >> x >> y;
        a[y].nr_copii += x;
        a[y].tip_uniforma = y;
    }
    sort (a + 1, a + p + 1, comparare);
    for (int i = 1; i <= p; i++)
        fout << a[i].tip_uniforma << " ";
}


