
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int i;
    cout<<"Enter the array elements="<<endl;
    for(i=0;i<5;i++)
    { 
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<" Max array element is : "<< max;
}