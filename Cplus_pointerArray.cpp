// Pointer ke Array
#include <iostream>
using namespace std;

int main() {
    int arr[3] = {10, 20, 30};
    int* p = arr; // pointer ke elemen pertama array

    cout << *p << endl;       // 10
    cout << *(p + 1) << endl; // 20
    cout << *(p + 2) << endl; // 30

    return 0;
}