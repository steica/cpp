#include <iostream>

using namespace std;

int main() {
    char str[260];
    cin.getline(str, 260);
    str[0] -= 32;
    for (int i = 1; str[i]; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i - 1] == ' ' || str[i + 1] == '\0'))
            str[i] -= 32;
    }
    cout << str;
}