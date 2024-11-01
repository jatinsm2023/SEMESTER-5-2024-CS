// Typecasting and pointers

void exchange(int *ptrA, int *ptrB) {                 // pointers
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    return;
}

void selectionSort(int *array, int length) {
    int i, j, minIndex;
    for (i = 0; i < length - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < length; j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        exchange(&array[minIndex], &array[i]);
    }
    return;
}

int main() {
    int numbers[6];
    numbers[0] = (int)1.3;                           // type casting float -> int
    numbers[1] = (int)-4.5;
    numbers[2] = (int)7.34;
    numbers[3] = (int)8.56;
    numbers[4] = (int)-342.0;
    numbers[5] = (int)0.6;
    int size = 6;
    selectionSort(numbers, size);
    
    return 0;
}
