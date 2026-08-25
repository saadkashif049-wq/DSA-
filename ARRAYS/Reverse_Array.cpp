//Reverse of an array (2 - Pointer Approach)
#include <iostream>
#include <vector>
using namespace std;

// Function to reverse array using two pointers
void reverseArray(vector<int>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        // Swap elements at left and right pointers
        swap(arr[left], arr[right]);
        
        // Move pointers towards the middle
        left++;
        right--;
    }
}

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50, 60};

    cout << "Original Array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Call reverse function
    reverseArray(numbers);

    cout << "Reversed Array: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
