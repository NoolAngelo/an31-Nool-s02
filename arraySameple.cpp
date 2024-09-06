/*
    Code along
    - declare and initialize an array
    - print the array
    - find the sum of array elements
    - modify the array elements
    - find the maximum and minimum element in the array
*/

#include <iostream>
#include <limits>
using namespace std;


void printArray(const int arr[], int size){
    cout << "Array elements: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}

int findSum(const int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int MaxMin(const int arr[], int size){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}

int main(){
    //user asked for size of array
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int numbers[size];

    //get the elements of array from user
    cout << "Enter"<< size << " elements of array : ";
    for (size_t i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    

    //printing the elements of the array
    printArray(numbers, size);
    
    //finding the sum and print
    int sum = findSum(numbers, size);
    cout << "Sum of the array elements: " << sum << endl;

    return 0;
}

/*
    Mini-Activity 
    Create two functions:
      - modify Element Function
         - this function modifies the value of specific elements on the array based on the provided index and new value

      - findMinMax Function
        - this function findthes the minimum and maximum values in the array

      - this program must accepts user inputs 
      - screensho your code based on your output  
*/