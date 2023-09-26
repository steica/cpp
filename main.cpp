/*#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[256];
    cin.getline(str, 255);
    char sep[ ] = " ";
    char voc[ ] = "aeiou";

    char *pointer = strtok(str, sep);
    while (pointer) {
        bool OK = true;
        for (int i = 0; pointer[i]; i++)
            if (!strchr(voc, pointer[i]))
                OK = false;
            if (OK)
                cout << pointer << "\n";
            pointer = strtok(NULL, sep);
    }
}*/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str[256];
    cin.getline(str, 255);
    char separator[] = ", .;";
    char *pointer;
    char vocale[] = "aeiou";
    pointer = strtok(str, separator);
    while (pointer) {
        bool ok = true;
        for (int i = 0; pointer[i]; i++) {
            if (!strchr(vocale, pointer[i]))
                ok = false;
        }
        if (ok)
            cout << pointer << "\n";
        pointer = strtok(NULL, separator);
    }
}