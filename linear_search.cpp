#include <iostream>
using namespace std;

int main() {
    int ar[5], p, r, k, flag=0;
    
    for(p=0; p<5; p++) {
        cout << "Enter";
        cin >> ar[p];
    }
    
    cout << "enter a number you want to search";
    cin >> r;
    
    for(k=0; k<5; k++) {
        if(ar[k]==r)
        {
            flag+=1;
            break;
        }
    }
    
    if(flag==1)
        cout << "Found";
    if(flag==0)
        cout << "Not Found";
    
    return 0;
}