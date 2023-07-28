#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 4

// マップのサイズ
int map[SIZE][SIZE];

// 各視点から見える箱の数
int viewpoints[SIZE * 4];

// マップを初期化する関数
void initialize_map() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            map[i][j] = 0;
        }
    }
}

// マップの各行と各列には1つの箱のみが配置されているかを確認する関数
int checkConstraints() {
    int i, j;
    int rowCounts[SIZE] = {0};
    int colCounts[SIZE] = {0};

    // 各行と各列の箱の数を数える
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            rowCounts[i] += (map[i][j] > 0);
            colCounts[j] += (map[i][j] > 0);
        }
    }

    // 各行と各列には1つの箱のみが配置されているかを確認する
    for (i = 0; i < SIZE; i++) {
        if (rowCounts[i] != 1 || colCounts[i] != 1) {
            return 0;
        }
    }

    return 1;
}

// 各視点から見える箱の数を満たしているかを確認する関数
int checkViewpoints() {
    int i, j;
    int count;

    // 上からの視点
    for (i = 0; i < SIZE; i++) {
        count = 1;
        for (j = 0; j < SIZE; j++) {
            if (map[j][i] > count) {
                count = map[j][i];
            }
        }
        if (count != viewpoints[i]) {
            return 0;
        }
    }

    // 下からの視点
    for (i = 0; i < SIZE; i++) {
        count = 1;
        for (j = SIZE - 1; j >= 0; j--) {
            if (map[j][i] > count) {
                count = map[j][i];
            }
        }
        if (count != viewpoints[SIZE + i]) {
            return 0;
        }
    }

    // 左からの視点
    for (i = 0; i < SIZE; i++) {
        count = 1;
        for (j = 0; j < SIZE; j++) {
            if (map[i][j] > count) {
                count = map[i][j];
            }
        }
        if (count != viewpoints[2 * SIZE + i]) {
            return 0;
        }
    }

    // 右からの視点
    for (i = 0; i < SIZE; i++) {
        count = 1;
        for (j = SIZE - 1; j >= 0; j--) {
            if (map[i][j] > count) {
                count = map[i][j];
            }
        }
        if (count != viewpoints[3 * SIZE + i]) {
            return 0;
        }
    }

    return 1;
}

// マップを表示する関数
void printMap() {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", map[i][j]);
        }
        printf("\n");
    }
}

// バックトラックによって解を探索する関数
int backtrack(int row, int col) {
    if (col >= SIZE) {
        col = 0;
        row++;
    }

    // 解が見つかった場合
    if (row >= SIZE) {
        if (checkConstraints() && checkViewpoints()) {
            return 1;
        }
        return 0;
    }

    int i;
    for (i = 1; i <= SIZE; i++) {
        map[row][col] = i;
        if (checkConstraints()) {
            if (backtrack(row, col + 1)) {
                return 1;
            }
        }
    }

    map[row][col] = 0;
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != SIZE * 4 + 1) {
        printf("Error\n");
        return 1;
    }

    int i;
    for (i = 0; i < SIZE * 4; i++) {
        viewpoints[i] = atoi(argv[i + 1]);
    }

    initialize_map();

    if (backtrack(0, 0)) {
        printMap();
    } else {
        printf("Error\n");
    }

    return 0;
}
