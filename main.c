#include <stdio.h>

int main() {
    int n, a, x, y;
    int freq[10000] = {0};
    scanf("%d %d %d %d", &n, &a, &x, &y);
    int queue[10000] = {a};
    int left = 0, right = 0;
    int op[] = {x, y};
    freq[a] = 1;
    while (left <= right) {
        for (int i = 0; i < 2; i++) {
           int aux = queue[left] - op[i];
           if (aux < 0 || aux > n)
               continue;
           if (freq[aux] == 0) {
               queue[++right] = aux;
               freq[aux] = 1;
           }
        }
        left++;
    }
    queue[0] = a;
    left = 0, right = 0;
    while (left <= right) {
        for (int i = 0; i < 2; i++) {
            int aux = queue[left] + op[i];
            if (aux < 0 || aux > n)
                continue;
            if (freq[aux] == 0) {
                queue[++right] = aux;
                freq[aux] = 1;
            }
        }
        left++;
    }
    for (int i = 0; i <= n; i++) {
        if (freq[i] == 1)
            printf("%d ", i);
    }
}
