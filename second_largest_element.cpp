#include <iostream>
using namespace std;

int main()
{
    int ar[5], p, r, l, sl = -1;

    for(p = 0; p < 5; p++)
    {
        cout << "Enter";
        cin >> ar[p];
    }

    l = ar[0];

    for(r = 0; r < 5; r++)
    {
        if(ar[r] > l)
        {
            sl = l;
            l = ar[r];
        }
        else if(ar[r] < l && ar[r] > sl)
        {
            sl = ar[r];
        }
    }

    cout << "largest: " << l << endl;

    if(sl == -1)
        cout << "second largest: None";
    else
        cout << "second largest: " << sl;

    return 0;
}