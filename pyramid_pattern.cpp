#include <iostream>
using namespace std;
int main()
{
    int p, q, r;
    for(p=1;p<=5;p++)
    {
        for(q=1;q<=5-p;q++)
        {
            cout<<" ";
        }
        for(r=1;r<=p;r++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}