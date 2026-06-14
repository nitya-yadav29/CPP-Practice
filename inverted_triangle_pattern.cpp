#include <iostream>
using namespace std;
int main()
{
      int p, q;
      for(p=1;p<=5;p++)
         {
              for(q=1;q<=6-p;q++)
                {
                   cout<<"*";
                }
              cout<<endl;
         }
return 0;

}