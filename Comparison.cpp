#include <iostream>
using namespace std;

int main() {
    int matrix[10][10];
    int rows, cols;

    cout << "Enter number of rows (min 2): ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    if (rows < 2) {
        cout << "Need at least 2 rows to compare.\n";
        return 0;
    }

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Comparing elements of first and second rows:\n";
    for (int j = 0; j < cols; j++) {
        cout << "Element at column " << j + 1 << ": ";
        if (matrix[0][j] == matrix[1][j]) {
            cout << "Same (" << matrix[0][j] << ")\n";
        } else {
            cout << "Different (Row 1: " << matrix[0][j] << ", Row 2: " << matrix[1][j] << ")\n";
        }
    }

    return 0;
}
