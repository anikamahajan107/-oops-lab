#include<iostream>
using namespace std;
int main(){
    int arr[6];
    int i;
    cout<<"Enter the array elements = ";
    for(i=0;i<6;i++){
        cin>>arr[i];
    }
    int rev[6];
    for(i=0;i<6;i++){
        rev[i]=arr[5-i];
    }
    cout<<"Reverse array is : ";
    for(i=0;i<6;i++){
    cout<<rev[i]<<" ";
    }
}