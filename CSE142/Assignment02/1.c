#include <stdio.h>

void makeHorizontalLine(int size, int row, int start, int end, int grid[size][size]);
void makeVerticalLine(int size, int col, int start, int end, int grid[size][size]);

int main()
{
    int n;
    scanf("%d", &n);

    int grid[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = 0;
        }
    }

    int p1, p2;
    for (int i = 1; i < n / 2 + 1; i += 2)
    {
        p1 = i, p2 = n - 1 - i;
        makeHorizontalLine(n, p1, p1, p2, grid);
        makeHorizontalLine(n, p2, p1, p2, grid);
        makeVerticalLine(n, p1, p1, p2, grid);
        makeVerticalLine(n, p2, p1, p2, grid);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j])
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

void makeHorizontalLine(int size, int row, int start, int end, int grid[size][size])
{
    for (int i = start; i <= end; i++)
    {
        grid[row][i] = 1;
    }
}
void makeVerticalLine(int size, int col, int start, int end, int grid[size][size])
{
    for (int i = start; i <= end; i++)
    {
        grid[i][col] = 1;
    }
}