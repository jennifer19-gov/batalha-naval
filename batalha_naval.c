#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0};

    int x_vert = 1, y_vert = 2;
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_vert + i][y_vert] = 1;
        printf("Navio vertical: (%d, %d)\n", x_vert + i, y_vert);
    }

    int x_horiz = 4, y_horiz = 0;
    for (int j = 0; j < 4; j++) {
        tabuleiro[x_horiz][y_horiz + j] = 2;
        printf("Navio horizontal: (%d, %d)\n", x_horiz, y_horiz + j);
    }

    return 0;
}

