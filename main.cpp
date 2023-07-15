#include <iostream>

using namespace std;

int main() {
    char str[11];
    cin >> str;
    int n = 0;
    while (str[n] != '\0')
        n++;
    int i = n;
    while (i) {
        int j = 0;
        while (j < i) {
            cout << str[j];
            j++;
        }
        cout << endl;
        i--;
    }
    i = 0;
    while (str[i] != '\0') {
        int j = i;
        while (str[j] != '\0') {
            cout << str[j];
            j++;
        }
        cout << endl;
        i++;
    }
}
