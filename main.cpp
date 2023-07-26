#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    cin >> n;
    int elem;
    int queue[1000]{};
    int left = 0, right = 0;
    for (int i = 0; i < n; i++) {
        char str[6];
        cin >> str;
        if (strcmp(str, "front") == 0) {
            if (left == right)
                continue;
            cout << queue[left] << "\n";
        } else if (strcmp(str, "push") == 0) {
            cin >> elem;
            queue[right++] = elem;
        } else {
            if (right > left)
                left++;
        }
    }
}


