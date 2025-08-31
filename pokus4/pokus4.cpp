#include <iostream>

using namespace std;

int main(void) {

    int a[5] = {0,1,2,3,4};

    // 20 - kazdy int ma 32 bitu = 4 byty (4 * 8 = 32), tj. 5 * 4 = 20
    cout << sizeof(a) << endl;

    int* b = a;
    cout << b << endl;

    int *p = a; // 'a' decays to a pointer to its first element
    cout << p << endl;
    // Loop through the array using pointer arithmetic
    for (int i = 0; i < sizeof(a)/sizeof(1); i++) {
        cout << "Address: " << p << " - Number: " << *p << endl;
        p++; // Increment the pointer to point to the next element
    }

    int *start = a;
    int *end = a + 5; // Pointer to the memory address just after the last element

    // Loop while the 'start' pointer is less than the 'end' pointer
    while (start < end) {
        cout << "Address: " << start << " - Number: " << *start << endl;
        start++; // Move to the next element
    }

    cout << "sizeof(int): " << sizeof(1) << endl; // int má velikost 4
    cout << "sizeof(char): " << sizeof('1') << endl; // znak má velikost 1

    return 0;
}