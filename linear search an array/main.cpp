//
//  main.cpp
//  linear search an array
//
//  Created by maya nachiappan on 10/7/24.
//

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) // creates linear search function
{
    for (int i = 0; i < size; ++i) { // searches array for target value
        if (arr[i] == target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() 
{
    int size;

    // Ask the user for the number of elements
    cout << "Enter the number of elements in the array: " << endl;
    cin >> size;

    // Create an array of the specified size
    int* arr = new int[size];

    // Ask the user to input the elements
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i]; // inputs elements in array indexes
    }

    int target;
    cout << "Enter the value to search for: " << endl;
    cin >> target; // gets target value from user

    // uses linear search function previously created
    int index = linearSearch(arr, size, target);

    if (index != -1) {
        cout << "Value " << target << " found at index: " << index << endl;
    } else {
    cout << "Value " << target << " not found in the array." << endl;
    }
    return 0;
}
