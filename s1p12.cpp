#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i;
    cout<<"Enter the array elements:";
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    int largest=arr[0];
    int second=arr[0];
    for(i=1;i<10;i++){
        if(arr[i]>largest){
        second=largest;
        largest=arr[i];
        }
        else if(arr[i]>second&&arr[i]!=largest)
        {
            second=arr[i];
        }
    }
        cout<<"Second largest element is = "<<second;
}
