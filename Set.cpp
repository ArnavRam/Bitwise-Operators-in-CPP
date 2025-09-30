#include <iostream>
using namespace std;

int main() {
    int a, set, output;
    cout << "Enter the number to set\n";
    cin >> a;
    cout << "Enter the bit to set\n";
    cin >> set;

    int x = 1 << set;       
    output = a | x;        

    cout << "Set number is " << output;
    return 0;
}

// OUTPUT
// Enter the number to set
// 50
// Enter the bit to set
// 3 
// Set number is 58
