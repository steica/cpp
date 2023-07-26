#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[49][21];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> str[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j ++) {
            if (str[i][0] >= str[j][0])
                swap(str[i], str[j]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << str[i] << " ";
}


