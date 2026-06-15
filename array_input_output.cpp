#include <iostream>
using namespace std;

int main() {
    int ar[5], y, g;
    
    for(y=0; y<5; y++) {
        cout << "enter";
        cin >> ar[y];
    }
    
    for(g=0; g<5; g++) {
        cout << ar[g] << " ";
    }
    
    return 0;
}