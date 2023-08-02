#include <iostream>
#include <cstring>

using namespace std;

bool isVowel (char chr) {
    return chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u';
}

int main() {
    char str[256];
    cin.getline(str,256);
    int cnt_vowel = 0;
    for (int i = 0; str[i]; i++) {
        if (isVowel(str[i]) && isVowel(str[i + 1]))
            cnt_vowel++;
    }
    cout << cnt_vowel;
}

