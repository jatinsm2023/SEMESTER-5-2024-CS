// Arrays (multidimensional), loops and nested loops

int SIZE = 4;

void calculateCofactor(int matrix[SIZE][SIZE], int tempMatrix[SIZE][SIZE], int excludeRow, int excludeCol, int dim) {
    int tempRow = 0, tempCol = 0, i = 0, j = 0;
 
    for (i = 0; i < dim; i++) {                         // nested for loop
        for (j = 0; j < dim; j++) {
            if (i != excludeRow && j != excludeCol) {
                tempMatrix[tempRow][tempCol++] = matrix[i][j];
            }
            if (tempCol == dim - 1) {
                tempCol = 0;
                tempRow++;
            }
        }
    }
    return;
}

int main() {
    int array1D[5];                                    // 1D integer array
    int idx = 0;

    while (idx < 5) {                                  // while loop
        array1D[idx++] = idx; 
    }

    int totalSum = 0, len = 5;
    idx = 0;
    do {                                               // do-while loop
        totalSum += array1D[idx++];
    } while (idx < len);

    int matrix2D[SIZE][SIZE];
    int row = 0, col = 0, initialValue = 20;

    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            matrix2D[row][col] = initialValue++;
        }
    }

    int cofactorMatrix[SIZE][SIZE];
    calculateCofactor(matrix2D, cofactorMatrix, 0, 0, SIZE);

    return 0;
}
