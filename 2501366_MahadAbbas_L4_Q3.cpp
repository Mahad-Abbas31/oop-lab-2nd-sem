/*Create a C++ class named ArrayOperations.Create following methods in the class.
DisplayContents(int[] array): Print the contents of the array using a loop.
findEvenValues(int[] array): Finds and prints all even values in the array.
findOddValues(int[] array): Finds and prints all odd values in the array.
findMinMax(int[] array): Finds and prints min and max values in the array. Method must return
array of length 2. Minimum value should be at zero index and maximum value at index one.
SortArray(int[] array, char orderType): Sort contents of array according to orderType parameter.
If value of orderType parameter is ‘a’ or ‘A’ array must be sorted in ascending order and in case of
‘d’ or ‘D’ it must be sorter in descending order. This method will return sorted array.
In main method initialize an integer array with sample values. Create object of ArrayOperations
class and pass array to methods. Call all methods of ArrayOperations class in Main method.
*/
#include <iostream>
using namespace std;

class ArrayOperations {
public:

    // ___ Display array contents
    void DisplayContents(int array[], int size) {
        cout << "Array Contents: ";
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    // ___ Find and print even values
    void findEvenValues(int array[], int size) {
        cout << "Even Values: ";
        for (int i = 0; i < size; i++) {
            if (array[i] % 2 == 0) {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }

    // ___ Find and print odd values
    void findOddValues(int array[], int size) {
        cout << "Odd Values: ";
        for (int i = 0; i < size; i++) {
            if (array[i] % 2 != 0) {
                cout << array[i] << " ";
            }
        }
        cout << endl;
    }

    // ___ Find minimum and maximum values
    int* findMinMax(int array[], int size) {
        int min = array[0];
        int max = array[0];

        for (int i = 1; i < size; i++) {
            if (array[i] < min) {
                min = array[i];
            }
            if (array[i] > max) {
                max = array[i];
            }
        }

        int* result = new int[2];
        result[0] = min;
        result[1] = max;

        cout << "Minimum Value: " << min << endl;
        cout << "Maximum Value: " << max << endl;

        return result;
    }

    // ___ Bubble Sort array (Ascending or Descending)
    int* SortArray(int array[], int size, char orderType) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {

                if ((orderType == 'a' || orderType == 'A') && array[j] > array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }

                if ((orderType == 'd' || orderType == 'D') && array[j] < array[j + 1]) {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        return array;
    }
};

int main() {
    int arr[] = {12, 7, 9, 20, 3, 15, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayOperations obj;

    obj.DisplayContents(arr, size);
    obj.findEvenValues(arr, size);
    obj.findOddValues(arr, size);

    int* minMax = obj.findMinMax(arr, size);

    cout << "\nSorted in Ascending Order:\n";
    obj.SortArray(arr, size, 'A');
    obj.DisplayContents(arr, size);

    cout << "\nSorted in Descending Order:\n";
    obj.SortArray(arr, size, 'D');
    obj.DisplayContents(arr, size);

    delete[] minMax;

    return 0;
}