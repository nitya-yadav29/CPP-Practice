#include <iostream>
using namespace std;

int main() {
    int ar[5], p, r;
    
    for(p=0; p<5; p++) {
        cout << "enter";
        cin >> ar[p];
    }
    
    for(r=4; r>=0; --r) {
        cout << ar[r] << " ";
    }
    
    return 0;
}