#include <stdio.h>

// Function to set specific indices to a given value
void setIndices(int array[][30], int indices[][2], int numIndices, int value) {
    for (int i = 0; i < numIndices; i++) {
        int x = indices[i][0] - 1; // Adjust indices to start from 0
        int y = indices[i][1] - 1;

        if (x >= 0 && x < 30 && y >= 0 && y < 30) {
            array[x][y] = value;
        }
    }
}

// Function to set specific indices to 3
void setIndicesTo3(int array[][30], int indices[][2], int numIndices) {
    setIndices(array, indices, numIndices, 3);
}

// Function to set specific indices to 4
void setIndicesTo4(int array[][30], int indices[][2], int numIndices) {
    setIndices(array, indices, numIndices, 4);
}

int main() {
    int array[30][30]; // Initialize a 30x30 array

    // Initialize all elements to 0
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            array[i][j] = 0;
        }
    }

    // Set specific indices to 2
    int indices_to_set_2[][2] = {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5},
        {4, 6},
        {6, 7},
        {6, 8},
        {8, 9},
        {8, 10},
        {8, 11},
        {9, 12},
        {11, 16},
        {12, 13},
        {14, 15},
        {15, 17},
        {16, 15},
        {18, 19},
        {20, 21},
        {23, 24},
        {24, 25},
        {25, 26},
        {25, 27},
        {25, 29},
        {27, 28},
        {28, 29},
        {29, 30},
        // Add more indices here as needed
    };

    int num_indices_2 = sizeof(indices_to_set_2) / sizeof(indices_to_set_2[0]);

    // Set specific indices to 3
    int indices_to_set_3[][2] = {
        {17, 18},
        // Add more indices here as needed
    };

    int num_indices_3 = sizeof(indices_to_set_3) / sizeof(indices_to_set_3[0]);

    // Set specific indices to 4
    int indices_to_set_4[][2] = {
        {22, 23},
        // Add more indices here as needed
    };

    int num_indices_4 = sizeof(indices_to_set_4) / sizeof(indices_to_set_4[0]);

    setIndices(array, indices_to_set_2, num_indices_2, 2);
    setIndicesTo3(array, indices_to_set_3, num_indices_3);
    setIndicesTo4(array, indices_to_set_4, num_indices_4);

    // Print the array vertically
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            printf("%d\n", array[i][j]); // Print vertically
        }
    }

    return 0;
}￼Enter
