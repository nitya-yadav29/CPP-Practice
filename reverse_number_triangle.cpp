#include <iostream>
using namespace std;
int main()
{
    int p, q;
    for(p=1;p<=5;p++)
    {
        for(q=1;q<=p;q++)
        {
            cout<<6-q<<" ";
        }
        cout<<endl;
    }
    return 0;
}