#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

ifstream fin("ore.in");
ofstream fout("ore.out");

struct Eveniment {
    int h, m, s;
};

int main() {
    Eveniment event1, event2;
    fin >> event1.h >> event1.m >> event1.s;
    fin >> event2.h >> event2.m >> event2.s;
    fout << event1.h << ": " << event1.m << ": " << event1.s;
    fout << "\n";
    fout << event2.h << ": " << event2.m << ": " << event2.s;
    fout << "\n";
    fout << 3600 * event1.h + 60 * event1.m + event1.s;
    fout << "\n";
    fout << 3600 * event2.h + 60 * event2.m + event2.s;
    fout << "\n";
    int timp_total = 3600 * event1.h + 60 * event1.m + event1.s + 3600 * event2.h + 60 * event2.m + event2.s;
    fout << timp_total / 3600 << ": " << timp_total % 3600 / 60 << ": " << (timp_total % 3600 % 60);
}

