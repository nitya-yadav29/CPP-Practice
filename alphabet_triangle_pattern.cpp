#include <iostream>
using namespace std;
int main()
{
    int q, p, r;
    for(q=1;q<=5;q++)
    {
        for(p=0;p<q;p++)
        {
            cout<<(char)('A'+p)<<" ";
        }
        cout<<endl;
    }
    return 0;
}