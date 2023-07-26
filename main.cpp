#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    int elem;
    int stiva[1000]{};
    int height_stiva = 0;
    for (int i = 0; i < n; i++) {
        char str[5];
        cin >> str;
        if (strcmp(str, "top") == 0) {
            if (height_stiva > 0)
                cout << stiva[height_stiva - 1] << "\n";
        }
        else if (strcmp(str, "push") == 0) {
            cin >> elem;
            stiva[height_stiva++] = elem;
        }
        else {
            if (height_stiva > 0)
                height_stiva--;
        }
    }
}


