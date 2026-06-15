#include <iostream>
using namespace std;

int main() {
    int ar[5], p, v=0;
    
    for(p=0; p<5; p++) {
        cout << "Enter";
        cin >> ar[p];
        v = v + ar[p];
    }
    
    cout << "sum of elements of array:" << v;
    
    return 0;
}