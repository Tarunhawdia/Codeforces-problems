// Problem: A - Watermelon
// Contest: 4
// Language: C++20 (GCC 13-64)
// Tags: brute force, math, *800

#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}