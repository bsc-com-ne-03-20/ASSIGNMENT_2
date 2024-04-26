#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    // Input dimensions of the array from the user
    cout << "Enter the number of rows (maximum 3): ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum number of rows allowed is 3. Exiting program." << endl;
        return 1;
    }

    cout << "Enter the number of columns (maximum 3): ";
    cin >> cols;
    if (cols > 3) {
        cout << "Maximum number of columns allowed is 3. Exiting program." << endl;
        return 1;
    }

    // Dynamically memory for the 2D array
    double **arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
2        arr[i] = new double[cols];
    }

    // Input values  of the array
    cout << "Enter the values for the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for element (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    // Output the values 
    cout << "Values of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory for the 2D array
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
