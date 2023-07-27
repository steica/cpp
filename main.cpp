#include <iostream>
#include <cstring>

using namespace std;

bool isVowel (char str) {
    return (str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u');
}

int main() {
    char str[101], *p;
    cin.getline(str, 101);
    p = strtok(str, " ,");
    while (p != NULL) {
        int cnt_voWel = 0;
        cout << p << " " << strlen(p) << "\n";
        for (int i = 0; i < strlen(p); i++) {
            if (isVowel(p[i]))
                cnt_voWel++;
        }
        cout << " " << cnt_voWel << endl;
        p = strtok(NULL, " ,");
    }
}


