#include <stdio.h>
#define ROWS 3
#define COLS 5

//bubble sort 
void bubbleSort(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            for (int k = 0; k < COLS - j - 1; k++) {
                if (matrix[i][k] > matrix[i][k + 1]) {
                    int temp = matrix[i][k];
                    matrix[i][k] = matrix[i][k + 1];
                    matrix[i][k + 1] = temp;
                }
            }
        }
    }
}

void printMatrix(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {9, 3, 5, 2, 1},
        {7, 6, 4, 8, 10},
        {15, 12, 11, 13, 14}
    };

    printf("Matriz original:\n");
    printMatrix(matrix, ROWS);
    
    bubbleSort(matrix, ROWS);

    printf("\nMatriz ordenada:\n");
    printMatrix(matrix, ROWS);

    return 0;
}


//busca sequencial abaixo 
#include <stdio.h>
#define ROWS 3
#define COLS 3

void searchMatrix(int matrix[][COLS], int target) {
    int found = 0;

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == target) {
                printf("O elemento %d foi encontrado na posição [%d][%d]\n", target, i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("O elemento %d não foi encontrado na matriz.\n", target);
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 5;
    
    searchMatrix(matrix, target);

    return 0;
}
//insertion sort abaixo 

#include <stdio.h>
#define ROWS 3
#define COLS 4

void insertionSort(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j < COLS; j++) {
            int key = matrix[i][j];
            int k = j - 1;

            while (k >= 0 && matrix[i][k] > key) {
                matrix[i][k + 1] = matrix[i][k];
                k--;
            }

            matrix[i][k + 1] = key;
        }
    }
}

void printMatrix(int matrix[][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {9, 3, 5, 1},
        {7, 6, 4, 2},
        {15, 12, 11, 13}
    };

    printf("Matriz original:\n");
    printMatrix(matrix, ROWS);

    insertionSort(matrix, ROWS);

    printf("\nMatriz ordenada:\n");
    printMatrix(matrix, ROWS);

    return 0;
}

//quick sort abaixo 

#include <stdio.h>

// Função para trocar dois elementos
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// Função para encontrar o pivô e particionar o vetor
int partition(int arr[][3], int low, int high) {
    int pivot = arr[high][0]; // escolhendo o último elemento como pivô
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        // Se o elemento atual for menor ou igual ao pivô
        if (arr[j][0] <= pivot) {
            i++; // incrementa o index do menor elemento
            swap(&arr[i][0], &arr[j][0]);
            swap(&arr[i][1], &arr[j][1]);
            swap(&arr[i][2], &arr[j][2]);
        }
    }
    swap(&arr[i + 1][0], &arr[high][0]);
    swap(&arr[i + 1][1], &arr[high][1]);
    swap(&arr[i + 1][2], &arr[high][2]);

    return (i + 1);
}

// Função recursiva de ordenação Quick Sort
void quickSort(int arr[][3], int low, int high) {
    if (low < high) {
        // Encontra o pivô e particiona o vetor
        int pi = partition(arr, low, high);

        // Ordena os elementos separadamente antes e depois da partição
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Função para imprimir a matriz bidimensional
void printMatrix(int arr[][3], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[][3] = {{5, 8, 3}, {2, 1, 4}, {7, 6, 9}, {10, 12, 11}};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Matriz antes da ordenação:\n");
    printMatrix(arr, size);

    quickSort(arr, 0, size - 1);

    printf("Matriz depois da ordenação:\n");
    printMatrix(arr, size);

    return 0;
}

