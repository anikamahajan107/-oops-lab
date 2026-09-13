#include <iostream>
using namespace std;
int main(){
    int arr[5];
    int i;
    cout<<"Enter the array elements=";
    for(i=0;i<5;i++)
    { 
        cin>>arr[i];
    }
    int min=arr[0];
    for(i=1;i<5;i++){
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<" Min array element is : "<< min;
}