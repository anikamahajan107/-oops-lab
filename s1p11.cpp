#include<iostream>
using namespace std;

int main(){
    int arr[10];
    int i;
   cout<<"Enter the array elements:";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
 int search;
 cout<<"Enter the element to search:"<<endl;
 cin>>search;
 int count =0;
 for(i=0;i<10;i++){
     if(arr[i]==search){
     count++;
     }
 }
 cout<<"Number of times element appears is ="<<count;
}