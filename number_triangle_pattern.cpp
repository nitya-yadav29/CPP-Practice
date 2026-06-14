#include <iostream>
using namespace std;
int main()
{
    int p, q, r=0;
    for(p=1;p<=5;p++)
    {
        for(q=1;q<=p;q++)
        {
            cout<<q<<" ";
        }
        cout<<endl;
    }
    return 0;
}