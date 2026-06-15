#include <iostream>
using namespace std;

int main() {
    int ar[5], p, r, even=0, odd=0;
    
    for(p=0; p<5; p++) {
        cout << "Enter";
        cin >> ar[p];
        if(ar[p]%2==0)
            even+=1;
        else
            odd+=1;
    }
    
    cout << "Even:" << even;
    cout << "Odd:" << odd;
    
    return 0;
}