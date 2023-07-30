#include <iostream>
#include <cstring>

using namespace std;

bool isVowel(char chr) {
    return (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' ||
            chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U');
}

int main() {
    char str[256];
    int frecv[5]{}, maxim = 0, litera;
    cin.getline (str, 256);
    for (int i = 0; str[i]; i++) {
        if (str[i] == 'a' || str[i] == 'A')
            frecv[0]++;
        if (str[i] == 'e' || str[i] == 'E')
            frecv[1]++;
        if (str[i] == 'i' || str[i] == 'I')
            frecv[2]++;
        if (str[i] == 'o' || str[i] == 'O')
            frecv[3]++;
        if (str[i] == 'u' || str[i] == 'U')
            frecv[4]++;
    }
    for (int i = 0; i <= 4; i++)
        if (frecv[i] > maxim) {
            maxim = frecv[i];
            litera = i;
        }
    if (litera == 0)
        cout << "A";
    else if (litera == 1)
        cout << "E";
    else if (litera == 2)
        cout << "I";
    else if (litera == 3)
        cout << "O";
    else
        cout << "U";
}


