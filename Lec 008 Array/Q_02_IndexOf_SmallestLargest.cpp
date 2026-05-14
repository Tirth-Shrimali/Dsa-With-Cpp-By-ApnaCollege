#include<iostream>
#include<string>
#include<climits>

using namespace std;

int main(){

    int nums[5] = {};

    int smallest = INT_MAX;
    int largest = INT_MIN;

    int indexSmallest = 0;
    int indexLargest = 0;

    cout << "Enter The Element of an array:= ";

    for (int i = 0; i < 5; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            indexSmallest = i;
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
            indexLargest = i;
        }
    }

    cout << "Smallest Number:= " << smallest 
         << "\tIndex:= " << indexSmallest;

    cout << "\nLargest Number:= " << largest 
         << "\tIndex:= " << indexLargest;

    return 0;
}