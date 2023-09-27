#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[101];
    cin.getline(str, 100);
    char maxi[101] = "0";
    bool gasit = false;
    char *pointer = strtok(str, " ");
    while (pointer) {
        if (isdigit(pointer[0])) {
            if (pointer[0] > maxi[0]) {
                strcpy(maxi, pointer);
                gasit = true;
            }
        }
        pointer = strtok(NULL, " ");
    }
    if (gasit)
        cout << maxi;
    else
        cout << "nu exista";
}