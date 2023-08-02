#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

bool isVowel (char chr) {
    return chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u';
}

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main() {
    int n, indice;
    char str[100][251];
    fin >> n;
    int maxim = 0;
    for (int i = 0; i <= n; i++) {
        fin.getline(str[i],251);
        int cnt_vowel = 0;
        for (int j = 0; str[i][j]; j++) {
            if (isVowel(str[i][j]))
                cnt_vowel++;
        }
        if (cnt_vowel > maxim) {
            maxim = cnt_vowel;
            indice = i;
        }
    }
    fout << str[indice];
}

