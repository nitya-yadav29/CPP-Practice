#include <iostream>
using namespace std;

int main() {
    int ar[5], p, max, g;
    
    for(p=0; p<5; p++) {
        cout << "Enter";
        cin >> ar[p];
    }
    
    max = ar[0];
    
    for(g=0; g<5; g++) {
        if(max < ar[g])
            max = ar[g];
    }
    
    cout << "maximum:" << max;
    
    return 0;
}