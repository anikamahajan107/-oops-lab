#include <iostream>
using namespace std;

int main()
{
    int n,i,prod;
    for(n=1;n<=10;n++)
    {
        prod=1;
        for(i=1;i<=n;i++)
        {
            prod=prod*i;
            
        }
        cout<<prod<<endl;
        
    }


    return 0;
}
