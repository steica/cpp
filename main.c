#include <stdio.h>
#include <string.h>

int matrice[1001][1001], n, m;
int queue_y[1000000], queue_x[1000000];

int main(void) {
    FILE *input, *output;
    input = fopen("roboti.in", "r");
    output = fopen("roboti.out", "w");

    fscanf(input, "%d%d\n", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            fscanf(input, "%d", &matrice[i][j]);
            matrice[i][j] = -matrice[i][j];
        }
    }
    int dy[4] = {-1, 0, 1, 0};
    int dx[4] = {0, 1, 0, -1};
    int start_x, start_y, stop_x, stop_y;
    fscanf(input, "%d %d %d %d", &start_y, &start_x, &stop_y, &stop_x);
    fclose(input);
    queue_x[0] = start_x;
    queue_y[0] = start_y;
    matrice[start_y][start_x] = 1;
    int q_st = 0, q_dr = 1;

    while (q_st < q_dr) {
        int pozitie_curr_x = queue_x[q_st];
        int pozitie_curr_y = queue_y[q_st];
        q_st++;
        for (int i = 0; i < 4; i++) {
            int next_x = pozitie_curr_x + dx[i];
            int next_y = pozitie_curr_y + dy[i];
            if (next_x < 1 || next_x > m || next_y < 1 || next_y > n)
                continue;
            if (matrice[next_y][next_x] != 0)
                continue;
            matrice[next_y][next_x] = matrice[pozitie_curr_y][pozitie_curr_x] + 1;
            if (next_x == stop_x && next_y == stop_y) {
                fprintf(output, "%d", matrice[next_y][next_x] - 1);
                fclose(output);
                return 0;
            }
            queue_x[q_dr] = next_x;
            queue_y[q_dr] = next_y;
            q_dr++;
        }
    }
    fprintf(output, "-1\n");
    fclose(output);
}