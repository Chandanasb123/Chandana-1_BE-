#include <iostream>
using namespace std;

// Function prototypes
void inputArray(int arr[], int size);
void displayArray(int arr[], int size);
int calculateSum(int arr[], int size);
double calculateAverage(int arr[], int size);
int findMaximum(int arr[], int size);

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements of the array:" << endl;
    inputArray(arr, size);

    cout << "Array elements are: ";
    displayArray(arr, size);

    int sum = calculateSum(arr, size);
    double average = calculateAverage(arr, size);
    int max = findMaximum(arr, size);

    cout << "\nSum of the array elements: " << sum << endl;
    cout << "Average of the array elements: " << average << endl;
    cout << "Maximum element in the array: " << max << endl;

    return 0;
}

// Function to input elements into the array
void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Function to display the array elements
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to calculate the sum of the array elements
int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average of the array elements
double calculateAverage(int arr[], int size) {
    int sum = calculateSum(arr, size);
    return static_cast<double>(sum) / size;
}

// Function to find the maximum element in the array
int findMaximum(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
