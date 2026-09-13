#include <iostream>
using namespace std;

int main()
{
    int original,n, digit, reverse=0;
    cout<<"Enter a number:";
     cin>>original;
     n=original;
       while(n!=0)
       {
           digit=n%10;
           reverse=reverse*10+digit;
           n=n/10;
          
       }
       
      cout<<"Reverse number is:"<<reverse<<endl;
    
    
    if(original==reverse)
    cout<<"Number is palidrone ";
    else
    cout<<"Number is not palidrone";
}