#include <iostream>
using namespace std;

int main() {
    int matrix[10][10];
    int n, sum = 0;

    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Display result
    cout << "Sum of main diagonal elements: " << sum << endl;

    return 0;
}
