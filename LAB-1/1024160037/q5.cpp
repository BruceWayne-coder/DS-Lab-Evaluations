#include <iostream>
using namespace std;

int main() {
    int r, c, arr[10][10];

    cout << "Enter rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    // Row sums
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) rowSum += arr[i][j];
        cout << "Sum of row " << i + 1 << ": " << rowSum << "\n";
    }

    // Column sums
    for (int j = 0; j < c; j++) {
        int colSum = 0;
        for (int i = 0; i < r; i++) colSum += arr[i][j];
        cout << "Sum of column " << j + 1 << ": " << colSum <<
