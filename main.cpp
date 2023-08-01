#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char chr) {
    return (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u');
}


int main() {
    char str[101];
    cin.getline(str, 101);
    bool exista_vocale = false;
    for (int i = 0; str[i]; i++) {
        if (isVowel(str[i]))
            exista_vocale = true;
    }
    if (exista_vocale) {
        for (int i = 0; str[i]; i++) {
            cout << str[i];
            if (isVowel(str[i]))
                cout << "*";
        }
    }
    else
        cout << "FARA VOCALE";
}
