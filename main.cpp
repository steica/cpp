#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char chr) {
    return (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
            chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U');
}


int main() {
    char str[11];
    cin >> str;
    int ind_vocala = -1, ind_consoana = -1;
    for (int i = 0; str[i]; i++) {
        if (isVowel(str[i]) && ind_vocala == -1)
            ind_vocala = i;
        if (!isVowel(str[i]))
            ind_consoana = i;
    }
    swap(str[ind_vocala], str[ind_consoana]);
    if (ind_vocala != -1 && ind_consoana != -1)
        cout << str;
    else
        cout << "IMPOSIBIL";
}
