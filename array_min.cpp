#include <iostream>
using namespace std;

int main() {
    int ar[5], p, min, g;
    
    for(p=0; p<5; p++) {
        cout << "Enter";
        cin >> ar[p];
    }
    
    min = ar[0];
    
    for(g=0; g<5; g++) {
        if(min > ar[g])
            min = ar[g];
    }
    
    cout << "minimum:" << min;
    
    return 0;
}