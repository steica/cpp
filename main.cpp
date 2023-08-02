#include <iostream>
#include <cstring>

using namespace std;

int frecv[150];

int main() {
    char str_1[21], str_2[21];
    cin >> str_1 >> str_2;
    bool is_anagram = true;
    for (int i = 0; str_1[i]; i++) {
        frecv[str_1[i]]++;
    }
    for (int j = 0; str_2[j]; j++) {
        frecv[str_2[j]]--;
    }
    for (int i = 'a'; i <= 'z'; i++) {
        if (frecv[i] != 0) {
            is_anagram = false;
            break;
        }
    }
    if (is_anagram)
        cout << "1";
    else
        cout << "0";
}

