/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysakamo <rysakamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:36:32 by rysakamo          #+#    #+#             */
/*   Updated: 2023/07/16 14:43:17 by rysakamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define SIZE 4

void    printBoard(int board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
    for (int col = 0; col < SIZE; col++) {
        char digit = board[row][col] + '0';
        write(1, &digit, 1);
        if (col < SIZE - 1) {
            write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
    }
}

int isValidPlacement(int board[SIZE][SIZE], int row, int col, int num) {
    for (int i = 0; i < SIZE; i++) {
        if (board[row][i] == num || board[i][col] == num) {
            return 0;
        }
    }
    return 1;
}

     solveBuildingPuzzle(int board[SIZE][SIZE], int row, int col) {
    if (row >= SIZE) {
        printBoard(board);
        return 1;
    }

    if (board[row][col] != 0) {
        int nextRow = row;
        int nextCol = col + 1;
        if (nextCol >= SIZE) {
            nextRow++;
            nextCol = 0;
        }
        return solveBuildingPuzzle(board, nextRow, nextCol);
    }

    for (int num = 1; num <= SIZE; num++) {
        if (isValidPlacement(board, row, col, num)) {
            board[row][col] = num;
            int nextRow = row;
            int nextCol = col + 1;
            if (nextCol >= SIZE) {
                nextRow++;
                nextCol = 0;
            }
            if (solveBuildingPuzzle(board, nextRow, nextCol)) {
                return 1;
            }
            board[row][col] = 0;
        }
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        write(1, "Invalid number of arguments\n", 28);
        return 1;
    }

    int board[SIZE][SIZE] = {0};

    for (int i = 1; i < argc; i++) {
        int num = argv[i][0] - '0';
        int row = (i - 1) / SIZE;
        int col = (i - 1) % SIZE;

        if (num < 1 || num > SIZE) {
            write(1, "Invalid input\n", 14);
            return 1;
        }

        board[row][col] = num;
    }

    solveBuildingPuzzle(board, 0, 0);

    return 0;
}
