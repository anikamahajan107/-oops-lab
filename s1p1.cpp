
#include <iostream>
using namespace std;

int FindMax(int,int,int);
int main()
{ 
    int a=65,b=85,c=213;
    
   
   cout<<FindMax(a,b,c)<<endl;
   return 0;
}

int FindMax(int x,int y,int z)
{
   int max=x; //x=65
    if(y>max)
   max=y;
    if(z>max)
  max=z;
    return max;
}