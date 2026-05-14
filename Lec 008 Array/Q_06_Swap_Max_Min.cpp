#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int n) {
    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }

        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    cout << "\nArray after swapping max and min:= ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[5] = {};
    int size = 5;

    cout << "Enter The Element of an array:=\n\n";

    for (int i = 0; i < size; i++) {
        cout << "Enter element of arr[" << i << "]:=";
        cin >> arr[i];
    }

    swapMaxMin(arr, size);

    return 0;
}