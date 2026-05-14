#include <iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int n1, int n2) {
    cout << "\nIntersection elements:= ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr1[5] = {};
    int arr2[5] = {};

    cout << "Enter elements of first array:=\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter arr1[" << i << "]:=";
        cin >> arr1[i];
    }

    cout << "\nEnter elements of second array:=\n\n";

    for (int i = 0; i < 5; i++) {
        cout << "Enter arr2[" << i << "]:=";
        cin >> arr2[i];
    }

    intersection(arr1, arr2, 5, 5);

    return 0;
}