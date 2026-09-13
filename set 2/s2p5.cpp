#include <iostream>
using namespace std;
class ArraySum{
    private:
    int arr[10];
    
    public:
    ArraySum()
    {
        cout<<"Enter the Array Elements:";
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
            
        }
    }
    void findSum()
{
    cout<<"The sum of Array Elements:";
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    
}
};
int main(){
    ArraySum a;
    a.findSum();
    
    }