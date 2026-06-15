#include <iostream>
using namespace std;
int main()
{
    int p, q, r;
    for(p=1;p<=5;p++)
    {
        for(q=1;q<=5;q++)
        {
            if(p==1||p==5||q==1||q==5)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}