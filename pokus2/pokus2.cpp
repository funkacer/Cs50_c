#include <iostream>
using namespace std;

int main() {
    int a;
    int* b = &a;
    *b = 1; // správně: přiřazení hodnoty přes ukazatel
    cout << a << endl << *b << endl; // 1 1
    cout << &a << endl << b << endl; // address address

    return 0;
}

/*
Vysvětlení:
int a; — deklaruje proměnnou a.
int* b = &a; — b je ukazatel na a.
*b = 1; — nastaví hodnotu a na 1 přes ukazatel.
cout << a << endl << *b << endl; — vypíše hodnotu a a hodnotu na adrese b, což je opět a.
*/
