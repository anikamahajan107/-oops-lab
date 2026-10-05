#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>arr(10);
    cout<<"Enter the array elements:";
    for(int i=0;i<10;i++){
        cin>>arr.at(i);
    }
        int n;
        cout<<"Enter the  index:";
        cin>>n;
        try{
            if(n>=10){
                throw out_of_range("Index greater than or equal to 10");
            }
            cout<<"Element="<<arr.at(n);
        }
        catch(out_of_range &e ){
            cout<<"Not valid";
        }
    }
