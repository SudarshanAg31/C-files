#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n); 
    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isTopFolded = 1;
    for (int i = 0; i < n; i++) {
        if (matrix[0][i] != 0) {
            isTopFolded = 0;
            break;
        }
    }
    int isBottomFolded = 1;
    for (int i = 0; i < n; i++) {
        if (matrix[n-1][i] != 0) {
            isBottomFolded = 0;
            break;
        }
    }
    int isLeftFolded = 1;
    for (int i = 0; i < n; i++) {
        if (matrix[i][0] != 0) {
            isLeftFolded = 0;
            break;
        }
    }
    int isRightFolded = 1;
    for (int i = 0; i < n; i++) {
        if (matrix[i][n-1] != 0) {
            isRightFolded = 0;
            break;
        }
    }
    if (isTopFolded) {
        printf("Folded top\n");
    } else if (isBottomFolded) {
        printf("Folded bottom\n");
    } else if (isLeftFolded) {
        printf("Folded left\n");
    } else if (isRightFolded) {
        printf("Folded right\n");
    } else {
        printf("Not Folded\n");
    }
    
    return 0;
}
