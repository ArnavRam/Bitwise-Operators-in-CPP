#include<iostream>
using namespace std;

int main(){
    int a=7;
    int b=4;

    cout<<"And "<<(a&b)<<endl;
    cout<<"Or "<<(a | b)<<endl;
    cout<<"Xor "<<(a^b)<<endl;
    cout<<"Not a "<<(~a)<<endl;
    cout<<"Not b "<<(~b)<<endl;
    cout << "Left Shift a by 2: " << (a << 2) << endl;  
    cout << "Right Shift a by 1: " << (a >> 1) << endl;
    return 0;
}

// OUTPUT
// And 4
// Or 7
// Xor 3
// Not a -8
// Not b -5
// Left Shift a by 2: 28
// Right Shift a by 1: 3
