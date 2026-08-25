#include <iostream>
#include <vector>
using namespace std;
//Find  the lrgest number in an array anf index 

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }
    vector<int> num(size);

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }
    int largestIndex = 0;
    for (int i = 1; i < size; i++) {
        if (num[i] > num[largestIndex]) {
            largestIndex = i;
        }
    }

    cout << "Index of largest element: " << largestIndex << endl;
    cout << "Largest element value: " << num[largestIndex] << endl;

    return 0;
}
