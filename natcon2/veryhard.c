#include <stdio.h>

#define MAX 100

char map[MAX][MAX];
int visited[MAX][MAX];
int queueR[MAX * MAX];
int queueC[MAX * MAX];
int front = 0, rear = 0;
int rows, cols;

// Directions: up, down, left, right
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

int main() {

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int startR = -1, startC = -1;
    int countY = 0;

    printf("Enter the map:\n");
    for (int i = 0; i < rows; i++) {
        scanf("%s", map[i]);
        for (int j = 0; j < cols; j++) {
            if (map[i][j] == 'C') {
                startR = i;
                startC = j;
            }
            if (map[i][j] == 'Y') {
                countY++;
            }
        }
    }

    if (countY > 1) {
        printf("Too many destinations.\n");
        return 0;
    }
    if (startR == -1) {
        printf("No starting point. Failed to start.\n");
        return 0;
    }
    if (countY == 0) {
        printf("Cody cannot find destination.\n");
        return 0;
    }

    queueR[rear] = startR;
    queueC[rear] = startC;
    rear++;
    visited[startR][startC] = 1;

    int steps = 0;

    while (front < rear) {
        int size = rear - front; // Number of elements in current level
        for (int i = 0; i < size; i++) {
            int r = queueR[front];
            int c = queueC[front];
            front++;

            if (map[r][c] == 'Y') {
                printf("Number of steps required = %d\n", steps);
                return 0;
            }

            for (int d = 0; d < 4; d++) {
                int nr = r + dr[d];
                int nc = c + dc[d];

                if (nr >= 0 && nr < rows && nc >= 0 && nc < cols &&
                    !visited[nr][nc] && (map[nr][nc] == 'O' || map[nr][nc] == 'Y')) {

                    queueR[rear] = nr;
                    queueC[rear] = nc;
                    rear++;
                    visited[nr][nc] = 1;
                }
            }
        }
        steps++;
    }

    printf("Cody cannot reach destination.\n");

    return 0;
}
