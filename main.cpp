#include <iostream>
#include <cstring>

using namespace std;

void FNume (char s[], char id[]) {
    char *pointer = strchr (s, ' ');
    strcpy (id, pointer + 1);
    strcat (id, "2022");
}

int main() {
    char str[51], id[50];
    cin.getline (str, 51);
    FNume(str, id);
    cout << id;

}