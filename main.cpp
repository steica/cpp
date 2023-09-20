#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char chr) {
    return chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u';
}

int main() {
    char str[256];
    int cnt = 0;
    cin.getline(str, 256);
    for (int i = 1; str[i + 1]; i++) {
        if (str[i - 1] < 'a' || str[i - 1] > 'z' || str[i + 1] < 'a' || str[i + 1] > 'z')
            continue;
        if (isVowel(str[i]) && !isVowel(str[i - 1]) && !isVowel(str[i + 1]))
            cnt++;
    }
    cout << cnt;
}
