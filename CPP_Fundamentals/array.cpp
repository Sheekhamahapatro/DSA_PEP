//create an array of size 10
//take any 10 random and init it
// print all the element
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int totalElements = sizeof(arr) / sizeof(int);

    for (int i = 0; i < totalElements; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < totalElements; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
