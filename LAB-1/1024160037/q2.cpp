#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int length = n;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length;) {
            if (arr[i] == arr[j]) {
                // Shift elements left to remove duplicate
                for (int k = j; k < length - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                length--;
            } else {
                j++;
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < length; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
