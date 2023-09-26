#include <iostream>
#include <cstring>

using namespace std;

int main() {
   char a[101][101];
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
       cin >> a[i];
   for (int i = 0; i < n - 1; i++) {
       for (int j = i + 1; j < n; j++) {
           if (strcmp(a[i], a[j]) > 0) {
               char dest[101];
               strcpy(dest, a[i]);
               strcpy(a[i], a[j]);
               strcpy(a[j], dest);
           }
       }
   }
   for (int i = 0; i < n; i++)
       cout << a[i] << endl;
}

