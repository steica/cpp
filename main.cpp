#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

ifstream fin("capslock.in");
ofstream fout("capslock.out");

int main() {
    char str[256];
    fin.getline(str, 256);
    bool CAPS = false;
    for (int i = 0; str[i]; i++)
        if (str[i] == '#')
            CAPS = !CAPS;
        else if (str[i] == ' ')
            fout << str[i];
        else {
            if (CAPS)
                str[i] -= 32;
            fout << str[i];
        }
}

