#include <iostream>
using namespace std;
int main()
{
    int p, q, r, s;
    for(p=1;p<=5;p++)
    {
        for(q=1;q<=p;q++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(r=1;r<=4;r++)
    {
        for(s=1;s<=5-r;s++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}