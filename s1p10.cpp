#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout<<"Enter the array elements =";
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the element to search:"<<endl;
    cin>>search;
    for(i=0;i<5;i++){
        if(arr[i]==search){
        cout<<"Element found at index = "<<i<<endl;
        cout<<"Array element is = "<<arr[i]<<endl;
        return 0;
    }
    }
    cout<<"Element not found !";
}
    
