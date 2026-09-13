#include <iostream>
using namespace std;

int main()
{ 
    int n,i,sum=0,number;
    cout<<"enter a number :";
    cin>>n;
     
       while(n!=0)
       {
        number =n%10;
        sum=sum+number;
        n=n/10;
       }
       cout<<"the sum is:"<<sum;
       return 0;
    
}